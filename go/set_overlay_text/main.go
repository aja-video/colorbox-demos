/*
This example will:
- disable the frame store
- enabled the overlay stage
- enable the user text of the overlay
- update the user text of the overlay every 1/4 seconds
  - set uset text 1 to the current machine local time
  - set user text 2 to a unicode text annimation
*/

package main

import (
	sw "colorbox-api"
	"context"
	"flag"
	"fmt"
	"time"
)

func main() {
	host := flag.String("host", "127.0.0.1", "the hostname or ip of device")
	port := flag.Int("port", 80, "the port number to use")
	flag.Parse()
	hostAndPort := fmt.Sprintf("%v:%v", *host, *port)

	cfg := sw.NewConfiguration()
	cfg.Host = hostAndPort
	cfg.Scheme = "http"
	var client *sw.APIClient = sw.NewAPIClient(cfg)

	fmt.Printf("Controlling [%v]\n", hostAndPort)

	// disable frame store if needed
	fs, r, err := client.DefaultApi.GetFrameStore(context.Background()).Execute()
	if err != nil {
		fmt.Printf("[%v] error accessing FrameStore via API\n", hostAndPort)
	}
	if r.StatusCode != 200 {
		fmt.Printf("[%v] error with GetFrameStore request, got code %v\n", hostAndPort, r.StatusCode)
	}
	fs.SetEnabled(false)
	client.DefaultApi.SetFrameStore(context.Background()).FrameStore(*fs).Execute()

	// enable the overlay stage
	ol, r, err := client.DefaultApi.GetOverlay(context.Background()).Execute()
	if err != nil {
		fmt.Printf("[%v] error accessing Overlay via API\n", hostAndPort)
	}
	if r.StatusCode != 200 {
		fmt.Printf("[%v] error with GetOverlay request, got code %v\n", hostAndPort, r.StatusCode)
	}
	ol.SetEnabled(true)
	ol.SetUserTextEnabled(true)
	client.DefaultApi.SetOverlay(context.Background()).Overlay(*ol).Execute()

	// update the overlay text every 1/4 seconds
	// set the overlay text line 1 to the local time of this machine
	// set the overlay text line 2 to a unicode animation
	var loop int = 0
	runes := []rune("▁▃▄▅▆▇█▇▆▅▄▃") //"←↖↑↗→↘↓↙" "⠋⠙⠸⠴⠦⠇"
	for {
		ol, r, err := client.DefaultApi.GetOverlay(context.Background()).Execute()

		if err != nil {
			fmt.Printf("[%v] error accessing Overlay via API\n", hostAndPort)
		} else if r.StatusCode != 200 {
			fmt.Printf("[%v] error with GetOverlay request, got code %v\n", hostAndPort, r.StatusCode)
		} else {
			ol.SetUserTextLine1(time.Now().Local().String())
			if loop > len(runes)-1 {
				loop = 0
			}
			ol.SetUserTextLine2(string(runes[loop]))
			client.DefaultApi.SetOverlay(context.Background()).Overlay(*ol).Execute()
		}
		time.Sleep(time.Second / 4)
		loop += 1
	}
}
