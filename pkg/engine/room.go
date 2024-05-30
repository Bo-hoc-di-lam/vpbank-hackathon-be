package engine

import (
	"be/pkg/common/ws"
	"be/pkg/drawio"
	"be/pkg/parser/mermaid"
	"be/pkg/util"
	"context"
	"errors"
	"fmt"
	"github.com/olahol/melody"
	sitter "github.com/smacker/go-tree-sitter"
	"go.uber.org/zap"
	"strings"
	"sync"
)

var DEBUG = false

const MaxMsgLength = 70

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

type DataSet struct {
	Old *Data `json:"old"`
	New *Data `json:"new"`
}

type System struct {
	Terraform       strings.Builder `json:"terraform"`
	terraformBuffer string
	Ansible         strings.Builder `json:"ansible"`
	ansibleBuffer   string
	Name            ws.DiagramSystem
	tree            *sitter.Tree
	Content         []byte `json:"content"`
	contentBuffer   string
	bufferCnt       int
	Comment         strings.Builder
	commentBuffer   string
	Data            DataSet `json:"data"`
}

func NewGraphSystem(name ws.DiagramSystem) *System {
	return &System{
		Name:    name,
		tree:    nil,
		Content: nil,
		Comment: strings.Builder{},
		Data:    DataSet{Old: EmptyData(), New: EmptyData()},
	}
}

type Room struct {
	// sync
	mu sync.RWMutex

	// info
	Nameplate string `json:"nameplate"`
	seat      map[string]*melody.Session

	// parser info
	parser  *sitter.Parser
	Systems map[ws.DiagramSystem]*System `json:"systems"`
	DrawIO  string                       `json:"draw_io"`
}

func NewRoom(id string) *Room {
	p := sitter.NewParser()
	p.SetLanguage(sitter.NewLanguage(mermaid.Language()))
	return &Room{
		Nameplate: id,
		seat:      make(map[string]*melody.Session),
		parser:    p,
		Systems: map[ws.DiagramSystem]*System{
			ws.DiagramNormal: NewGraphSystem(""),
		},
	}
}

// session logic

func (r *Room) System(name ws.DiagramSystem) *System {
	if r.Systems[name] == nil {
		r.Systems[name] = NewGraphSystem(name)
	}
	return r.Systems[name]
}

func (r *Room) BroadCast(event ws.Event, data any) {
	r.Lock()
	defer r.Unlock()
	r.broadCast("", event, data)
}

func (r *Room) IsEmpty() bool {
	r.mu.RLock()
	defer r.mu.RUnlock()
	return len(r.seat) == 0
}

func (r *Room) Leave(s *melody.Session) {
	r.mu.Lock()
	defer r.mu.Unlock()
	id := ws.GetUID(s)
	delete(r.seat, id)
}

func (r *Room) Join(s *melody.Session) {
	r.Lock()
	defer r.Unlock()

	uid := ws.GetUID(s)
	_, old := r.seat[uid]
	ws.SetNameplate(s, r.Nameplate)
	// room info
	ws.ForceSend(s, ws.RoomInfo, r.Nameplate)

	if !old {
		for existedUID := range r.seat {
			ws.ForceSend(s, ws.Join, existedUID)
		}
	}
	zap.S().Infow("user joined room", "uid", uid, "nameplate", r.Nameplate)
	r.seat[uid] = s
	r.broadCast("", ws.Join, uid)

	for _, sName := range ws.DiagramSystems {
		system := r.System(sName)
		if system == nil {
			continue
		}
		for _, v := range system.Data.Old.SubGraphs {
			r.forceSend(system.Name, s, ws.AddSubGraph, v)
		}
		for _, v := range system.Data.Old.Vertices {
			r.forceSend(system.Name, s, ws.AddNode, v)
		}
		for _, v := range system.Data.Old.Links {
			r.forceSend(system.Name, s, ws.AddLink, v)
		}
		buf := system.Comment.String()
		for len(buf) > 0 {
			mx := min(MaxMsgLength, len(buf))
			r.forceSend(system.Name, s, ws.SetComment, buf[:mx])
			buf = buf[mx:]
		}
		buf = system.Terraform.String()
		for len(buf) > 0 {
			mx := min(MaxMsgLength, len(buf))
			r.forceSend(system.Name, s, ws.SetTerraform, buf[:mx])
			buf = buf[mx:]
		}
		buf = string(system.Content)
		for len(buf) > 0 {
			mx := min(MaxMsgLength, len(buf))
			r.forceSend(system.Name, s, ws.Mermaid, buf[:mx])
			buf = buf[mx:]
		}
		buf = system.Ansible.String()
		for len(buf) > 0 {
			mx := min(MaxMsgLength, len(buf))
			r.forceSend(system.Name, s, ws.SetAnsible, buf[:mx])
			buf = buf[mx:]
		}
	}
}

func (r *Room) forceSend(ds ws.DiagramSystem, s *melody.Session, event ws.Event, data any) {
	if ds != "" {
		event += ws.Event("_" + strings.ToUpper(string(ds)))
	}
	ws.ForceSend(s, event, data)
}

func (r *Room) broadCast(ds ws.DiagramSystem, event ws.Event, data any) {
	for _, s := range r.seat {
		r.forceSend(ds, s, event, data)
	}
}

// parser logic

func (r *Room) ResetTerraform(ds ws.DiagramSystem) {
	r.Lock()
	defer r.Unlock()
	system := r.System(ds)
	system.Terraform.Reset()
	system.terraformBuffer = ""
	system.commentBuffer = ""
	system.Comment.Reset()
}

func (r *Room) ResetAnsible(ds ws.DiagramSystem) {
	r.Lock()
	defer r.Unlock()
	system := r.System(ds)
	system.Ansible.Reset()
	system.ansibleBuffer = ""
	system.commentBuffer = ""
	system.Comment.Reset()
}

func (r *Room) Reset(ds ws.DiagramSystem) {
	r.Lock()
	defer r.Unlock()
	system := r.System(ds)
	system.Terraform.Reset()
	system.Content = []byte{}
	system.terraformBuffer = ""
	system.Comment.Reset()
	system.commentBuffer = ""
	system.contentBuffer = ""
	system.Ansible.Reset()
	system.ansibleBuffer = ""
	system.bufferCnt = 0
	system.Data = DataSet{
		Old: EmptyData(),
		New: EmptyData(),
	}
	r.broadCast(ds, ws.Reset, nil)
}

func (r *Room) Lock() {
	r.mu.Lock()
}

func (r *Room) Unlock() {
	r.mu.Unlock()
}

func (r *Room) compareData(system *System) {
	if r.seat == nil {
		return
	}
	// subgraph
	{
		mpNew, mpChange, _, mpDel := util.CmpMap(system.Data.Old.SubGraphs, system.Data.New.SubGraphs)
		for _, v := range mpNew {
			r.broadCast(system.Name, ws.AddSubGraph, v)
		}
		for _, v := range mpChange {
			r.broadCast(system.Name, ws.ChangeSubGraph, v)
		}
		for _, v := range mpDel {
			r.broadCast(system.Name, ws.DelSubGraph, v)
		}
		for len(system.commentBuffer) > MaxMsgLength {
			mx := min(MaxMsgLength, len(system.commentBuffer))
			r.broadCast(system.Name, ws.SetComment, system.commentBuffer[:mx])
			system.commentBuffer = system.commentBuffer[mx:]
		}
	}

	// vertices
	{
		mpNew, mpChange, _, mpDel := util.CmpMap(system.Data.Old.Vertices, system.Data.New.Vertices)
		for _, v := range mpNew {
			if v.Text == "" {
				if v.ID == "" {
					zap.S().Warn("empty text and ID for node: ", "id", v.ID)
					continue
				} else {
					v.Text = v.ID
					zap.S().Warn("empty text for node, set it to ID: ", "id", v.ID)
				}
			}
			r.broadCast(system.Name, ws.AddNode, v)
		}
		for _, v := range mpChange {
			r.broadCast(system.Name, ws.ChangeNode, v)
		}
		for _, v := range mpDel {
			r.broadCast(system.Name, ws.DelNode, v)
		}
	}
	// links
	{
		mpNew, mpChange, _, mpDel := util.CmpMap(system.Data.Old.Links, system.Data.New.Links)
		for _, v := range mpNew {
			r.broadCast(system.Name, ws.AddLink, v)
		}
		for _, v := range mpChange {
			r.broadCast(system.Name, ws.ChangeLink, v)
		}
		for _, v := range mpDel {
			r.broadCast(system.Name, ws.DelLink, v)
		}
	}

}

func (r *Room) SetNodePosition(ds ws.DiagramSystem, id string, x int, y int) {
	system := r.System(ds)
	node := system.Data.Old.Vertices[id]
	if node == nil {
		return
	}
	if node.Position.X != x || node.Position.Y != y {
		node.Position.X = x
		node.Position.Y = y
		r.broadCast(ds, ws.SetNodePosition, node)
	}
}

func (r *Room) AppendComment(ds ws.DiagramSystem, s string) {
	system := r.System(ds)
	system.Comment.WriteString(s)
	system.commentBuffer += s
	for len(system.commentBuffer) > MaxMsgLength {
		mx := min(MaxMsgLength, len(system.commentBuffer))
		r.broadCast(ds, ws.SetComment, system.commentBuffer[:mx])
		system.commentBuffer = system.commentBuffer[mx:]
	}
}

func (r *Room) AppendTerraform(ds ws.DiagramSystem, s string) {
	system := r.System(ds)
	system.Terraform.WriteString(s)
	system.terraformBuffer += s
	for len(system.terraformBuffer) > MaxMsgLength {
		mx := min(MaxMsgLength, len(system.terraformBuffer))
		r.broadCast(ds, ws.SetTerraform, system.terraformBuffer[:mx])
		system.terraformBuffer = system.terraformBuffer[mx:]
	}
}

func (r *Room) AppendAnsible(ds ws.DiagramSystem, s string) {
	system := r.System(ds)
	system.Ansible.WriteString(s)
	system.ansibleBuffer += s
	for len(system.ansibleBuffer) > MaxMsgLength {
		mx := min(MaxMsgLength, len(system.ansibleBuffer))
		r.broadCast(ds, ws.SetAnsible, system.ansibleBuffer[:mx])
		system.ansibleBuffer = system.ansibleBuffer[mx:]
	}
}

func (r *Room) CurrentTerraform(ds ws.DiagramSystem) string {
	system := r.System(ds)
	return system.Terraform.String()
}

func (r *Room) CurrentDiagram(ds ws.DiagramSystem) string {
	system := r.System(ds)
	return string(system.Content)
}

func (r *Room) GenerateDrawIO() error {
	d := r.CurrentDiagram("")
	if d == "" {
		return errors.New("empty diagram")
	}
	diagram, err := drawio.Generate(d)
	if err != nil {
		return err
	}
	r.DrawIO = string(diagram)
	drawIO := r.DrawIO
	for len(drawIO) > 0 {
		mx := min(MaxMsgLength, len(drawIO))
		r.BroadCast(ws.SetDrawIO, drawIO[:mx])
		drawIO = drawIO[mx:]
	}

	return nil
}

func (r *Room) Append(ctx context.Context, ds ws.DiagramSystem, s string) {
	system := r.System(ds)
	system.Content = append(system.Content, []byte(s)...)
	system.contentBuffer += s
	for len(system.contentBuffer) > MaxMsgLength {
		mx := min(MaxMsgLength, len(system.contentBuffer))
		r.broadCast(ds, ws.Mermaid, system.contentBuffer[:mx])
		system.contentBuffer = system.contentBuffer[mx:]
	}
	system.bufferCnt++
	if system.bufferCnt != 0 && system.bufferCnt%BufferFlushThreshold == 0 {
		r.Flush(ctx, ds)
	}
}

func (r *Room) getLink(system *System, root *sitter.Node) *Link {
	text := ""
	arrow := firstNode(root, "flow_link_arrow").Content(system.Content)
	txtNodeTypes := []string{"flow_arrow_text"}
	for _, nodeType := range txtNodeTypes {
		textNode := firstNode(root, nodeType)
		if textNode != nil {
			text = textNode.Content(system.Content)
			break
		}
	}

	return &Link{
		Text: text,
		Type: arrow,
	}
}

func (r *Room) getSubgraph(system *System, root *sitter.Node) *SubGraph {
	txt := root.Content(system.Content)
	txt = strings.Split(txt, "\n")[0]
	txt = strings.TrimPrefix(txt, "subgraph ")
	txt = strings.Trim(txt, "\"")
	return &SubGraph{
		Text: txt,
		ID:   txt,
	}
}

func (r *Room) getVertex(system *System, subGraph *SubGraph, root *sitter.Node) *Vertex {
	subGraphTxt := ""
	if subGraph != nil {
		subGraphTxt = subGraph.Text
	}

	shape := ""
	text := ""
	vertex := firstNode(root, "flow_vertex")
	id := firstNode(vertex, "flow_vertex_id").Content(system.Content)

	if system.Data.New.Vertices[id] != nil && system.Data.New.Vertices[id].Text != "" {
		return system.Data.New.Vertices[id]
	}
	//get shape
	for i := 0; i < int(vertex.ChildCount()); i++ {
		if util.In(VerticesShape, vertex.Child(i).Type()) {
			shapeNode := vertex.Child(i)
			shape = shapeNode.Type()
			shape = strings.TrimPrefix(shape, "flow_vertex_")
			// get text
			txtNodeTypes := []string{"flow_text_literal", "flow_text_quoted"}
			ok := false
			for _, nodeType := range txtNodeTypes {
				textNode := firstNode(shapeNode, nodeType)
				if textNode != nil {
					text = textNode.Content(system.Content)
					ok = true
					break
				}
			}
			if ok {
				break
			}

		}
	}
	text = util.TryUnquote(text)
	icon, text := splitIcon(text)
	data := &Vertex{
		ID:       id,
		Shape:    shape,
		Text:     text,
		SubGraph: subGraphTxt,
		Icon:     icon,
	}
	system.Data.New.Vertices[id] = data
	return data
}

func (r *Room) parse(ctx context.Context, system *System) {
	system.Data.New = EmptyData()
	tree, err := r.parser.ParseCtx(ctx, nil, system.Content)
	if err != nil {
		zap.S().Error("error when parse", "error", err)
	}
	system.tree = tree
	r.travel(system, nil, tree.RootNode(), 0)
	r.compareData(system)
	system.Data.Old = system.Data.New
}

func (r *Room) Flush(ctx context.Context, ds ws.DiagramSystem) {
	system := r.System(ds)
	if system.bufferCnt != 0 {
		system.bufferCnt = 0
		r.parse(ctx, system)
	}
	for len(system.commentBuffer) > 0 {
		mx := min(MaxMsgLength, len(system.commentBuffer))
		r.broadCast(ds, ws.SetComment, system.commentBuffer[:mx])
		system.commentBuffer = system.commentBuffer[mx:]
	}
	for len(system.contentBuffer) > 0 {
		mx := min(MaxMsgLength, len(system.contentBuffer))
		r.broadCast(ds, ws.Mermaid, system.contentBuffer[:mx])
		system.contentBuffer = system.contentBuffer[mx:]
	}

}

func (r *Room) FlushTerraform(ds ws.DiagramSystem) {
	system := r.System(ds)
	for len(system.terraformBuffer) > 0 {
		mx := min(MaxMsgLength, len(system.terraformBuffer))
		r.broadCast(ds, ws.SetTerraform, system.terraformBuffer[:mx])
		system.terraformBuffer = system.terraformBuffer[mx:]
	}
}

func (r *Room) FlushAnsible(ds ws.DiagramSystem) {
	system := r.System(ds)
	for len(system.ansibleBuffer) > 0 {
		mx := min(MaxMsgLength, len(system.ansibleBuffer))
		r.broadCast(ds, ws.SetAnsible, system.ansibleBuffer[:mx])
		system.ansibleBuffer = system.ansibleBuffer[mx:]
	}
	for len(system.commentBuffer) > 0 {
		mx := min(MaxMsgLength, len(system.commentBuffer))
		r.broadCast(ds, ws.SetComment, system.commentBuffer[:mx])
		system.commentBuffer = system.commentBuffer[mx:]
	}
}

func (r *Room) travel(system *System, subGraph *SubGraph, root *sitter.Node, level int) {

	if DEBUG {
		fmt.Print(level)
		for i := 0; i < level; i++ {
			fmt.Print("  ")
		}
		fmt.Println(root.Type(), root.Content(system.Content))
	}

	if root.Type() == "ERROR" {
		return
	}

	switch root.Type() {
	case "flow_stmt_subgraph":
		pre := subGraph
		subGraph = r.getSubgraph(system, root)
		if pre != nil {
			subGraph.Root = pre
			subGraph.Parent = pre.Text
		}
		system.Data.New.SubGraphs[subGraph.Text] = subGraph
	case "end":
		subGraph = subGraph.Root
	case "flow_stmt_vertice":
		vertices := make([]*Vertex, 0)
		links := make([]*Link, 0)
		for i := 0; i < int(root.ChildCount()); i++ {
			child := root.Child(i)
			if child.Type() == "flow_node" {
				node := r.getVertex(system, subGraph, child)
				vertices = append(vertices, node)
			}
			if strings.HasPrefix(child.Type(), "flow_link") {
				link := r.getLink(system, child)
				links = append(links, link)
			}
		}
		for i := 0; i < len(links); i++ {
			links[i].FromID = vertices[i].ID
			links[i].ToID = vertices[i+1].ID
			links[i].ID = links[i].Key()
		}
		for i := 0; i < len(links); i++ {
			system.Data.New.Links[links[i].Key()] = links[i]
		}
		return

	}

	for i := 0; i < int(root.ChildCount()); i++ {
		r.travel(system, subGraph, root.Child(i), level+1)
	}
}
