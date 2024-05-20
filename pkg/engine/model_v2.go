package engine

type Vertex struct {
	SubGraph string `json:"sub_graph"`
	ID       string `json:"id"`
	Text     string `json:"text"`
	Shape    string `json:"shape"`
}

type Link struct {
	FromID string `json:"from_id"`
	ToID   string `json:"to_id"`
	Text   string `json:"text"`
	Type   string `json:"type"`
}

type SubGraph struct {
	Parent *SubGraph `json:"-"`
	Text   string    `json:"text"`
}
