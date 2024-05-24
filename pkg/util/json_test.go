package util

import (
	"github.com/stretchr/testify/assert"
	"testing"
)

func TestAnyToStruct(t *testing.T) {
	data := map[string]any{
		"string": "124",
		"number": 1,
	}
	type example struct {
		String string `json:"string"`
		Number int    `json:"number"`
	}
	result, err := AnyToStruct[example](data)
	assert.NoError(t, err)
	assert.Equal(t, "124", result.String)
	assert.Equal(t, 1, result.Number)
}
