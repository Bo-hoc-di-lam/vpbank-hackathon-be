package ws

import (
	"bytes"
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
	b := new(bytes.Buffer)
	encoder := json.NewEncoder(b)
	encoder.SetEscapeHTML(false)
	if err := encoder.Encode(wrapper); err != nil {
		return err
	}
	x := b.Bytes()
	zap.S().Infow("send", "event", event, "data", data)
	return s.Write(x)
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
