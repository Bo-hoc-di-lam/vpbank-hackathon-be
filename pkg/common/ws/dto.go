package ws

type Data struct {
	Event Event `json:"event"`
	Data  any   `json:"data"`
}

type Connect struct {
	ID string `json:"id"`
}
