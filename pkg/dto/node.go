package dto

type Shape string

type Node struct {
	Shape Shape  `json:"shape"`
	ID    string `json:"id"`
	Text  string `json:"text"`
}
