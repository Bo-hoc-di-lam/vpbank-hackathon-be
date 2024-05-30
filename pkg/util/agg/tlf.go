package agg

func Map[F any, T any](arr []F, fn func(F) T) []T {
	ret := make([]T, len(arr))
	for i, v := range arr {
		ret[i] = fn(v)
	}
	return ret
}
