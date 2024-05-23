package util

import (
	"math"
	"math/rand"
	"strings"
	"time"
)

const Numeric = "0123456789"
const AlphabetLower = "abcdefghijklmnopqrstuvwxyz"
const AlphabetUpper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
const Alphabet = AlphabetLower + AlphabetUpper
const Alphanumeric = Alphabet + Numeric

var randSource = rand.NewSource(time.Now().UnixNano())

func RandString(length int, charset string) string {
	maxBits := int64(math.Ceil(math.Log2(float64(len(charset)))))
	mask := int64(1<<maxBits - 1)
	b := strings.Builder{}
	b.Grow(length)
	for i := 0; i < length; {
		if idx := int(randSource.Int63() & mask); idx < len(charset) {
			b.WriteByte(charset[idx])
			i++
		}
	}
	return b.String()
}
