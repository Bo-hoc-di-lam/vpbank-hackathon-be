package service

import (
	"be/pkg/adapter/ai_core"
	"be/pkg/common"
	"be/pkg/dto"
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

type AIService interface {
	Handle()
}

type aiService struct {
	m             *melody.Melody
	aiCoreAdapter ai_core.Adapter
}

func NewAIService(di *do.Injector) (AIService, error) {
	m, err := do.Invoke[*melody.Melody](di)
	if err != nil {
		return nil, err
	}
	aiCoreAdapter, err := do.Invoke[ai_core.Adapter](di)
	if err != nil {
		return nil, err

	}
	s := &aiService{
		m:             m,
		aiCoreAdapter: aiCoreAdapter,
	}
	return s, nil
}

func (a *aiService) Handle() {
	a.m.HandleConnect(func(s *melody.Session) {
		id := uuid.NewString()
		s.Set("id", id)
		if err := util.SendMsg(s, dto.WSData{
			Event: common.WSConnect,
			Data: dto.Connect{
				ID: id,
			},
		}); err != nil {
			zap.S().Errorw("error when send msg", "error", err)
		}
	})
	a.m.HandleDisconnect(func(s *melody.Session) {
		id := util.GetID(s)
		zap.S().Infow("disconnect", "id", id)
	})
	a.m.HandleMessage(func(s *melody.Session, msg []byte) {
		id := util.GetID(s)
		var data dto.WSData
		if err := json.Unmarshal(msg, &data); err != nil {
			zap.S().Infow("error when parse json", "error", err, "id", id, "data", string(msg))
			util.SendMsg(s, dto.WSData{
				Event: common.WSError,
				Data:  err.Error(),
			})
		}
		zap.S().Infow("receive", "id", id, "data", data)
		switch data.Event {
		case common.WSPrompt:
			prompt := data.Data.(string)
			a.HandlePrompt(s, prompt)
		}
	})
}

func (a *aiService) HandlePrompt(s *melody.Session, prompt string) {
	ctx := context.Background()
	id := util.GetID(s)
	parser := engine.GetParser(s)
	stream, err := a.aiCoreAdapter.Prompt(prompt)
	if err != nil {
		zap.S().Errorw("error when prompt", "id", id, "prompt", prompt, "error", err)
		return
	}
	parser.Clear()
	for {
		event, err := stream.ReadEvent()
		if errors.Is(err, io.EOF) {
			break
		}
		if err != nil {
			zap.S().Errorw("error when read event", "id", id, "error", err)
			break
		}
		if event.Event == "end" {
			break
		}
		if event.Event == "data" {
			if event.Data.Output != "" {
				parser.Append(ctx, event.Data.Output)
			}
			if event.Data.Positions != nil {
				for k, v := range event.Data.Positions {
					parser.SetPosition(k, v[0], v[1])
				}
			}
		}

	}
	parser.Flush(ctx)

}
