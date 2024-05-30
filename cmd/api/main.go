package main

import (
	"be/pkg/adapter"
	"be/pkg/common/ws"
	"be/pkg/config"
	"be/pkg/drawio"
	"be/pkg/service"
	"github.com/labstack/echo/v4"
	"github.com/labstack/echo/v4/middleware"
	"github.com/olahol/melody"
	"github.com/samber/do"
	"go.uber.org/zap"
	"go.uber.org/zap/zapcore"
	"net/http"
	"time"
)

func init() {
	zapConfig := zap.NewDevelopmentConfig()
	zapConfig.EncoderConfig.EncodeLevel = zapcore.CapitalColorLevelEncoder
	l, _ := zapConfig.Build()
	drawio.Init("./pkg/drawio/browser/index.html")
	zap.ReplaceGlobals(l)
}

func main() {
	di := do.New()
	// init conf
	config.Inject(di)
	// init adapter
	adapter.Inject(di)

	m := melody.New()

	m.Config = &melody.Config{
		WriteWait:                 time.Hour,
		PongWait:                  time.Hour,
		PingPeriod:                time.Hour,
		MaxMessageSize:            1024,
		MessageBufferSize:         1024,
		ConcurrentMessageHandling: true,
	}
	m.HandleError(func(session *melody.Session, err error) {
		uid := ws.GetUID(session)
		zap.S().Errorw("error when handle ws request", "uid", uid, "error", err)
	})

	m.Upgrader.CheckOrigin = func(r *http.Request) bool {
		return true
	}
	do.ProvideValue(di, m)

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
	e.GET("/room/:nameplate/ws", func(c echo.Context) error {
		err := m.HandleRequestWithKeys(c.Response(), c.Request(),
			map[string]any{
				"nameplate": c.Param("nameplate"),
			})
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
	e.GET("/room/:id", func(c echo.Context) error {
		roomId := c.Param("id")
		room, err := s.RoomInfo(roomId)
		if err != nil {
			return c.JSON(500, err)
		}
		return c.JSON(200, room)
	})

	e.Logger.Fatal(e.Start(":" + do.MustInvoke[config.Server](di).Port))
}
