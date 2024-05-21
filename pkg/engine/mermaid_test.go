package engine

import (
	"context"
	"fmt"
	"go.uber.org/zap"
	"go.uber.org/zap/zapcore"
	"testing"
)

var example1 = `
flowchart LR

subgraph "Client"
    A[Product Page] --> |HTTP Request| B((API Gateway))
end

subgraph "API Gateway"
    B --> |HTTP Request| C((Item API))
    B --> |HTTP Request| D((Reviews API))
    B --> |HTTP Request| E((Recommendations API))
    B --> |HTTP Request| F((Auth API))
    B --> |HTTP Request| G((Search API))
end

subgraph "Microservices"
    C --> |Database| H{Item API DB}
    D --> |Database| I{Reviews API DB}
    E --> |Database| J{Recommendations API DB}
    F --> |Database| K{Auth API DB}
    G --> |Database| L{Search API DB}
end

subgraph "Interactions"
    D -.-> H
    D -.-> G
    E -.-> J
    E -.-> G
end
`

var example2 = `
flowchart LR
  subgraph TOP
    direction TB
    subgraph B1
        direction RL
        i1 -->f1
    end
    subgraph B2
        direction BT
        i2 -->f2
    end
  end
  A --> TOP --> B
  B1 --> B2
`

func TestParse(t *testing.T) {
	data := example1

	conf := zap.NewDevelopmentConfig()
	conf.EncoderConfig.TimeKey = zapcore.OmitKey
	conf.EncoderConfig.LevelKey = zapcore.OmitKey
	conf.EncoderConfig.CallerKey = zapcore.OmitKey
	l, _ := conf.Build()
	zap.ReplaceGlobals(l)

	//datas := strings.Split(data, "\n")
	ctx := context.Background()
	p := NewParser(nil)
	//for _, l := range datas {
	//	p.Append(ctx, l)
	//}
	p.Append(ctx, data)
	p.Flush(ctx)
	fmt.Println("done")
}
