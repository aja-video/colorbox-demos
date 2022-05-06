/*
This example will get the current device die temperature every second.
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

	fmt.Printf("Requesting from [%v]\n", hostAndPort)

	for {
		resp, r, err := client.DefaultApi.GetAllStatus(context.Background()).Execute()
		if err != nil {
			fmt.Printf("[%v] error accessing Status via API\n", hostAndPort)
		} else if r.StatusCode != 200 {
			fmt.Printf("[%v] error with Status request, got code %v\n", hostAndPort, r.StatusCode)
		} else {
			fmt.Printf("\rdie temp: %v", resp.DeviceDieTemp.GetValue())
		}
		time.Sleep(time.Second)
	}
}
