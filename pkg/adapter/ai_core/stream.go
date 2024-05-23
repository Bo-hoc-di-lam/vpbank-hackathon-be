package ai_core

import (
	"bufio"
	"encoding/json"
	"io"
	"strings"
)

type Decoder interface {
	io.Closer
	Read() ([]byte, error)
	Next() (*Event, error)
}

type decoder struct {
	originStream io.ReadCloser
	stream       *bufio.Reader
}

func NewDecoder(stream io.ReadCloser) Decoder {
	return &decoder{
		originStream: stream,
		stream:       bufio.NewReader(stream),
	}
}

func (d *decoder) Close() error {
	return d.originStream.Close()
}

func (d *decoder) Next() (*Event, error) {
	var event Event
	line1, err := d.Read()
	if err != nil {
		return nil, err
	}

	if len(line1) == 0 {
		return d.Next()
	}
	event.Event = string(line1)
	event.Event = strings.TrimPrefix(event.Event, "event: ")
	if event.Event == "end" {
		return nil, io.EOF
	}
	line2, err := d.Read()
	if err != nil {
		return nil, err
	}
	dataStr := strings.TrimPrefix(string(line2), "data: ")
	if err := json.Unmarshal([]byte(dataStr), &event.Data); err != nil {
		return nil, err
	}

	_, err = d.Read()
	if err != nil {
		return nil, err
	}

	return &event, nil

}

func (d *decoder) Read() ([]byte, error) {
	buf, _, err := d.stream.ReadLine()
	return buf, err
}
