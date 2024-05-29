package drawio

import (
	"encoding/json"
	"errors"
	"github.com/playwright-community/playwright-go"
	"os"
	"path/filepath"
	"time"
)

var b playwright.Browser
var path string

type Event struct {
	Event string `json:"event"`
}

func init() {
	var err error
	path, err = filepath.Abs("./pkg/drawio/browser/index.html")
	if err != nil {
		panic(err)
	}
	path = "file://" + path
	pw, err := playwright.Run(&playwright.RunOptions{
		SkipInstallBrowsers: true,
		Browsers:            []string{"chromium"},
	})
	if err != nil {
		panic(err)
	}
	b, err = pw.Chromium.Launch(playwright.BrowserTypeLaunchOptions{
		Headless: playwright.Bool(true),
	})
	if err != nil {
		panic(err)
	}
}

func Generate(diagram string) ([]byte, error) {
	ctx, err := b.NewContext()

	if err != nil {
		return nil, err
	}
	p, err := ctx.NewPage()
	if err != nil {
		return nil, err
	}
	t := time.NewTicker(30 * time.Second)
	c := make(chan struct{})
	errChan := make(chan error)
	defer func() {
		close(c)
		close(errChan)
		ctx.Close()
		t.Stop()
	}()
	var data []byte

	p.ExposeFunction("handleEvent", func(args ...interface{}) (void interface{}) {
		//fmt.Println(args)
		var e Event
		if err := json.Unmarshal([]byte(args[0].(string)), &e); err != nil {
			errChan <- err
		}
		if e.Event == "load" {
			//fmt.Println("load frame")
			frame := p.FrameLocator("#drawio-frame")
			//fmt.Println("click insert")
			frame.Locator("body > div:nth-child(5) > div.geMenubarContainer > div:nth-child(2) > a:nth-child(1)").Click()
			//fmt.Println("hover advanced")
			frame.Locator("body > div.mxPopupMenu.geMenubarMenu > table > tbody > tr:nth-child(21)").Hover()
			//fmt.Println("click mermaid")
			frame.Locator("body > div:nth-child(7) > table > tbody > tr:nth-child(3)").Click()
			//fmt.Println("fill data")
			frame.Locator("body > div.geDialog > div > textarea").Fill(diagram)
			//fmt.Println("click insert")
			frame.Locator("body > div.geDialog > div > button.geBtn.gePrimaryBtn").Click()
			//fmt.Println("click diagram")
			frame.Locator("body > div:nth-child(5) > div.geMenubarContainer > div:nth-child(1) > a:nth-child(1)").Click()
			//fmt.Println("hover export")
			frame.Locator("body > div.mxPopupMenu.geMenubarMenu > table > tbody > tr:nth-child(12)").Hover()
			//fmt.Println("click xml")
			frame.Locator("body > div:nth-child(7) > table > tbody > tr:nth-child(10)").Click()
			//fmt.Println("click export")
			frame.Locator("body > div.geDialog > div > div:nth-child(2) > button.geBtn.gePrimaryBtn").Click()
			//fmt.Println("fill name")
			frame.Locator("body > div.geDialog > div > div:nth-child(1) > div:nth-child(2) > input[type=text]").Fill("example.drawio.xml")
			//fmt.Println("click save")
			download, err := p.ExpectDownload(func() error {
				return frame.Locator("body > div.geDialog > div > div:nth-child(2) > button.geBtn.gePrimaryBtn").Click()
			})
			if err != nil {
				errChan <- err
				return
			}
			tmpFile, err := os.CreateTemp("", "drawio")
			if err != nil {
				errChan <- err
				return
			}
			defer func() {
				tmpFile.Close()
				os.Remove(tmpFile.Name())
			}()
			if err := download.SaveAs(tmpFile.Name()); err != nil {
				errChan <- err
				return
			}
			data, err = os.ReadFile(tmpFile.Name())
			if err != nil {
				errChan <- err
				return
			}
			c <- struct{}{}
		}

		return nil
	})
	_, err = p.Goto(path)
	if err != nil {
		return nil, err
	}
	p.Evaluate(`
	 window.addEventListener('message', (event) => {
                              const message = event.data
                              window.handleEvent(message)
                        })
`)
	for {
		select {
		case err := <-errChan:
			return nil, err
		case <-c:
			return data, nil
		case <-t.C:
			return nil, errors.New("timeout")
		}
	}
}
