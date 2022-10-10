"""
 SPDX-License-Identifier: MIT
 Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
"""
"""Simple example script that will get the colorbox die temp every second."""
import argparse
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

# Enter a context with an instance of the API client
with openapi_client.ApiClient(
    configuration, header_name=headername, header_value=headervalue
) as api_client:
    # Create an instance of the API class
    client = default_api.DefaultApi(api_client)

    while True:
        try:
            status = client.get_all_status()
            print(f"\rdie temp: {status.device_die_temp.value}", end="")
        except ApiException as e:
            print(f"Exception when calling client.get_all_status(): {e}")
        time.sleep(1)
