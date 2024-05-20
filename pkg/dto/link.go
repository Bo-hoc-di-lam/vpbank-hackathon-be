package dto

type LinkType string

type Link struct {
	Type LinkType `json:"type"`
	From string   `json:"from"`
	To   string   `json:"to"`
	Text string   `json:"text"`
}
