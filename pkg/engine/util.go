package engine

import (
	sitter "github.com/smacker/go-tree-sitter"
	"strings"
)

func firstNode(root *sitter.Node, nodeType string) *sitter.Node {
	for i := 0; i < int(root.NamedChildCount()); i++ {
		if root.NamedChild(i).Type() == nodeType {
			return root.NamedChild(i)
		}
	}
	return nil
}

func splitIcon(text string) (string, string) {
	split := strings.Split(text, ": ")
	if len(split) == 1 {
		return "", text
	}
	return split[0], split[1]
}
