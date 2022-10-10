/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*
This example will get the current device die temperature every second.
*/

package main

import (
	sw "colorbox-api"
	"context"
	"flag"
	"fmt"
	"os"
	"time"
)

func main() {
	host := flag.String("host", "127.0.0.1", "the hostname or ip of device")
	port := flag.Int("port", 80, "the port number to use")
	user := flag.String("username", "", "username to use if authentication required")
	pass := flag.String("password", "", "password to use if authentication required")
	flag.Parse()
	hostAndPort := fmt.Sprintf("%v:%v", *host, *port)

	cfg := sw.NewConfiguration()
	cfg.Host = hostAndPort
	cfg.Scheme = "http"
	var client *sw.APIClient = sw.NewAPIClient(cfg)

	var ctx = context.Background()
	if *user != "" {
		ctx = context.WithValue(context.Background(), sw.ContextBasicAuth, sw.BasicAuth{
			UserName: *user,
			Password: *pass,
		})
	}
	fmt.Printf("Requesting from [%v]\n", hostAndPort)

	for {
		resp, r, err := client.DefaultApi.GetAllStatus(ctx).Execute()
		if err != nil {
			fmt.Printf("[%v] error accessing Status via API, err = '%v'\n", hostAndPort, err)
			os.Exit(1)
		} else if r.StatusCode != 200 {
			fmt.Printf("[%v] error with Status request, got code %v\n", hostAndPort, r.StatusCode)
		} else {
			fmt.Printf("\rdie temp: %v", resp.DeviceDieTemp.GetValue())
		}
		time.Sleep(time.Second)
	}
}
