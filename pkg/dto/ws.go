package dto

import "be/pkg/common"

type WSData struct {
	Event common.WSEvent `json:"event"`
	Data  any            `json:"data"`
}

type Connect struct {
	ID string `json:"id"`
}
