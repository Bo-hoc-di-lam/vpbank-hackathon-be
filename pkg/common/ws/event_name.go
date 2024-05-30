package ws

type Event string

const (
	Error    Event = "ERROR"
	Join     Event = "JOIN"
	Leave    Event = "LEAVE"
	Lock     Event = "LOCK"
	Done     Event = "DONE"
	RoomInfo Event = "ROOM_INFO"
	Reset    Event = "RESET"

	Prompt     Event = "PROMPT"
	PromptEdit Event = "PROMPT_EDIT"
	GenIcon    Event = "GENERATE_ICON"
	JoinRoom   Event = "JOIN_ROOM"
	GenCode    Event = "GENERATE_CODE"
	GenDrawIO  Event = "GENERATE_DRAWIO"
	GenAnsible Event = "GENERATE_ANSIBLE"

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

	SetComment   Event = "SET_COMMENT"
	SetTerraform Event = "SET_TERRAFORM"
	SetDrawIO    Event = "SET_DRAWIO"
	SetAnsible   Event = "SET_ANSIBLE"
)
