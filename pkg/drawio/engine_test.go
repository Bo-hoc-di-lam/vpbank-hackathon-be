package drawio

import (
	"fmt"
	"github.com/stretchr/testify/assert"
	"testing"
)

const example = `
graph TD
    LB1["Load Balancer"] --> WS1["Web Server 1"]
    LB1["Load Balancer"] --> WS2["Web Server 2"]

    WS1["Web Server 1"] --> AS1["Application Server 1"]
    WS2["Web Server 2"] --> AS2["Application Server 2"]

    AS1["Application Server 1"] --> DB["Database"]
    AS2["Application Server 2"] --> DB["Database"]

    AS1["Application Server 1"] --> MB["Message Broker"]
    AS2["Application Server 2"] --> MB["Message Broker"]

    AS1["Application Server 1"] --> AUTH["Authentication Service"]
    AS2["Application Server 2"] --> AUTH["Authentication Service"]

    MB["Message Broker"] --> API["External APIs"]


    class LB1 loadBalancer;
    class WS1,WS2 webServer;
    class AS1,AS2 appServer;
    class DB database;
    class MB messageBroker;
    class AUTH authService;
    class API externalAPI;

`

func TestDownload(t *testing.T) {
	data, err := Generate(example)
	assert.NoError(t, err)
	fmt.Println(string(data))
}
