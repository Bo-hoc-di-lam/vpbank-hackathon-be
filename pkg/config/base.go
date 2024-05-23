package config

import (
	"github.com/joho/godotenv"
	"github.com/kelseyhightower/envconfig"
	"os"
)

func init() {
	_, err := os.Stat("./.env")
	if err == nil {
		if err := godotenv.Load(); err != nil {
			panic(err)
		}
	}
}

func Load[T any]() (T, error) {
	var cfg T
	if err := envconfig.Process("", &cfg); err != nil {
		return cfg, err
	}
	return cfg, nil
}

func MustLoad[T any]() T {
	cfg, err := Load[T]()
	if err != nil {
		panic(err)
	}
	return cfg
}
