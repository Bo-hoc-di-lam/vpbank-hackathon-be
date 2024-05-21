package common

type WSEvent string

const (
	WSError   WSEvent = "ERROR"
	WSConnect WSEvent = "CONNECT"

	AddNode    WSEvent = "ADD_NODE"
	DelNode    WSEvent = "DEL_NODE"
	ChangeNode WSEvent = "CHANGE_NODE"

	AddLink    WSEvent = "ADD_LINK"
	DelLink    WSEvent = "DEL_LINK"
	ChangeLink WSEvent = "CHANGE_LINK"

	AddSubGraph    WSEvent = "ADD_SUB_GRAPH"
	DelSubGraph    WSEvent = "DEL_SUB_GRAPH"
	ChangeSubGraph WSEvent = "CHANGE_SUB_GRAPH"

	WSSetNodePosition WSEvent = "SET_NODE_POSITION"
	WSPrompt          WSEvent = "PROMPT"
)
