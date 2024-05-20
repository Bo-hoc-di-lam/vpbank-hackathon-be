package ai_core

import (
	"bufio"
	"io"
	"strconv"
	"strings"
)

type Decoder interface {
	io.Closer
	Read() ([]byte, error)
	ReadEvent() (*Event, error)
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

func (d *decoder) ReadEvent() (*Event, error) {
	var event Event
	line1, err := d.Read()
	if err != nil {
		return nil, err
	}
	event.Event = string(line1)
	event.Event = strings.TrimPrefix(event.Event, "event: ")

	line2, err := d.Read()
	if err != nil {
		return nil, err
	}
	event.Data = string(line2)
	event.Data = strings.TrimPrefix(event.Data, "data: ")
	unquote, err := strconv.Unquote(event.Data)
	if err == nil {
		event.Data = unquote
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
