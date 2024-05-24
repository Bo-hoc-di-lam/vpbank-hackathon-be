package util

import "encoding/json"

func AnyToStruct[T any](data any) (T, error) {
	var result T
	jsonStr, err := json.Marshal(data)
	if err != nil {
		return result, err
	}
	if err = json.Unmarshal(jsonStr, &result); err != nil {
		return result, err
	}
	return result, nil
}
