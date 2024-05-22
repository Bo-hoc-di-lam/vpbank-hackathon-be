package engine

import (
	"github.com/olahol/melody"
	sitter "github.com/smacker/go-tree-sitter"
)

func GetParser(s *melody.Session) *MermaidEngine {
	parser, exist := s.Get("parser")
	if !exist {
		parser = NewParser(s)
		s.Set("parser", parser)
	}
	return parser.(*MermaidEngine)
}

func firstNode(root *sitter.Node, nodeType string) *sitter.Node {
	for i := 0; i < int(root.NamedChildCount()); i++ {
		if root.NamedChild(i).Type() == nodeType {
			return root.NamedChild(i)
		}
	}
	return nil
}
