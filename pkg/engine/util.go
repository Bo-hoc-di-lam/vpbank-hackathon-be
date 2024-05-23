package engine

import (
	sitter "github.com/smacker/go-tree-sitter"
)

func firstNode(root *sitter.Node, nodeType string) *sitter.Node {
	for i := 0; i < int(root.NamedChildCount()); i++ {
		if root.NamedChild(i).Type() == nodeType {
			return root.NamedChild(i)
		}
	}
	return nil
}
