package ws

type Data struct {
	Event Event `json:"event"`
	Data  any   `json:"data"`
}

type Connect struct {
	ID string `json:"id"`
}

type PromptDTO struct {
	Input     string     `json:"input"`
	EditNodes []EditNode `json:"edit_nodes,omitempty"`
}

type EditNode struct {
	NodeID string `json:"node_id"`
	Title  string `json:"title"`
}

type SystemTypeDTO struct {
	Type DiagramSystem `json:"type"`
}
