/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*
Simple example that will upload a 1D/3D Lut, Matrix or Image file to the ColorBox Library.
*/

package main

import (
	sw "colorbox-api"
	"context"
	"flag"
	"fmt"
	"net/http"
	"os"
	"strings"
)

func main() {
	kinds := []string{"lut_1d", "lut_3d", "matrix", "image"}

	host := flag.String("host", "127.0.0.1", "the hostname or ip of device")
	port := flag.Int("port", 80, "the port number to use")
	user := flag.String("username", "", "username to use if authentication required")
	pass := flag.String("password", "", "password to use if authentication required")
	kind := flag.String("kind", "lut_1d", "kind of upload, choices are: "+strings.Join(kinds, ", "))
	fileName := flag.String("file", "", "the file to upload to library")
	entry := flag.Int("entry", 0, "the library entry to upload to, 1 - 16, a value of 0 will find first open entry and use it")
	flag.Parse()

	// sanity check
	var kindGood = false
	for _, k := range kinds {
		if k == *kind {
			kindGood = true
			break
		}
	}
	if kindGood == false {
		fmt.Printf("error: the kind of '%v' entered is invalid use one of: %v\n", *kind, strings.Join(kinds, ", "))
		os.Exit(1)
	}
	if *fileName == "" {
		fmt.Printf("error: a file must be specified\n")
		os.Exit(1)
	}
	if *entry < 0 || *entry > 16 {
		fmt.Printf("error: entry is out of bounds, must be 0 - 16\n")
		os.Exit(1)
	}

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
	fmt.Printf("Controlling [%v]\n", hostAndPort)

	var entryToUse = *entry
	if *entry == 0 {
		var (
			lib []sw.LibraryEntry
			r   *http.Response
			err error
		)
		switch *kind {
		case "lut_1d":
			lib, r, err = client.DefaultApi.Get1dLutLibrary(ctx).Execute()
		case "lut_3d":
			lib, r, err = client.DefaultApi.Get3dLutLibrary(ctx).Execute()
		case "matrix":
			lib, r, err = client.DefaultApi.GetMatrixLibrary(ctx).Execute()
		case "image":
			lib, r, err = client.DefaultApi.GetImageLibrary(ctx).Execute()
		}

		if err != nil {
			fmt.Printf("[%v] error accessing %v Library via API, err = '%v'\n", hostAndPort, *kind, err)
			os.Exit(1)
		} else if r.StatusCode != 200 {
			fmt.Printf("[%v] error with Status request, got code %v\n", hostAndPort, r.StatusCode)
		} else {
			// library entries are 1 based, so account for that
			entryToUse = len(lib)
			for idx, entry := range lib {
				if entry.FileName == nil {
					entryToUse = idx + 1
					break
				}
			}
		}
	}

	// upload the file
	file, err := os.Open(*fileName)
	if err != nil {
		fmt.Printf("error opening file [%v]\n", *fileName)
		os.Exit(1)
	}
	defer file.Close()

	fmt.Printf("uploading '%v' of kind '%v' to entry '%v'\n", *fileName, *kind, entryToUse)

	var upReq = client.DefaultApi.UploadFile(ctx)
	upReq = upReq.Kind(*kind).Entry(int32(entryToUse)).File(file)
	r, err2 := upReq.Execute()

	if err2 != nil {
		fmt.Printf("[%v] error uploading %v to Library via API, err = '%v'\n", hostAndPort, *kind, err2)
	} else if r.StatusCode != 200 {
		fmt.Printf("[%v] error with Upload request, got code %v\n", hostAndPort, r.StatusCode)
	}
}
