package ws

import (
	"encoding/json"
	"errors"
	"github.com/olahol/melody"
	"go.uber.org/zap"
)

func Send[T any](s *melody.Session, event Event, data T) error {
	if s == nil {
		return errors.New("empty session")
	}
	wrapper := Data{
		Event: event,
		Data:  data,
	}
	jsonData, err := json.Marshal(wrapper)
	if err != nil {
		return err
	}
	return s.Write(jsonData)
}

func ForceSend[T any](s *melody.Session, event Event, data T) {
	id := ""
	if s != nil {
		id = GetUID(s)
	}
	err := Send(s, event, data)
	if err != nil {
		zap.S().Errorw("error when push", "error", err, "event", event, "data", data, "uid", id)
	}
}
