package util

import (
	"encoding/json"
	"github.com/olahol/melody"
)

func SendMsg[T any](s *melody.Session, data T) error {
	if s == nil {
		return nil
	}
	jsonData, err := json.Marshal(data)
	if err != nil {
		return err
	}
	return s.Write(jsonData)
}

func GetID(s *melody.Session) string {
	idAny, _ := s.Get("id")
	return idAny.(string)
}
