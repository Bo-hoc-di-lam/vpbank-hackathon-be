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

var example3 = `
graph TD
    subgraph Client Side
        A[User Browser]
    end

    subgraph API Gateway
        B[API Gateway]
    end

    subgraph Microservices
        C1[Item API]
        C2[Reviews API]
        C3[Recommendations API]
        C4[Auth API]
        C5[Search API]
    end

    subgraph Databases
        D1[Item Database]
        D2[Reviews Database]
        D3[Recommendations Database]
        D4[Auth Database]
        D5[Search Database]
    end
    
    subgraph AI Components
        AI1[AI for Reviews]
        AI2[AI for Recommendations]
        AI3[AI for Search]
    end

    %% Client-side interaction
    A --> B

    %% API Gateway routing to microservices
    B --> C1
    B --> C2
    B --> C3
    B --> C4
    B --> C5

    %% Microservices to their respective databases
    C1 --> D1
    C2 --> D2
    C3 --> D3
    C4 --> D4
    C5 --> D5

    %% Inter-service communication
    C2 --> C1
    C3 --> C1
    C3 --> C5
    C5 --> C1

    %% AI components interaction with respective services
    C2 --> AI1
    C3 --> AI2
    C5 --> AI3
`

func TestParse(t *testing.T) {
	data := example3
	DEBUG = true

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
	//	parser.Append(ctx, l)
	//}
	p.Append(ctx, data)
	p.Flush(ctx)
	fmt.Println("done")
}
