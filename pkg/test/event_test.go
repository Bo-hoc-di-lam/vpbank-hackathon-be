package test

import (
	"be/pkg/adapter/ai_core"
	"be/pkg/common/ws"
	"be/pkg/engine"
	"be/pkg/util"
	"encoding/json"
	"fmt"
	"testing"
)

func printJson(data any) {
	str, _ := json.Marshal(data)
	fmt.Println(string(str))
}

func TestEvent(t *testing.T) {
	node := engine.Vertex{
		Position: engine.Position{10, 20},
		SubGraph: "SubGraph",
		ID:       "ID",
		Text:     "Example Text",
		Shape:    "shape",
	}
	link := engine.Link{
		ID:     "ID",
		FromID: "A",
		ToID:   "B",
		Text:   "Example text",
		Type:   "-->",
	}
	subGraph := engine.SubGraph{
		ID:     "ID",
		Root:   nil,
		Parent: "SubGraphParent",
		Text:   "SugGraph",
	}
	arr := []ws.Data{
		{ws.Error, "err message here"},
		{ws.RoomInfo, util.RandString(6, util.AlphabetUpper+util.Numeric)},
		{ws.AddNode, node},
		{ws.DelNode, node},
		{ws.ChangeNode, node},
		{ws.AddLink, link},
		{ws.DelLink, link},
		{ws.ChangeLink, link},
		{ws.AddSubGraph, subGraph},
		{ws.DelSubGraph, subGraph},
		{ws.ChangeSubGraph, subGraph},
		{ws.SetNodePosition, node},
		{ws.SetComment, "comment"},

		{ws.Prompt, ws.PromptDTO{
			Input: "hello",
		}},
		{ws.PromptEdit, ws.PromptDTO{
			Input: "hello",
			EditNodes: []ai_core.EditNode{
				{"A", "Tittle A"},
				{"B", "Tittle B"},
			},
		}},
		{ws.JoinRoom, "ADFJL3"},
	}
	for _, v := range arr {
		fmt.Print(v.Event, " ")
		printJson(v)
	}
}
