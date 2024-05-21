package ai_core

import (
	"be/pkg/config"
	"bytes"
	"encoding/json"
	"fmt"
	"github.com/samber/do"
	"net/http"
)

type Adapter interface {
	Prompt(data string) (Decoder, error)
}

type adapter struct {
	conf   config.AICore
	client *http.Client
}

func NewAdapter(di *do.Injector) (Adapter, error) {
	conf, err := do.Invoke[config.AICore](di)
	if err != nil {
		return nil, err
	}
	return &adapter{
		conf:   conf,
		client: &http.Client{},
	}, nil
}

func (a *adapter) Prompt(data string) (Decoder, error) {
	url := fmt.Sprint(a.conf.BaseURL, "/mock/stream")
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
