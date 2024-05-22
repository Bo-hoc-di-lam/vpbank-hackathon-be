package engine

import "fmt"

type Explanation struct {
	Text string `json:"text"`
}

type Position struct {
	X int `json:"x"`
	Y int `json:"y"`
}

type Vertex struct {
	Position Position `json:"position"`
	SubGraph string   `json:"sub_graph"`
	ID       string   `json:"id"`
	Text     string   `json:"text"`
	Shape    string   `json:"shape"`
}

func (v Vertex) Diff(v2 Vertex) bool {
	return v.ID != v2.ID || v.Text != v2.Text || v.Shape != v2.Shape || v.SubGraph != v2.SubGraph
}

type Link struct {
	ID     string `json:"id"`
	FromID string `json:"from_id"`
	ToID   string `json:"to_id"`
	Text   string `json:"text"`
	Type   string `json:"type"`
}

func (l Link) Key() string {
	return fmt.Sprintf("[%s]%s[%s]", l.FromID, l.Type, l.ToID)
}

func (l Link) Diff(l2 Link) bool {
	return l.FromID != l2.FromID || l.ToID != l2.ToID || l.Text != l2.Text || l.Type != l2.Type
}

type SubGraph struct {
	ID     string    `json:"id"`
	Root   *SubGraph `json:"-"`
	Parent string    `json:"-"`
	Text   string    `json:"text"`
}

func (s SubGraph) Diff(s2 SubGraph) bool {
	return s.Parent != s2.Parent || s.Text != s2.Text
}
