package config

type Server struct {
	Port string `envconfig:"SERVER_PORT" default:"8080"`
}
