package service

import (
	"be/pkg/adapter/ai_core"
	"be/pkg/common/ws"
	"be/pkg/engine"
	"be/pkg/util"
	"context"
	"encoding/json"
	"github.com/google/uuid"
	"github.com/olahol/melody"
	"github.com/samber/do"
	"go.uber.org/zap"
	"time"
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
		nameplate, _ := s.Keys["nameplate"].(string)

		// generate uid
		uid := uuid.NewString()
		ws.SetUID(s, uid)
		zap.S().Infow("user joined", "uid", uid)
		// join room
		if nameplate != "" {
			room, err := r.office.GetRoom(nameplate)
			if err != nil {
				zap.S().Errorw("error when get room", "nameplate", nameplate, "error", err)
				s.Close()
				return
			}
			room.Join(s)
			return
		}
		// create room
		room, err := r.office.CreateRoom()
		if err != nil {
			zap.S().Errorw("error when create room", "error", err)
			s.Close()
			return
		}
		room.Join(s)
	})
	r.ws.HandleDisconnect(func(s *melody.Session) {
		uid := ws.GetUID(s)
		zap.S().Infow("user left", "uid", uid)
		room, err := r.office.GetRoomForUser(s)
		if err != nil {
			zap.S().Errorw("error when get room", "uid", uid, "error", err)
			return
		}
		r.office.Leave(s)
		room.BroadCast(ws.Leave, uid)

	})
	r.ws.HandleMessage(func(s *melody.Session, msg []byte) {
		uid := ws.GetUID(s)
		var data ws.Data
		if err := json.Unmarshal(msg, &data); err != nil {
			zap.S().Infow("error when parse json", "error", err, "uid", uid, "data", string(msg))
			ws.ForceSend(s, ws.Error, "invalid json")
		}
		room, err := r.office.GetRoomForUser(s)
		if err != nil {
			zap.S().Errorw("error when get room", "uid", uid, "error", err)
			ws.ForceSend(s, ws.Error, err.Error())
			return
		}
		room.BroadCast(ws.Lock, data)
		defer func() {
			room.BroadCast(ws.Done, data)
		}()
		now := time.Now()
		zap.S().Infow("user asked", "uid", uid, "data", data)
		defer func() {
			zap.S().Infow("user received response", "uid", uid, "tooks", time.Now().Sub(now).String(), "data", data)
		}()
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
		case ws.GenCode:
			dto, err := util.AnyToStruct[ws.SystemTypeDTO](data.Data)
			if err != nil {
				zap.S().Errorw("error when parse dto", "error", err, "data", data)
				ws.ForceSend(s, ws.Error, err.Error())
				return
			}
			zap.S().Infow("user asked to generate code", "uid", uid, "type", dto.Type)
			r.HandleGenerateCode(dto.Type, s)
		case ws.GenIcon:
			dto, err := util.AnyToStruct[ws.SystemTypeDTO](data.Data)
			if err != nil {
				zap.S().Errorw("error when parse dto", "error", err, "data", data)
				ws.ForceSend(s, ws.Error, err.Error())
				return
			}
			zap.S().Infow("user asked to generate icon", "uid", uid, "type", dto.Type)
			r.HandleGenIcon(dto.Type, s)
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

func (r *receptionist) HandleGenerateCode(ds string, s *melody.Session) {
	uid := ws.GetUID(s)
	room, err := r.office.GetRoomForUser(s)
	if err != nil {
		zap.S().Errorw("error when get room", "uid", uid, "error", err)
		ws.ForceSend(s, ws.Error, err.Error())
		return
	}
	diagram := room.CurrentDiagram(ds)
	stream, err := r.ai.GenCode(diagram)
	if err != nil {
		zap.S().Errorw("error when gen code", "uid", uid, "error", err)
		ws.ForceSend(s, ws.Error, err.Error())
		return
	}
	defer stream.Close()
	room.ResetTerraform(ds)
	room.Lock()
	defer room.Unlock()
	stream.Each(func(data ai_core.Data) error {
		if data.Output != "" {
			room.AppendTerraform(ds, data.Output)
		}
		return nil
	})
	room.FlushTerraform(ds)

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

func (r *receptionist) HandleGenIcon(ds string, s *melody.Session) {
	ctx := context.Background()
	uid := ws.GetUID(s)
	room, err := r.office.GetRoomForUser(s)
	if err != nil {
		zap.S().Error("error when get room", "uid", uid, "error", err)
		ws.ForceSend(s, ws.Error, err.Error())
		return
	}
	diagram := room.CurrentDiagram("")
	stream, err := r.ai.GenIcon(ds, diagram)
	if err != nil {
		zap.S().Errorw("error when gen icon", "uid", uid, "error", err)
		ws.ForceSend(s, ws.Error, err.Error())
		return
	}
	defer stream.Close()
	room.Reset(ds)
	room.Lock()
	defer room.Unlock()
	stream.Each(func(data ai_core.Data) error {
		if data.Output != "" {
			room.Append(ctx, ds, data.Output)
		}
		if len(data.Positions) > 0 {
			for k, v := range data.Positions {
				room.SetNodePosition(ds, k, v[0], v[1])
			}
		}
		if data.Comments != "" {
			room.AppendComment(ds, data.Comments)
		}
		return nil
	})
	room.Flush(ctx, ds)
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
	diagram := room.CurrentDiagram("")
	stream, err := r.ai.Edit(data.Input, diagram, data.EditNodes)
	if err != nil {
		zap.S().Errorw("error when edit", "uid", uid, "error", err)
		ws.ForceSend(s, ws.Error, err.Error())
		return
	}
	defer stream.Close()
	room.Reset("")
	room.Lock()
	defer func() { room.BroadCast(ws.Mermaid, room.CurrentDiagram("")) }()
	defer room.Unlock()
	stream.Each(func(data ai_core.Data) error {
		if data.Output != "" {
			room.Append(ctx, "", data.Output)
		}
		if len(data.Positions) > 0 {
			for k, v := range data.Positions {
				room.SetNodePosition("", k, v[0], v[1])
			}
		}
		if data.Comments != "" {
			room.AppendComment("", data.Comments)
		}
		return nil
	})
	room.Flush(ctx, "")
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
	room.Reset("")
	room.Lock()
	defer func() { room.BroadCast(ws.Mermaid, room.CurrentDiagram("")) }()
	defer room.Unlock()
	stream.Each(func(data ai_core.Data) error {
		if data.Output != "" {
			room.Append(ctx, "", data.Output)
		}
		if len(data.Positions) > 0 {
			for k, v := range data.Positions {
				room.SetNodePosition("", k, v[0], v[1])
			}
		}
		if data.Comments != "" {
			room.AppendComment("", data.Comments)
		}
		return nil
	})
	room.Flush(ctx, "")
}
