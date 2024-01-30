"""
 SPDX-License-Identifier: MIT
 Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
"""
"""Simple example that will upload a 1D/3D Lut, Matrix or Image file to the ColorBox Library."""
import argparse
from operator import truediv
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
from openapi_client import models

kinds = ["lut_1d", "lut_3d", "matrix", "image", "overlay", "amf"]

parser = argparse.ArgumentParser(description="")
parser.add_argument("--host", default="127.0.0.1", help="the hostname or ip of device")
parser.add_argument("--port", default=80, help="the port number to use")
parser.add_argument(
    "--username", default=None, help="username to use if authentication required"
)
parser.add_argument(
    "--password", default=None, help="password to use if authentication required"
)
parser.add_argument(
    "--kind", default="lut_1d", help="kind of upload, choices are: " + ", ".join(kinds)
)
parser.add_argument("--file", nargs='+', default=[], help="the file(s) to upload to library, amf can do multiple")
parser.add_argument("--selection", default="", help="the selection for use with amf uploads, will default to first found amf file if not specified")
parser.add_argument(
    "--entry",
    default=0,
    type=int,
    help="the library entry to upload to, 1 - 16, a value of 0 will find first open entry and use it",
)

args = parser.parse_args()

# sanity check
kindGood = False
for k in kinds:
    if k == args.kind:
        kindGood = True
        break

if kindGood == False:
    print(
        f"error: the kind of '{args.kind}' entered is invalid use one of: {', '.join(kinds)}"
    )
    exit(1)

file_err_msg = "error: a file must be specified"
if args.kind == "amf":
    file_err_msg = "error: at least 1 file must be specified"

if len(args.file) < 1:
    print(file_err_msg)
    exit(1)

if args.entry < 0 or args.entry > 16:
    print("error: entry is out of bounds, must be 0 - 16")
    exit(1)

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

    entry_to_use = args.entry

    if args.entry == 0:
        if args.kind == "lut_1d":
            lib = client.get1d_lut_library()
        elif args.kind == "lut_3d":
            lib = client.get3d_lut_library()
        elif args.kind == "matrix":
            lib = client.get_matrix_library()
        elif args.kind == "image":
            lib = client.get_image_library()
        elif args.kind == "overlay":
            lib = client.get_overlay_library()
        elif args.kind == "amf":
            lib = client.get_amf_library()
        if lib:
            # library entries are 1 based, so account for that
            entry_to_use = len(lib)
            for idx, entry in enumerate(lib):
                if "file_name" not in entry:
                    entry_to_use = idx + 1
                    break

    # upload the file(s)
    if args.kind == "amf":
        first_found_amf = None
        for path in args.file:
            bn = os.path.basename(path)
            if bn.lower().endswith('.amf'):
                first_found_amf = bn
                break

        if first_found_amf is None:
            print(f"error, the list of files does not contain an 'amf' file")
            exit(1)

        selection = args.selection
        if selection == "":
            selection = first_found_amf

        files = []
        for path in args.file:
            f = open(path, "rb")
            if f == None:
                print(f"error opening file [{path}]")
                exit(1)

            files.append(f)

        print(f"uploading '{args.file}' of kind '{args.kind}' to entry '{entry_to_use}' with selection '{selection}'")
        client.upload_multiple_files(file=files, kind=args.kind, entry=entry_to_use, selection=selection)

        for f in files:
            f.close()
    else:
        path = args.file[0]
        f = open(path, "rb")
        if f == None:
            print(f"error opening file [{path}]")
            exit(1)

        print(f"uploading '{path}' of kind '{args.kind}' to entry '{entry_to_use}'")

        client.upload_file(file=f, kind=args.kind, entry=entry_to_use)
        f.close()

    exit(0)
