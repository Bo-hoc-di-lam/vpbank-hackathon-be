package ai_core

import (
	"be/pkg/config"
	"bytes"
	"encoding/json"
	"fmt"
	"net/http"
)

type Adapter interface {
	Prompt(data string) (Decoder, error)
}

type adapter struct {
	conf   config.AICore
	client *http.Client
}

func NewAdapter(conf config.AICore) Adapter {
	return &adapter{
		conf:   conf,
		client: &http.Client{},
	}
}

func (a *adapter) Prompt(data string) (Decoder, error) {
	url := fmt.Sprint(a.conf.BaseURL, "/stream")
	body, err := json.Marshal(PromptDTO{Input: data})
	if err != nil {
		return nil, err
	}
	req, err := http.NewRequest(http.MethodPost, url, bytes.NewReader(body))
	if err != nil {
		return nil, err
	}
	resp, err := a.client.Do(req)
	if err != nil {
		return nil, err
	}
	return NewDecoder(resp.Body), nil
}
