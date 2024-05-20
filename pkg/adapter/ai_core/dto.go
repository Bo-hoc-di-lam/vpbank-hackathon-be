package ai_core

type PromptDTO struct {
	Input string `json:"input"`
}

type Event struct {
	Event string `json:"event"`
	Data  string `json:"data"`
}
