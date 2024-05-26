package engine

import (
	"be/pkg/common/ws"
	"be/pkg/util"
	"errors"
	"github.com/olahol/melody"
	"go.uber.org/zap"
	"sync"
	"time"
)

const CleanInterval = time.Minute * 30

var ErrRoomNotFound = errors.New("room not found")
var ErrGenerateNameplateFailed = errors.New("generate nameplate failed")

type Office struct {
	mu   sync.RWMutex
	room map[string]*Room
}

func NewOffice() *Office {
	o := &Office{
		room: make(map[string]*Room),
	}
	// let janitor do their job
	t := time.NewTicker(CleanInterval)
	go func() {
		for range t.C {
			o.Clean()
		}
	}()

	return o
}

func (b *Office) Clean() {
	b.mu.Lock()
	defer b.mu.Unlock()
	zap.S().Info("janitor clean up the room")
	newRooms := make(map[string]*Room)
	for _, v := range b.room {
		if v.IsEmpty() {
			zap.S().Infow("room cleaned", "nameplate", v.Nameplate)
			continue
		}
		newRooms[v.Nameplate] = v
	}
	b.room = newRooms
}

func (b *Office) Leave(s *melody.Session) {
	b.mu.Lock()
	defer b.mu.Unlock()
	nameplate := ws.GetNameplate(s)
	if r, ok := b.room[nameplate]; ok {
		r.Leave(s)
	}
}

func (b *Office) CreateRoom() (*Room, error) {
	b.mu.Lock()
	defer b.mu.Unlock()
	nameplate, err := b.generateNameplate()
	if err != nil {
		return nil, err
	}
	r := NewRoom(nameplate)
	b.room[nameplate] = r
	return r, nil
}

func (b *Office) GetRoom(nameplate string) (*Room, error) {
	b.mu.RLock()
	defer b.mu.RUnlock()
	if r, ok := b.room[nameplate]; ok {
		return r, nil
	}
	return nil, ErrRoomNotFound
}

func (b *Office) GetRoomForUser(s *melody.Session) (*Room, error) {
	nameplate := ws.GetNameplate(s)
	room, err := b.GetRoom(nameplate)
	return room, err
}

func (b *Office) generateNameplate() (string, error) {
	for i := 0; i < 20; i++ {
		nameplate := util.RandString(6, util.AlphabetUpper+util.Numeric)
		if _, ok := b.room[nameplate]; !ok {
			return nameplate, nil
		}
	}
	return "", ErrGenerateNameplateFailed
}
