# Start with the Go base image
FROM golang:1.19 AS build

# Set the working directory
WORKDIR /app

# Copy the Go module files
COPY go.mod go.sum ./

# Download dependencies
RUN go mod download

# Copy the source code
COPY . .

# Build the application
RUN go build -o app ./api

# Start a new stage for the minimal production image
FROM gcr.io/distroless/base-debian10

# Set the working directory in the production image
WORKDIR /app

# Copy the binary from the build stage
COPY --from=build /app/app .

# Expose the port that the application listens on
EXPOSE 8080

# Set the command to run the binary
ENTRYPOINT ["/app/app"]