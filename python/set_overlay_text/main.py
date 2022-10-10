"""
 SPDX-License-Identifier: MIT
 Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
"""
"""
This example will:
- disable the frame store
- enabled the overlay stage
- enable the user text of the overlay
- update the user text of the overlay every 1/4 seconds
  - set uset text 1 to the current machine local time
  - set user text 2 to a unicode text annimation
"""
import argparse
import datetime
import os
import sys
import time

if sys.version_info >= (3, 6):
    pass
else:
    print("This script requires Python 3.6 or higher")
    exit(1)

sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), "../api")))

import openapi_client
from openapi_client.api import default_api
from openapi_client.rest import ApiException

parser = argparse.ArgumentParser(description="")
parser.add_argument("--host", default="127.0.0.1", help="the hostname or ip of device")
parser.add_argument("--port", default=80, help="the port number to use")
parser.add_argument(
    "--username", default=None, help="username to use if authentication required"
)
parser.add_argument(
    "--password", default=None, help="password to use if authentication required"
)

args = parser.parse_args()
hostAndPort = f"{args.host}:{args.port}/v2"

# Create a configuration that points to the IP Address of desired ColorBox
configuration = openapi_client.Configuration(
    host=hostAndPort, username=args.username, password=args.password
)

headername = None
headervalue = None
if args.username != None:
    headername = "Authorization"
    headervalue = configuration.get_basic_auth_token()

print(f"Controlling [{hostAndPort}]")

# Enter a context with an instance of the API client
with openapi_client.ApiClient(
    configuration, header_name=headername, header_value=headervalue
) as api_client:
    # Create an instance of the API class
    client = default_api.DefaultApi(api_client)

    # disable frame store if needed
    try:
        fs = client.get_frame_store()
    except ApiException as e:
        print(f"Exception when calling client.get_frame_store(): {e}")

    fs.enabled = False
    client.set_frame_store(fs)

    # enable the overlay stage
    try:
        ol = client.get_overlay()
    except ApiException as e:
        print(f"Exception when calling client.get_overlay(): {e}")

    ol.enabled = True
    ol.user_text_enabled = True
    client.set_overlay(ol)

    # update the overlay text every 1/4 seconds
    # set the overlay text line 1 to the local time of this machine
    # set the overlay text line 2 to a unicode animation
    loop = 0
    runes = "▁▃▄▅▆▇█▇▆▅▄▃"  # "←↖↑↗→↘↓↙" "⠋⠙⠸⠴⠦⠇"
    while True:
        good = True
        try:
            ol = client.get_overlay()
        except ApiException as e:
            good = False
            print(f"Exception when calling client.get_overlay(): {e}")

        if good:
            ol.user_text_line1 = datetime.datetime.now().isoformat()
            if loop > len(runes) - 1:
                loop = 0
            ol.user_text_line2 = runes[loop]
            client.set_overlay(ol)

        time.sleep(0.25)
        loop = loop + 1
