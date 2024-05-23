package util

import (
	"fmt"
	"testing"
)

func TestRandString(t *testing.T) {
	str := RandString(6, Alphanumeric)
	fmt.Println(str)
}
