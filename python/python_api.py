"""Simple example script that will get the colorbox die temp every second."""
import os
import sys
import time

if sys.version_info >= (3, 6):
    pass
else:
    print("This script requires Python 3.6 or higher")
    exit(1)

sys.path.append(
    os.path.abspath(
        os.path.join(os.path.dirname(__file__), "../common/python")
    )
)

import openapi_client
from openapi_client.api import default_api
from openapi_client.rest import ApiException

# Chnage to IP Address of desired Color Box
configuration = openapi_client.Configuration(host="http://192.168.1.141/v2")

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    while True:
        try:
            status = api_instance.get_all_status()
            print(f"\rdie temp: {status.device_die_temp.value}", end="")
        except ApiException as e:
            print(f"Exception when calling DefaultApi->get_all_status(): {e}")
        time.sleep(1)
