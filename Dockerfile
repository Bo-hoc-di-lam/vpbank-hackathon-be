FROM golang:1.22

WORKDIR /app

COPY go.mod go.sum ./

RUN go mod download && go mod verify

COPY . .

RUN make build

EXPOSE 8080

CMD ["./bin/api"]


