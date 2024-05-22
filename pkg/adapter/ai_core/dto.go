package ai_core

type PromptDTO struct {
	Input string `json:"input"`
}

type Event struct {
	Event string `json:"event"`
	Data  Data   `json:"data"`
}

type Data struct {
	Output      string            `json:"output"`
	Positions   map[string][2]int `json:"positions"`
	Explanation string            `json:"explanation"`
}
