package engine

import (
	"be/pkg/common"
	"be/pkg/dto"
	"be/pkg/parser/mermaid"
	"be/pkg/util"
	"context"
	"github.com/olahol/melody"
	sitter "github.com/smacker/go-tree-sitter"
	"go.uber.org/zap"
	"strings"
)

var VerticesShape = []string{
	"flow_vertex_circle",
	"flow_vertex_cylinder",
	"flow_vertex_diamond",
	"flow_vertex_ellipse",
	"flow_vertex_hexagon",
	"flow_vertex_inv_trapezoid",
	"flow_vertex_leanleft",
	"flow_vertex_leanright",
	"flow_vertex_odd",
	"flow_vertex_rect",
	"flow_vertex_round",
	"flow_vertex_square",
	"flow_vertex_stadium",
	"flow_vertex_subroutine",
	"flow_vertex_trapezoid",
}

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

type Parser struct {
	session  *melody.Session
	p        *sitter.Parser
	lineCnt  int
	data     []byte
	tree     *sitter.Tree
	oldData  *Data
	newData  *Data
	position map[string]Position
}

func GetParser(s *melody.Session) *Parser {
	parser, exist := s.Get("parser")
	if !exist {
		parser = NewParser(s)
		s.Set("parser", parser)
	}
	return parser.(*Parser)
}

func NewParser(s *melody.Session) *Parser {
	p := sitter.NewParser()
	p.SetLanguage(sitter.NewLanguage(mermaid.Language()))
	return &Parser{
		session: s,
		p:       p,
		oldData: EmptyData(),
	}
}

func firstNode(root *sitter.Node, nodeType string) *sitter.Node {
	for i := 0; i < int(root.NamedChildCount()); i++ {
		if root.NamedChild(i).Type() == nodeType {
			return root.NamedChild(i)
		}
	}
	return nil
}

func (p *Parser) getLink(root *sitter.Node) *Link {
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

func (p *Parser) getSubgraph(root *sitter.Node) *SubGraph {
	txt := root.Content(p.data)
	txt = strings.Split(txt, "\n")[0]
	txt = strings.TrimPrefix(txt, "subgraph ")
	txt = strings.Trim(txt, "\"")
	return &SubGraph{
		Text: txt,
		ID:   txt,
	}
}

func (p *Parser) getVertex(subGraph *SubGraph, root *sitter.Node) *Vertex {
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

func (p *Parser) travel(subGraph *SubGraph, root *sitter.Node, level int) {
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

func (p *Parser) CompareData() {
	if p.session == nil {
		return

	}
	// subgraph
	for k, _ := range p.newData.SubGraphs {
		if p.oldData.SubGraphs[k] == nil {
			// emit new
			util.SendMsg(p.session, dto.WSData{
				Event: common.AddSubGraph,
				Data:  p.newData.SubGraphs[k],
			})
		} else {
			// not happen
			//if v.Diff(*p.oldData.SubGraphs[k]) {
			//	//emit change
			//	util.SendMsg(p.session,)
			//
			//}
		}
	}
	for k, _ := range p.oldData.SubGraphs {
		if p.newData.SubGraphs[k] == nil {
			//emit delete
			util.SendMsg(p.session, dto.WSData{
				Event: common.DelSubGraph,
				Data:  p.oldData.SubGraphs[k],
			})
		}
	}

	// vertices
	for k, v := range p.newData.Vertices {
		if p.oldData.Vertices[k] == nil {
			//emit new
			util.SendMsg(p.session, dto.WSData{
				Event: common.AddNode,
				Data:  p.newData.Vertices[k],
			})
		} else {
			if v.Diff(*p.oldData.Vertices[k]) {
				//emit change
				util.SendMsg(p.session, dto.WSData{
					Event: common.ChangeNode,
					Data:  p.newData.Vertices[k],
				})
			}
		}
	}
	for k, _ := range p.oldData.Vertices {
		if p.newData.Vertices[k] == nil {
			//emit delete
			util.SendMsg(p.session, dto.WSData{
				Event: common.DelNode,
				Data:  p.oldData.Vertices[k],
			})
		}
	}

	// link
	for k, v := range p.newData.Links {
		if p.oldData.Links[k] == nil {
			//emit new
			util.SendMsg(p.session, dto.WSData{
				Event: common.AddLink,
				Data:  p.newData.Links[k],
			})

		} else {
			if v.Diff(*p.oldData.Links[k]) {
				//emit change
				util.SendMsg(p.session, dto.WSData{
					Event: common.ChangeLink,
					Data:  p.newData.Links[k],
				})

			}
		}
	}
	for k, _ := range p.oldData.Links {
		if p.newData.Links[k] == nil {
			//emit delete
			util.SendMsg(p.session, dto.WSData{
				Event: common.DelLink,
				Data:  p.oldData.Links[k],
			})

		}
	}

}

func (p *Parser) Clear() {
	p.lineCnt = 0
	p.data = []byte{}
}

func (p *Parser) parse(ctx context.Context) {
	p.newData = EmptyData()
	tree, err := p.p.ParseCtx(ctx, nil, p.data)
	if err != nil {
		zap.S().Error("error when parse", "error", err)
	}
	p.tree = tree
	p.travel(nil, p.tree.RootNode(), 0)
	p.CompareData()
	p.oldData = p.newData
}

func (p *Parser) Flush(ctx context.Context) {
	p.parse(ctx)
}
func (p *Parser) SetPosition(id string, x int, y int) {
	node := p.oldData.Vertices[id]
	if node == nil {
		return
	}
	if node.Position.X != x || node.Position.Y != y {
		node.Position.X = x
		node.Position.Y = y
		util.SendMsg(p.session, dto.WSData{
			Event: common.WSSetNodePosition,
			Data:  node,
		})
	}
}

func (p *Parser) Append(ctx context.Context, s string) {
	//p.data = append(p.data, []byte("\n")...)
	p.data = append(p.data, []byte(s)...)
	p.lineCnt++
	if p.lineCnt%10 == 0 {
		p.parse(ctx)
	}
}
