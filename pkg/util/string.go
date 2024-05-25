package util

import "strconv"

func TryUnquote(data string) string {
	next, err := strconv.Unquote(data)
	if err != nil {
		return data
	}
	return next
}
