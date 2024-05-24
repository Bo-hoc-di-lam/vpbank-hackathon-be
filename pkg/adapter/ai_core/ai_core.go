package ai_core

import (
	"be/pkg/config"
	"bytes"
	"encoding/json"
	"fmt"
	"github.com/samber/do"
	"net/http"
	"strings"
)

type Adapter interface {
	Prompt(data string) (Decoder, error)
	Edit(prompt string, oldData string, editNode []EditNode) (Decoder, error)
	GenIcon(ds, diagram string) (Decoder, error)
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

func (a *adapter) GenIcon(ds string, diagram string) (Decoder, error) {
	url := fmt.Sprint(a.conf.BaseURL, fmt.Sprintf(a.conf.GenIconEndpoint, strings.ToLower(ds)))
	body, err := json.Marshal(InputWrap[GenIconDTO]{
		GenIconDTO{
			OldDiagram: diagram,
		},
	})
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
	if resp.StatusCode != http.StatusOK {
		return nil, fmt.Errorf("status code %d", resp.StatusCode)
	}
	return NewDecoder(resp.Body), nil
}

func (a *adapter) Edit(prompt string, oldData string, editNode []EditNode) (Decoder, error) {
	url := fmt.Sprint(a.conf.BaseURL, a.conf.EditEndpoint)
	body, err := json.Marshal(InputWrap[EditDTO]{
		EditDTO{
			Input:      prompt,
			OldDiagram: oldData,
			EditNodes:  editNode,
		},
	})
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
	if resp.StatusCode != http.StatusOK {
		return nil, fmt.Errorf("status code %d", resp.StatusCode)
	}
	return NewDecoder(resp.Body), nil
}

func (a *adapter) Prompt(data string) (Decoder, error) {
	url := fmt.Sprint(a.conf.BaseURL, a.conf.PromptEndpoint)
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
	if resp.StatusCode != http.StatusOK {
		return nil, fmt.Errorf("status code %d", resp.StatusCode)
	}
	return NewDecoder(resp.Body), nil
}
