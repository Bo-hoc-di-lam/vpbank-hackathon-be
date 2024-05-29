.PHONY: build

build:
	GOOS=linux GOARCH=amd64 go build -v -o bin/api cmd/api/main.go

run:
	GOOS=linux GOARCH=amd64 go run cmd/api/main.go

test:
	GOOS=linux GOARCH=amd64 go test -v ./...

