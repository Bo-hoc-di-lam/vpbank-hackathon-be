package engine

import (
	"be/pkg/parser/mermaid"
	"be/pkg/util"
	"context"
	"fmt"
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

type Parser struct {
	p         *sitter.Parser
	data      []byte
	tree      *sitter.Tree
	vertices  map[string]*Vertex
	links     []*Link
	subGraphs []*SubGraph
}

func NewParser() *Parser {
	p := sitter.NewParser()
	p.SetLanguage(sitter.NewLanguage(mermaid.Language()))
	return &Parser{
		p:        p,
		vertices: make(map[string]*Vertex),
	}
}

func getFirstNodeWithType(root *sitter.Node, name string) *sitter.Node {
	for i := 0; i < int(root.NamedChildCount()); i++ {
		if root.NamedChild(i).Type() == name {
			return root.NamedChild(i)
		}
	}
	return nil
}

func (p *Parser) getLink(root *sitter.Node) *Link {
	text := ""
	arrow := getFirstNodeWithType(root, "flow_link_arrow").Content(p.data)
	textNode := getFirstNodeWithType(root, "flow_arrow_text")
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
	}
}

func (p *Parser) getVertex(subGraph *SubGraph, root *sitter.Node) *Vertex {
	subGraphTxt := ""
	if subGraph != nil {
		subGraphTxt = subGraph.Text
	}

	shape := ""
	text := ""
	vertex := getFirstNodeWithType(root, "flow_vertex")
	id := getFirstNodeWithType(vertex, "flow_vertex_id").Content(p.data)

	if p.vertices[id] != nil {
		return p.vertices[id]
	}
	//get shape
	for i := 0; i < int(vertex.ChildCount()); i++ {
		if util.In(VerticesShape, vertex.Child(i).Type()) {
			shapeNode := vertex.Child(i)
			shape = shapeNode.Type()
			shape = strings.TrimPrefix(shape, "flow_vertex_")
			// get text
			textNode := getFirstNodeWithType(shapeNode, "flow_text_literal")
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
	p.vertices[id] = data
	return data
}

func (p *Parser) travel(subGraph *SubGraph, root *sitter.Node, level int) {
	if root.Type() == "ERROR" {
		return
	}
	fmt.Print(level)
	for i := 0; i < level; i++ {
		fmt.Print("  ")
	}
	if root.Type() != "source_file" {
		//zap.S().Infoln(root.Type(), root.Content(p.data))
		//fmt.Println(root.Type(), root.Content(raw))
	}

	switch root.Type() {
	case "flow_stmt_subgraph":
		pre := subGraph
		subGraph = p.getSubgraph(root)
		subGraph.Parent = pre
		p.subGraphs = append(p.subGraphs, subGraph)
	case "end":
		subGraph = subGraph.Parent
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
		}
		p.links = append(p.links, links...)
		return

	}

	for i := 0; i < int(root.ChildCount()); i++ {
		p.travel(subGraph, root.Child(i), level+1)
	}
}

func (p *Parser) Append(ctx context.Context, s string) {
	p.data = append(p.data, []byte("\n")...)
	p.data = append(p.data, []byte(s)...)
	tree, err := p.p.ParseCtx(ctx, nil, []byte(p.data))
	if err != nil {
		zap.S().Error("error when parse", "error", err)
	}
	p.tree = tree
	fmt.Println("------------------")
	fmt.Println("data: ")
	fmt.Println(string(p.data))
	fmt.Println("----output---")
	p.travel(nil, p.tree.RootNode(), 0)

	fmt.Print(p.tree.RootNode())
}
