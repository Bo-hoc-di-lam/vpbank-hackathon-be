package util

type Comparable[T any] interface {
	Diff(T) bool
}

func CmpMap[K comparable, V Comparable[V]](oldData map[K]V, newData map[K]V) (mpNew, mpChange, mpKeep, mpRem map[K]V) {
	mpRem = make(map[K]V)
	mpNew = make(map[K]V)
	mpChange = make(map[K]V)
	mpKeep = make(map[K]V)
	// check new/keep/change
	for k := range newData {
		old, exist := oldData[k]
		if !exist {
			mpNew[k] = newData[k]
			continue
		}
		if newData[k].Diff(old) {
			mpChange[k] = newData[k]
		} else {
			mpKeep[k] = newData[k]
		}
	}
	// check remove
	for k := range oldData {
		if _, exist := newData[k]; !exist {
			mpRem[k] = oldData[k]
		}
	}

	return
}
