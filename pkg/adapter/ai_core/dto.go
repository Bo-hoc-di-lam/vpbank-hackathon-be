package ai_core

type PromptDTO struct {
	Input string `json:"input"`
}

type GenIconDTO struct {
	OldDiagram string `json:"old_diagram"`
}

type AnsibleDTO struct {
	Terraform  string `json:"terraform"`
	AWSDiagram string `json:"aws_diagram"`
}

type EditDTO struct {
	Input      string     `json:"input"`
	OldDiagram string     `json:"old_diagram"`
	EditNodes  []EditNode `json:"edit_nodes"`
}

type EditNode struct {
	NodeID string `json:"node_id"`
	Title  string `json:"title"`
}

type Event struct {
	Event string `json:"event"`
	Data  Data   `json:"data"`
}

type Data struct {
	Output    string            `json:"output"`
	Positions map[string][2]int `json:"positions"`
	Comments  string            `json:"comments"`
}

type InputWrap[T any] struct {
	Input T `json:"input"`
}

type GenCodeDTO struct {
	AWSDiagram string `json:"aws_diagram"`
}
