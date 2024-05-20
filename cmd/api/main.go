package main

import (
	"be/pkg/adapter/ai_core"
	"be/pkg/config"
	"errors"
	"fmt"
	"go.uber.org/zap"
	"io"
	"strings"
)

func init() {
	logger, _ := zap.NewDevelopment()
	zap.ReplaceGlobals(logger)
}

func main() {
	aiConf, err := config.Load[config.AICore]()
	if err != nil {
		panic(err)
	}
	zap.S().Infow("ai config", "value", aiConf)

	adapter := ai_core.NewAdapter(aiConf)

	stream, err := adapter.Prompt(`a microservices architecture where a product page hits an api gateway, which hits microservices. The relevant microservices are:

- item API
- reviews API
- recommendations API
- auth API
- search API

Each has its own database, some have AI.

Reviews, recommendations, and search use the item API
recommendations uses the search API.`)
	if err != nil {
		panic(err)
	}
	strBuilder := new(strings.Builder)

	events := make([]ai_core.Event, 0)
	for {
		event, err := stream.ReadEvent()
		if errors.Is(err, io.EOF) {
			break
		}
		if err != nil {
			panic(err)
		}
		events = append(events, *event)
		if event.Event != "metadata" {
			strBuilder.WriteString(event.Data)
		}

	}
	zap.S().Infow("stream", "value", events)
	fmt.Println(strBuilder.String())

}
