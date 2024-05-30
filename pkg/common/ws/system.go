package ws

type DiagramSystem string

const (
	DiagramNormal DiagramSystem = ""
	DiagramAWS    DiagramSystem = "AWS"
)

var DiagramSystems = []DiagramSystem{DiagramNormal, DiagramAWS}
