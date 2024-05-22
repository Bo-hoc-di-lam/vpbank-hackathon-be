.PHONY: build

build:
	GOOS=linux GOARCH=amd64 go build -o bin/api cmd/api/main.go

run:
	GOOS=linux GOARCH=amd64 go run cmd/api/main.go
