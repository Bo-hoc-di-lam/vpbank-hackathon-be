FROM golang:1.22

WORKDIR /app

COPY go.mod go.sum ./

RUN go mod download && go mod verify

RUN go run github.com/playwright-community/playwright-go/cmd/playwright@latest install --with-deps chrome --force

COPY . .

RUN make build

EXPOSE 8080

CMD ["./bin/api"]
