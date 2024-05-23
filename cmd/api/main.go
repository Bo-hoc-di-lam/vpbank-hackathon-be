package main

import (
	"be/pkg/adapter"
	"be/pkg/config"
	"be/pkg/service"
	"github.com/labstack/echo/v4"
	"github.com/labstack/echo/v4/middleware"
	"github.com/samber/do"
	"net/http"

	"github.com/olahol/melody"
	"go.uber.org/zap"
	"go.uber.org/zap/zapcore"
)

func init() {
	zapConfig := zap.NewDevelopmentConfig()
	zapConfig.EncoderConfig.EncodeLevel = zapcore.CapitalColorLevelEncoder
	l, _ := zapConfig.Build()

	zap.ReplaceGlobals(l)
}

func main() {
	di := do.New()
	// init conf
	config.Inject(di)
	// init adapter
	adapter.Inject(di)

	m := melody.New()
	do.ProvideValue(di, m)
	m.Upgrader.CheckOrigin = func(r *http.Request) bool {
		return true
	}

	e := echo.New()
	e.Use(middleware.Recover())
	e.Use(middleware.CORS())
	e.Use(middleware.RequestLoggerWithConfig(middleware.RequestLoggerConfig{
		LogURI:    true,
		LogStatus: true,
		LogValuesFunc: func(c echo.Context, v middleware.RequestLoggerValues) error {
			zap.S().Infow("request", "uri", v.URI, "status", v.Status)
			return nil
		},
	}))

	e.GET("/ping", func(c echo.Context) error {
		return c.String(200, "pong")
	})
	e.GET("/ws", func(c echo.Context) error {
		err := m.HandleRequest(c.Response(), c.Request())
		if err != nil {
			zap.S().Errorw("error when handle ws request", "error", err)
		}
		return nil
	})
	s, err := service.NewReceptionist(di)
	if err != nil {
		panic(err)
	}
	s.Work()
	e.Logger.Fatal(e.Start(":" + do.MustInvoke[config.Server](di).Port))
}
