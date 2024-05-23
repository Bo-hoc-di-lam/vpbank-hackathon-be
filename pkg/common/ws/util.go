package ws

import (
	"github.com/olahol/melody"
)

const (
	UIDKey       = "_uid"
	NameplateKey = "_nameplate"
)

func SetUID(s *melody.Session, uid string) {
	s.Set(UIDKey, uid)
}

func GetUID(s *melody.Session) string {
	idAny, ok := s.Get(UIDKey)
	if !ok {
		return ""
	}
	return idAny.(string)
}
func SetNameplate(s *melody.Session, nameplate string) {
	s.Set(NameplateKey, nameplate)
}

func GetNameplate(s *melody.Session) string {
	idAny, ok := s.Get(NameplateKey)
	if !ok {
		return ""
	}
	return idAny.(string)
}
