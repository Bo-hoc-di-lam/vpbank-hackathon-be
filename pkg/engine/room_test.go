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

const example4 = `
flowchart LR

subgraph "Client"
    A[Product Page] --> |HTTP Request| B[AWS API Gateway: API Gateway]
end

subgraph "API Gateway"
    B --> |HTTP Request| C[AWS Lambda: Item API]
    B --> |HTTP Request| D[AWS Lambda: Reviews API]
    B --> |HTTP Request| E[AWS Lambda: Recommendations API]
    B --> |HTTP Request| F[AWS Lambda: Auth API]
    B --> |HTTP Request| G[AWS Lambda: Search API]
end

subgraph "Microservices"
    C --> |Database| H[AWS DynamoDB: Item API DB]
    D --> |Database| I[AWS DynamoDB: Reviews API DB]
    E --> |Database| J[AWS DynamoDB: Recommendations API DB]
    F --> |Database| K[AWS DynamoDB: Auth API DB]
    G --> |Database| L[AWS DynamoDB: Search API DB]
end

subgraph "Interactions"
    D -.-> H
    D -.-> G
    E -.-> J
    E -.-> G
end
`

const example5 = `
graph TD

  %% Load Balancer
  A["Load Balancer"]

  %% Web Servers
  A --> |Link 123| B1["Web Server 1"]
  A --> B2["Web Server 2"]
  A --> B3["Web Server 3"]

  %% Application Servers
  B1 --> C1["App Server 1"]
  B2 --> C2["App Server 2"]
  B3 --> C3["App Server 3"]

  %% Databases
  C1 --> D1["(Primary Database)"]
  C2 --> D1
  C3 --> D1

  %% Read Replica for load distribution
  D1 --> D2["(Read Replica 1)"]
  D1 --> D3["(Read Replica 2)"]

  %% Cache Layer
  C1 --> E1["Cache (Redis/Memcached)"]
  C2 --> E1
  C3 --> E1

  %% External APIs
  C1 --> F1["External API 1"]
  C2 --> F1
  C3 --> F1

  C1 --> F2["External API 2"]
  C2 --> F2
  C3 --> F2

  C1 --> F3["External API 3"]
  C2 --> F3
  C3 --> F3

  %% Asynchronous Processing
  C1 --> G1["Message Queue (RabbitMQ/SQS)"]
  C2 --> G1
  C3 --> G1

  G1 --> H1["Worker 1"]
  G1 --> H2["Worker 2"]

  %% Monitoring and Logging
  A --> I1["Monitoring & Logging (ELK/Prometheus)"]
  B1 --> I1
  B2 --> I1
  B3 --> I1
  C1 --> I1
  C2 --> I1
  C3 --> I1
  D1 --> I1
  D2 --> I1
  D3 --> I1
  E1 --> I1
  F1 --> I1
  F2 --> I1
  F3 --> I1
  G1 --> I1
  H1 --> I1
  H2 --> I1

`

func TestParse(t *testing.T) {
	data := example5
	DEBUG = true

	conf := zap.NewDevelopmentConfig()
	conf.EncoderConfig.TimeKey = zapcore.OmitKey
	conf.EncoderConfig.LevelKey = zapcore.OmitKey
	conf.EncoderConfig.CallerKey = zapcore.OmitKey
	l, _ := conf.Build()
	zap.ReplaceGlobals(l)

	//datas := strings.Split(data, "\n")
	ctx := context.Background()
	p := NewRoom("test")
	//for _, l := range datas {
	//	parser.Append(ctx, l)
	//}
	p.Append(ctx, "", data)
	p.Flush(ctx, "")
	//p.Append(ctx, "aws", example4)
	//p.Flush(ctx, "aws")
	fmt.Println("done")
}
