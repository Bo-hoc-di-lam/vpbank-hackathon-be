package engine

import (
	"be/pkg/common/ws"
	"be/pkg/parser/mermaid"
	"be/pkg/util"
	"context"
	"fmt"
	"github.com/olahol/melody"
	sitter "github.com/smacker/go-tree-sitter"
	"go.uber.org/zap"
	"strings"
	"sync"
)

var DEBUG = false

type Data struct {
	Vertices  map[string]*Vertex   `json:"vertices"`
	Links     map[string]*Link     `json:"links"`
	SubGraphs map[string]*SubGraph `json:"sub_graphs"`
}

func EmptyData() *Data {
	return &Data{
		Vertices:  make(map[string]*Vertex),
		Links:     make(map[string]*Link),
		SubGraphs: make(map[string]*SubGraph),
	}
}

type Room struct {
	// sync
	mu sync.RWMutex

	// info
	Nameplate string
	seat      map[string]*melody.Session

	// parser info
	parser        *sitter.Parser
	tree          *sitter.Tree
	oldData       *Data
	newData       *Data
	position      map[string]Position
	bufferLineCnt int
	data          []byte
	explain       strings.Builder
}

func NewRoom(id string) *Room {
	p := sitter.NewParser()
	p.SetLanguage(sitter.NewLanguage(mermaid.Language()))
	return &Room{
		Nameplate: id,
		seat:      make(map[string]*melody.Session),
		parser:    p,
		oldData:   EmptyData(),
	}
}

// session logic

func (r *Room) IsEmpty() bool {
	r.mu.RLock()
	defer r.mu.RUnlock()
	return len(r.seat) == 0
}

func (r *Room) Leave(s *melody.Session) {
	r.mu.Lock()
	defer r.mu.Unlock()
	id := ws.GetUID(s)
	delete(r.seat, id)
}

func (r *Room) Join(s *melody.Session) {
	r.Lock()
	defer r.Unlock()

	id := ws.GetUID(s)
	r.seat[id] = s
	ws.SetNameplate(s, r.Nameplate)
	zap.S().Infow("user joined room", "uid", id, "nameplate", r.Nameplate)

	// room info
	ws.ForceSend(s, ws.RoomInfo, r.Nameplate)

	// sub graph
	for _, v := range r.oldData.SubGraphs {
		ws.ForceSend(s, ws.AddSubGraph, v)
	}
	// vertices
	for _, v := range r.oldData.Vertices {
		ws.ForceSend(s, ws.AddNode, v)
	}

	// links
	for _, v := range r.oldData.Links {
		ws.ForceSend(s, ws.AddLink, v)
	}

	// comments
	ws.ForceSend(s, ws.SetComment, r.explain.String())
}

func (r *Room) broadCast(event ws.Event, data any) {
	for _, s := range r.seat {
		ws.ForceSend(s, event, data)
	}
}

// parser logic

func (r *Room) Reset() {
	r.Lock()
	defer r.Unlock()
	r.bufferLineCnt = 0
	r.data = []byte{}
	r.explain.Reset()
}

func (r *Room) Lock() {
	r.mu.Lock()
}

func (r *Room) Unlock() {
	r.mu.Unlock()
}

func (r *Room) CompareData() {
	if r.seat == nil {
		return
	}
	// subgraph
	{
		mpNew, mpChange, _, mpDel := util.CmpMap(r.oldData.SubGraphs, r.newData.SubGraphs)
		for _, v := range mpNew {
			r.broadCast(ws.AddSubGraph, v)
		}
		for _, v := range mpChange {
			r.broadCast(ws.ChangeSubGraph, v)
		}
		for _, v := range mpDel {
			r.broadCast(ws.DelSubGraph, v)
		}
	}

	// vertices
	{
		mpNew, mpChange, _, mpDel := util.CmpMap(r.oldData.Vertices, r.newData.Vertices)
		for _, v := range mpNew {
			r.broadCast(ws.AddNode, v)
		}
		for _, v := range mpChange {
			r.broadCast(ws.ChangeNode, v)
		}
		for _, v := range mpDel {
			r.broadCast(ws.DelNode, v)
		}
	}
	// links
	{
		mpNew, mpChange, _, mpDel := util.CmpMap(r.oldData.Links, r.newData.Links)
		for _, v := range mpNew {
			r.broadCast(ws.AddLink, v)
		}
		for _, v := range mpChange {
			r.broadCast(ws.ChangeLink, v)
		}
		for _, v := range mpDel {
			r.broadCast(ws.DelLink, v)
		}
	}

}

func (r *Room) SetNodePosition(id string, x int, y int) {
	node := r.oldData.Vertices[id]
	if node == nil {
		return
	}
	if node.Position.X != x || node.Position.Y != y {
		node.Position.X = x
		node.Position.Y = y
		r.broadCast(ws.SetNodePosition, node)
	}
}

func (r *Room) AppendComment(s string) {
	r.explain.WriteString(s)
}

func (r *Room) CurrentPrompt() string {
	return string(r.data)
}

func (r *Room) Append(ctx context.Context, s string) {
	r.data = append(r.data, []byte(s)...)
	r.bufferLineCnt++
	if r.bufferLineCnt != 0 && r.bufferLineCnt%BufferFlushThreshold == 0 {
		r.Flush(ctx)
	}
}

func (r *Room) getLink(root *sitter.Node) *Link {
	text := ""
	arrow := firstNode(root, "flow_link_arrow").Content(r.data)
	textNode := firstNode(root, "flow_arrow_text")
	if textNode != nil {
		text = textNode.Content(r.data)
	}
	return &Link{
		Text: text,
		Type: arrow,
	}
}

func (r *Room) getSubgraph(root *sitter.Node) *SubGraph {
	txt := root.Content(r.data)
	txt = strings.Split(txt, "\n")[0]
	txt = strings.TrimPrefix(txt, "subgraph ")
	txt = strings.Trim(txt, "\"")
	return &SubGraph{
		Text: txt,
		ID:   txt,
	}
}

func (r *Room) getVertex(subGraph *SubGraph, root *sitter.Node) *Vertex {
	subGraphTxt := ""
	if subGraph != nil {
		subGraphTxt = subGraph.Text
	}

	shape := ""
	text := ""
	vertex := firstNode(root, "flow_vertex")
	id := firstNode(vertex, "flow_vertex_id").Content(r.data)

	if r.newData.Vertices[id] != nil {
		return r.newData.Vertices[id]
	}
	//get shape
	for i := 0; i < int(vertex.ChildCount()); i++ {
		if util.In(VerticesShape, vertex.Child(i).Type()) {
			shapeNode := vertex.Child(i)
			shape = shapeNode.Type()
			shape = strings.TrimPrefix(shape, "flow_vertex_")
			// get text
			textNode := firstNode(shapeNode, "flow_text_literal")
			if textNode != nil {
				text = textNode.Content(r.data)
			}

			break
		}
	}

	data := &Vertex{
		ID:       id,
		Shape:    shape,
		Text:     text,
		SubGraph: subGraphTxt,
	}
	r.newData.Vertices[id] = data
	return data
}

func (r *Room) parse(ctx context.Context) {
	r.newData = EmptyData()
	tree, err := r.parser.ParseCtx(ctx, nil, r.data)
	if err != nil {
		zap.S().Error("error when parse", "error", err)
	}
	r.tree = tree
	r.travel(nil, r.tree.RootNode(), 0)
	r.CompareData()
	r.oldData = r.newData
}

func (r *Room) Flush(ctx context.Context) {
	if r.bufferLineCnt != 0 {
		r.bufferLineCnt = 0
		r.parse(ctx)
	}
	r.broadCast(ws.SetComment, r.explain.String())
}

func (r *Room) travel(subGraph *SubGraph, root *sitter.Node, level int) {

	if DEBUG {
		fmt.Print(level)
		for i := 0; i < level; i++ {
			fmt.Print("  ")
		}
		fmt.Println(root.Type(), root.Content(r.data))
	}

	if root.Type() == "ERROR" {
		return
	}

	switch root.Type() {
	case "flow_stmt_subgraph":
		pre := subGraph
		subGraph = r.getSubgraph(root)
		if pre != nil {
			subGraph.Root = pre
			subGraph.Parent = pre.Text
		}
		r.newData.SubGraphs[subGraph.Text] = subGraph
	case "end":
		subGraph = subGraph.Root
	case "flow_stmt_vertice":
		vertices := make([]*Vertex, 0)
		links := make([]*Link, 0)
		for i := 0; i < int(root.ChildCount()); i++ {
			child := root.Child(i)
			if child.Type() == "flow_node" {
				node := r.getVertex(subGraph, child)
				vertices = append(vertices, node)
			}
			if strings.HasPrefix(child.Type(), "flow_link") {
				link := r.getLink(child)
				links = append(links, link)
			}
		}
		for i := 0; i < len(links); i++ {
			links[i].FromID = vertices[i].ID
			links[i].ToID = vertices[i+1].ID
			links[i].ID = links[i].Key()
		}
		for i := 0; i < len(links); i++ {
			r.newData.Links[links[i].Key()] = links[i]
		}
		return

	}

	for i := 0; i < int(root.ChildCount()); i++ {
		r.travel(subGraph, root.Child(i), level+1)
	}
}
