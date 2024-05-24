package service

import (
	"be/pkg/adapter/ai_core"
	"be/pkg/common/ws"
	"be/pkg/engine"
	"be/pkg/util"
	"context"
	"encoding/json"
	"errors"
	"github.com/google/uuid"
	"github.com/olahol/melody"
	"github.com/samber/do"
	"go.uber.org/zap"
	"io"
)

type Receptionist interface {
	Work()
}

type receptionist struct {
	ws     *melody.Melody
	ai     ai_core.Adapter
	office *engine.Office
}

func NewReceptionist(di *do.Injector) (Receptionist, error) {
	websocket, err := do.Invoke[*melody.Melody](di)
	if err != nil {
		return nil, err
	}
	aiCoreAdapter, err := do.Invoke[ai_core.Adapter](di)
	if err != nil {
		return nil, err

	}
	s := &receptionist{
		ws:     websocket,
		ai:     aiCoreAdapter,
		office: engine.NewOffice(),
	}
	return s, nil
}

func (r *receptionist) Work() {
	r.ws.HandleConnect(func(s *melody.Session) {
		// generate uid
		uid := uuid.NewString()
		ws.SetUID(s, uid)
		zap.S().Infow("user joined", "uid", uid)
		// create room
		room, err := r.office.CreateRoom()
		if err != nil {
			zap.S().Errorw("error when create room", "error", err)
			return
		}
		room.Join(s)
	})
	r.ws.HandleDisconnect(func(s *melody.Session) {
		uid := ws.GetUID(s)
		zap.S().Infow("user left", "uid", uid)
		r.office.Leave(s)
	})
	r.ws.HandleMessage(func(s *melody.Session, msg []byte) {
		uid := ws.GetUID(s)
		var data ws.Data
		if err := json.Unmarshal(msg, &data); err != nil {
			zap.S().Infow("error when parse json", "error", err, "uid", uid, "data", string(msg))
			ws.ForceSend(s, ws.Error, "invalid json")
		}
		zap.S().Infow("user asked", "uid", uid, "data", data)
		switch data.Event {
		case ws.Prompt:
			dto, err := util.AnyToStruct[ws.PromptDTO](data.Data)
			if err != nil {
				zap.S().Errorw("error when parse dto", "error", err, "data", data)
				ws.ForceSend(s, ws.Error, err.Error())
				return
			}
			zap.S().Infow("use asked to prompt", "uid", uid, "prompt", dto.Input)
			r.HandleQuestion(s, dto.Input)
		case ws.PromptEdit:
			dto, err := util.AnyToStruct[ws.PromptDTO](data.Data)
			if err != nil {
				zap.S().Errorw("error when parse dto", "error", err, "data", data)
				ws.ForceSend(s, ws.Error, err.Error())
				return
			}
			zap.S().Infow("user asked to edit diagram", "uid", uid, "data", dto)
			r.HandlePromptEdit(s, dto)

		case ws.JoinRoom:
			nameplate, ok := data.Data.(string)
			if !ok {
				ws.ForceSend(s, ws.Error, "invalid nameplate")
			}
			zap.S().Infow("user asked to join room", "uid", uid, "nameplate", nameplate)
			r.HandleJoinRoom(s, nameplate)
		}
	})
}

func (r *receptionist) HandleJoinRoom(s *melody.Session, nameplate string) {
	room, err := r.office.GetRoom(nameplate)
	if err != nil {
		zap.S().Errorw("error when get room", "nameplate", nameplate, "error", err)
		ws.ForceSend(s, ws.Error, engine.ErrRoomNotFound.Error())
		return
	}
	room.Join(s)
}

func (r *receptionist) HandlePromptEdit(s *melody.Session, data ws.PromptDTO) {
	ctx := context.Background()
	uid := ws.GetUID(s)
	room, err := r.office.GetRoomForUser(s)
	if err != nil {
		zap.S().Errorw("error when get room", "error", err, "uid", uid)
		ws.ForceSend(s, ws.Error, err.Error())
		return
	}
	currentPrompt := room.CurrentPrompt()
	stream, err := r.ai.Edit(data.Input, currentPrompt, data.EditNodes)
	if err != nil {
		zap.S().Errorw("error when edit", "uid", uid, "error", err)
		ws.ForceSend(s, ws.Error, err.Error())
		return
	}
	defer stream.Close()
	room.Reset()
	room.Lock()
	defer room.Unlock()
	for {
		event, err := stream.Next()
		if errors.Is(err, io.EOF) {
			break
		}
		if err != nil {
			zap.S().Errorw("error when read event", "uid", uid, "error", err)
			ws.ForceSend(s, ws.Error, err.Error())
			break
		}
		if event.Event == "end" {
			break
		}
		if event.Event == "data" {
			if event.Data.Output != "" {
				room.Append(ctx, event.Data.Output)
			}
			if event.Data.Positions != nil {
				for k, v := range event.Data.Positions {
					room.SetNodePosition(k, v[0], v[1])
				}
			}
			if event.Data.Comments != "" {
				room.AppendComment(event.Data.Comments)
			}
		}
	}
	room.Flush(ctx)
}

func (r *receptionist) HandleQuestion(s *melody.Session, prompt string) {
	ctx := context.Background()
	uid := ws.GetUID(s)
	room, err := r.office.GetRoomForUser(s)
	if err != nil {
		zap.S().Errorw("error when get room", "uid", uid, "error", err)
		return
	}
	stream, err := r.ai.Prompt(prompt)
	if err != nil {
		zap.S().Errorw("error when prompt", "uid", uid, "prompt", prompt, "error", err)
		ws.ForceSend(s, ws.Error, err.Error())
		return
	}
	defer stream.Close()
	room.Reset()
	room.Lock()
	defer room.Unlock()
	for {
		event, err := stream.Next()
		if errors.Is(err, io.EOF) {
			break
		}
		if err != nil {
			zap.S().Errorw("error when read event", "uid", uid, "error", err)
			ws.ForceSend(s, ws.Error, err.Error())
			break
		}
		if event.Event == "end" {
			break
		}
		if event.Event == "data" {
			if event.Data.Output != "" {
				room.Append(ctx, event.Data.Output)
			}
			if event.Data.Positions != nil {
				for k, v := range event.Data.Positions {
					room.SetNodePosition(k, v[0], v[1])
				}
			}
			if event.Data.Comments != "" {
				room.AppendComment(event.Data.Comments)
			}
		}

	}
	room.Flush(ctx)
}
