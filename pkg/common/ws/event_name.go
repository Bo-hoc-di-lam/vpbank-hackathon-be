package ws

type Event string

const (
	Join  Event = "JOIN"
	Leave Event = "LEAVE"
	Lock  Event = "LOCK"
	Done  Event = "DONE"

	Error      Event = "ERROR"
	RoomInfo   Event = "ROOM_INFO"
	Prompt     Event = "PROMPT"
	PromptEdit Event = "PROMPT_EDIT"
	GenIcon    Event = "GENERATE_ICON"
	JoinRoom   Event = "JOIN_ROOM"

	AddNode    Event = "ADD_NODE"
	DelNode    Event = "DEL_NODE"
	ChangeNode Event = "CHANGE_NODE"

	AddLink    Event = "ADD_LINK"
	DelLink    Event = "DEL_LINK"
	ChangeLink Event = "CHANGE_LINK"

	AddSubGraph    Event = "ADD_SUB_GRAPH"
	DelSubGraph    Event = "DEL_SUB_GRAPH"
	ChangeSubGraph Event = "CHANGE_SUB_GRAPH"

	SetNodePosition Event = "SET_NODE_POSITION"

	Mermaid Event = "MERMAID"

	SetComment Event = "SET_COMMENT"
)
