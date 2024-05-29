FROM golang:1.22

WORKDIR /app

COPY ../.. .

RUN go mod download && go mod verify

RUN PWGO_VER=$(grep -oE "playwright-go v\S+" ./go.mod | sed 's/playwright-go //g') \
    && go install github.com/playwright-community/playwright-go/cmd/playwright@${PWGO_VER}

RUN playwright install --with-deps chromium



ENV PLAYWRIGHT_SKIP_BROWSER_GC=1
CMD ["make", "test"]
