package engine

import (
	"be/pkg/common"
	"be/pkg/dto"
	"be/pkg/parser/mermaid"
	"be/pkg/util"
	"context"
	"fmt"
	"github.com/olahol/melody"
	sitter "github.com/smacker/go-tree-sitter"
	"go.uber.org/zap"
	"strings"
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

type MermaidEngine struct {
	wsSession *melody.Session
	parser    *sitter.Parser
	tree      *sitter.Tree
	oldData   *Data
	newData   *Data
	position  map[string]Position

	bufferLineCnt int
	data          []byte
	explain       strings.Builder
}

func NewParser(s *melody.Session) *MermaidEngine {
	p := sitter.NewParser()
	p.SetLanguage(sitter.NewLanguage(mermaid.Language()))
	return &MermaidEngine{
		wsSession: s,
		parser:    p,
		oldData:   EmptyData(),
	}
}

func (p *MermaidEngine) Reset() {
	p.bufferLineCnt = 0
	p.data = []byte{}
	p.explain.Reset()
}

func (p *MermaidEngine) Push(event common.WSEvent, data any) {
	err := util.SendMsg(p.wsSession, dto.WSData{
		Event: event,
		Data:  data,
	})
	if err != nil {
		zap.S().Errorw("error when push", "error", err, "event", event, "data", data, "id", util.GetID(p.wsSession))
	}
}

func (p *MermaidEngine) CompareData() {
	if p.wsSession == nil {
		return
	}
	// subgraph
	{
		mpNew, mpChange, _, mpDel := util.CmpMap(p.oldData.SubGraphs, p.newData.SubGraphs)
		for _, v := range mpNew {
			p.Push(common.AddSubGraph, v)
		}
		for _, v := range mpChange {
			p.Push(common.ChangeSubGraph, v)
		}
		for _, v := range mpDel {
			p.Push(common.DelSubGraph, v)
		}
	}

	// vertices
	{
		mpNew, mpChange, _, mpDel := util.CmpMap(p.oldData.Vertices, p.newData.Vertices)
		for _, v := range mpNew {
			p.Push(common.AddNode, v)
		}
		for _, v := range mpChange {
			p.Push(common.ChangeNode, v)
		}
		for _, v := range mpDel {
			p.Push(common.DelNode, v)
		}
	}
	// links
	{
		mpNew, mpChange, _, mpDel := util.CmpMap(p.oldData.Links, p.newData.Links)
		for _, v := range mpNew {
			p.Push(common.AddLink, v)
		}
		for _, v := range mpChange {
			p.Push(common.ChangeLink, v)
		}
		for _, v := range mpDel {
			p.Push(common.DelLink, v)
		}
	}

}

func (p *MermaidEngine) Flush(ctx context.Context) {
	if p.bufferLineCnt != 0 {
		p.bufferLineCnt = 0
		p.parse(ctx)
	}
	p.Push(common.SetComment, p.explain.String())
}

func (p *MermaidEngine) SetPosition(id string, x int, y int) {
	node := p.oldData.Vertices[id]
	if node == nil {
		return
	}
	if node.Position.X != x || node.Position.Y != y {
		node.Position.X = x
		node.Position.Y = y
		p.Push(common.SetNodePosition, node)
	}
}

func (p *MermaidEngine) AppendComment(s string) {
	p.explain.WriteString(s)
}

func (p *MermaidEngine) Append(ctx context.Context, s string) {
	p.data = append(p.data, []byte(s)...)
	p.bufferLineCnt++
	if p.bufferLineCnt != 0 && p.bufferLineCnt%BufferFlushThreshold == 0 {
		p.Flush(ctx)
	}
}

func (p *MermaidEngine) getLink(root *sitter.Node) *Link {
	text := ""
	arrow := firstNode(root, "flow_link_arrow").Content(p.data)
	textNode := firstNode(root, "flow_arrow_text")
	if textNode != nil {
		text = textNode.Content(p.data)
	}
	return &Link{
		Text: text,
		Type: arrow,
	}
}

func (p *MermaidEngine) getSubgraph(root *sitter.Node) *SubGraph {
	txt := root.Content(p.data)
	txt = strings.Split(txt, "\n")[0]
	txt = strings.TrimPrefix(txt, "subgraph ")
	txt = strings.Trim(txt, "\"")
	return &SubGraph{
		Text: txt,
		ID:   txt,
	}
}

func (p *MermaidEngine) getVertex(subGraph *SubGraph, root *sitter.Node) *Vertex {
	subGraphTxt := ""
	if subGraph != nil {
		subGraphTxt = subGraph.Text
	}

	shape := ""
	text := ""
	vertex := firstNode(root, "flow_vertex")
	id := firstNode(vertex, "flow_vertex_id").Content(p.data)

	if p.newData.Vertices[id] != nil {
		return p.newData.Vertices[id]
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
				text = textNode.Content(p.data)
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
	p.newData.Vertices[id] = data
	return data
}

func (p *MermaidEngine) parse(ctx context.Context) {
	p.newData = EmptyData()
	tree, err := p.parser.ParseCtx(ctx, nil, p.data)
	if err != nil {
		zap.S().Error("error when parse", "error", err)
	}
	p.tree = tree
	p.travel(nil, p.tree.RootNode(), 0)
	p.CompareData()
	p.oldData = p.newData
}

func (p *MermaidEngine) travel(subGraph *SubGraph, root *sitter.Node, level int) {

	if DEBUG {
		fmt.Print(level)
		for i := 0; i < level; i++ {
			fmt.Print("  ")
		}
		fmt.Println(root.Type(), root.Content(p.data))
	}

	if root.Type() == "ERROR" {
		return
	}

	switch root.Type() {
	case "flow_stmt_subgraph":
		pre := subGraph
		subGraph = p.getSubgraph(root)
		if pre != nil {
			subGraph.Root = pre
			subGraph.Parent = pre.Text
		}
		p.newData.SubGraphs[subGraph.Text] = subGraph
	case "end":
		subGraph = subGraph.Root
	case "flow_stmt_vertice":
		vertices := make([]*Vertex, 0)
		links := make([]*Link, 0)
		for i := 0; i < int(root.ChildCount()); i++ {
			child := root.Child(i)
			if child.Type() == "flow_node" {
				node := p.getVertex(subGraph, child)
				vertices = append(vertices, node)
			}
			if strings.HasPrefix(child.Type(), "flow_link") {
				link := p.getLink(child)
				links = append(links, link)
			}
		}
		for i := 0; i < len(links); i++ {
			links[i].FromID = vertices[i].ID
			links[i].ToID = vertices[i+1].ID
			links[i].ID = links[i].Key()
		}
		for i := 0; i < len(links); i++ {
			p.newData.Links[links[i].Key()] = links[i]
		}
		return

	}

	for i := 0; i < int(root.ChildCount()); i++ {
		p.travel(subGraph, root.Child(i), level+1)
	}
}
