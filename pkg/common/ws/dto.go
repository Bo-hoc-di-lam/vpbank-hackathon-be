package ws

import "be/pkg/adapter/ai_core"

type Data struct {
	Event Event `json:"event"`
	Data  any   `json:"data"`
}

type Connect struct {
	ID string `json:"id"`
}

type PromptDTO struct {
	Input     string             `json:"input"`
	EditNodes []ai_core.EditNode `json:"edit_nodes,omitempty"`
}

type SystemTypeDTO struct {
	Type string `json:"type"`
}
