# openapi_client.DefaultApi

All URIs are relative to */v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get1d_lut_library**](DefaultApi.md#get1d_lut_library) | **GET** /1dLutLibrary | 
[**get3d_lut_library**](DefaultApi.md#get3d_lut_library) | **GET** /3dLutLibrary | 
[**get_active_params_for_given_net_device_index**](DefaultApi.md#get_active_params_for_given_net_device_index) | **GET** /net/device/{devIdx}/activeParams | 
[**get_all_net_devices**](DefaultApi.md#get_all_net_devices) | **GET** /net/devices | 
[**get_all_status**](DefaultApi.md#get_all_status) | **GET** /status | 
[**get_all_system_discovers**](DefaultApi.md#get_all_system_discovers) | **GET** /discovers | 
[**get_anc_capture_filter**](DefaultApi.md#get_anc_capture_filter) | **GET** /ancCaptureFilter | 
[**get_bbc_config**](DefaultApi.md#get_bbc_config) | **GET** /bbcConfig | 
[**get_colorfront_config**](DefaultApi.md#get_colorfront_config) | **GET** /colorfrontConfig | 
[**get_config_for_given_net_device_index**](DefaultApi.md#get_config_for_given_net_device_index) | **GET** /net/device/{devIdx}/config | 
[**get_frame_store**](DefaultApi.md#get_frame_store) | **GET** /frameStore | 
[**get_image_library**](DefaultApi.md#get_image_library) | **GET** /imageLibrary | 
[**get_library_control**](DefaultApi.md#get_library_control) | **GET** /libraryControl | 
[**get_matrix_library**](DefaultApi.md#get_matrix_library) | **GET** /matrixLibrary | 
[**get_nbc_config**](DefaultApi.md#get_nbc_config) | **GET** /nbcConfig | 
[**get_orion_config**](DefaultApi.md#get_orion_config) | **GET** /orionConfig | 
[**get_output_config**](DefaultApi.md#get_output_config) | **GET** /outputConfig | 
[**get_output_status**](DefaultApi.md#get_output_status) | **GET** /outputStatus | 
[**get_overlay**](DefaultApi.md#get_overlay) | **GET** /overlay | 
[**get_pipeline_stages**](DefaultApi.md#get_pipeline_stages) | **GET** /pipelineStages | 
[**get_preview_image**](DefaultApi.md#get_preview_image) | **GET** /preview | 
[**get_routing**](DefaultApi.md#get_routing) | **GET** /routing | 
[**get_sdi_input_config**](DefaultApi.md#get_sdi_input_config) | **GET** /sdiInputConfig | 
[**get_sdi_input_status**](DefaultApi.md#get_sdi_input_status) | **GET** /sdiInputStatus | 
[**get_staged_params_for_given_net_device_index**](DefaultApi.md#get_staged_params_for_given_net_device_index) | **GET** /net/device/{devIdx}/stagedParams | 
[**get_status_for_given_net_device_index**](DefaultApi.md#get_status_for_given_net_device_index) | **GET** /net/device/{devIdx}/status | 
[**get_system_config**](DefaultApi.md#get_system_config) | **GET** /system/config | 
[**get_system_preset_library**](DefaultApi.md#get_system_preset_library) | **GET** /systemPresetLibrary | 
[**get_system_status**](DefaultApi.md#get_system_status) | **GET** /system/status | 
[**get_wi_fi_config**](DefaultApi.md#get_wi_fi_config) | **GET** /wifiConfig | 
[**get_wi_fi_status**](DefaultApi.md#get_wi_fi_status) | **GET** /wifiStatus | 
[**set_active_params_for_given_net_device_index**](DefaultApi.md#set_active_params_for_given_net_device_index) | **PUT** /net/device/{devIdx}/activeParams | 
[**set_all_status**](DefaultApi.md#set_all_status) | **PUT** /status | 
[**set_all_system_discovers**](DefaultApi.md#set_all_system_discovers) | **PUT** /discovers | 
[**set_anc_capture_filter**](DefaultApi.md#set_anc_capture_filter) | **PUT** /ancCaptureFilter | 
[**set_bbc_config**](DefaultApi.md#set_bbc_config) | **PUT** /bbcConfig | 
[**set_colorfront_config**](DefaultApi.md#set_colorfront_config) | **PUT** /colorfrontConfig | 
[**set_config_for_given_net_device_index**](DefaultApi.md#set_config_for_given_net_device_index) | **PUT** /net/device/{devIdx}/config | 
[**set_frame_store**](DefaultApi.md#set_frame_store) | **PUT** /frameStore | 
[**set_library_control**](DefaultApi.md#set_library_control) | **PUT** /libraryControl | 
[**set_license_generation_request**](DefaultApi.md#set_license_generation_request) | **POST** /licenseGenerationRequest | 
[**set_nbc_config**](DefaultApi.md#set_nbc_config) | **PUT** /nbcConfig | 
[**set_orion_config**](DefaultApi.md#set_orion_config) | **PUT** /orionConfig | 
[**set_output_config**](DefaultApi.md#set_output_config) | **PUT** /outputConfig | 
[**set_output_status**](DefaultApi.md#set_output_status) | **PUT** /outputStatus | 
[**set_overlay**](DefaultApi.md#set_overlay) | **PUT** /overlay | 
[**set_pipeline_stages**](DefaultApi.md#set_pipeline_stages) | **PUT** /pipelineStages | 
[**set_preview_image**](DefaultApi.md#set_preview_image) | **PUT** /preview | 
[**set_routing**](DefaultApi.md#set_routing) | **PUT** /routing | 
[**set_sdi_input_config**](DefaultApi.md#set_sdi_input_config) | **PUT** /sdiInputConfig | 
[**set_sdi_input_status**](DefaultApi.md#set_sdi_input_status) | **PUT** /sdiInputStatus | 
[**set_staged_params_for_given_net_device_index**](DefaultApi.md#set_staged_params_for_given_net_device_index) | **PUT** /net/device/{devIdx}/stagedParams | 
[**set_status_for_given_net_device_index**](DefaultApi.md#set_status_for_given_net_device_index) | **PUT** /net/device/{devIdx}/status | 
[**set_system_config**](DefaultApi.md#set_system_config) | **PUT** /system/config | 
[**set_system_password**](DefaultApi.md#set_system_password) | **PUT** /system/password | 
[**set_system_status**](DefaultApi.md#set_system_status) | **PUT** /system/status | 
[**set_wi_fi_config**](DefaultApi.md#set_wi_fi_config) | **PUT** /wifiConfig | 
[**set_wi_fi_status**](DefaultApi.md#set_wi_fi_status) | **PUT** /wifiStatus | 
[**upload_file**](DefaultApi.md#upload_file) | **POST** /upload | 


# **get1d_lut_library**
> [LibraryEntry] get1d_lut_library()



Get the 1d LUT Library array

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.library_entry import LibraryEntry
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get1d_lut_library()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get1d_lut_library: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**[LibraryEntry]**](LibraryEntry.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get3d_lut_library**
> [LibraryEntry] get3d_lut_library()



Get the 3d LUT Library array

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.library_entry import LibraryEntry
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get3d_lut_library()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get3d_lut_library: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**[LibraryEntry]**](LibraryEntry.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_active_params_for_given_net_device_index**
> NetParams get_active_params_for_given_net_device_index(dev_idx)



Return an object with active params for network interface at devIdx

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.net_params import NetParams
from openapi_client.model.device_idx import DeviceIdx
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    dev_idx = DeviceIdx(0) # DeviceIdx | 

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_active_params_for_given_net_device_index(dev_idx)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_active_params_for_given_net_device_index: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **dev_idx** | **DeviceIdx**|  |

### Return type

[**NetParams**](NetParams.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_all_net_devices**
> [NetDevice] get_all_net_devices()



Return an array of all the NetDevice objects.

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.net_device import NetDevice
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_all_net_devices()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_all_net_devices: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**[NetDevice]**](NetDevice.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_all_status**
> Status get_all_status()



Return the complete status object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.status import Status
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_all_status()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_all_status: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**Status**](Status.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_all_system_discovers**
> [SystemDiscover] get_all_system_discovers()



Return an array of objects with the discovered devices

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.system_discover import SystemDiscover
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_all_system_discovers()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_all_system_discovers: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**[SystemDiscover]**](SystemDiscover.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_anc_capture_filter**
> AncCaptureFilter get_anc_capture_filter()



Return the acn capture filter object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.anc_capture_filter import AncCaptureFilter
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_anc_capture_filter()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_anc_capture_filter: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**AncCaptureFilter**](AncCaptureFilter.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_bbc_config**
> BbcConfig get_bbc_config()



Get the BbcConfig object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.bbc_config import BbcConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_bbc_config()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_bbc_config: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**BbcConfig**](BbcConfig.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_colorfront_config**
> ColorfrontConfig get_colorfront_config()



Get the ColorfrontConfig object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.colorfront_config import ColorfrontConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_colorfront_config()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_colorfront_config: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**ColorfrontConfig**](ColorfrontConfig.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_config_for_given_net_device_index**
> NetConfig get_config_for_given_net_device_index(dev_idx)



Return an object with config for network interface at devIdx

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.device_idx import DeviceIdx
from openapi_client.model.net_config import NetConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    dev_idx = DeviceIdx(0) # DeviceIdx | 

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_config_for_given_net_device_index(dev_idx)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_config_for_given_net_device_index: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **dev_idx** | **DeviceIdx**|  |

### Return type

[**NetConfig**](NetConfig.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_frame_store**
> FrameStore get_frame_store()



Get the frame store configuration

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.frame_store import FrameStore
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_frame_store()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_frame_store: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**FrameStore**](FrameStore.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_image_library**
> [LibraryEntry] get_image_library()



Get the image Library array

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.library_entry import LibraryEntry
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_image_library()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_image_library: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**[LibraryEntry]**](LibraryEntry.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_library_control**
> LibraryControl get_library_control()



Get the library control object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.library_control import LibraryControl
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_library_control()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_library_control: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**LibraryControl**](LibraryControl.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_matrix_library**
> [LibraryEntry] get_matrix_library()



Get the matrix Library array

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.library_entry import LibraryEntry
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_matrix_library()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_matrix_library: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**[LibraryEntry]**](LibraryEntry.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_nbc_config**
> NbcConfig get_nbc_config()



Get the NbcConfig object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.nbc_config import NbcConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_nbc_config()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_nbc_config: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**NbcConfig**](NbcConfig.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_orion_config**
> OrionConfig get_orion_config()



Get the OrionConfig object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.orion_config import OrionConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_orion_config()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_orion_config: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**OrionConfig**](OrionConfig.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_output_config**
> OutputConfig get_output_config()



Get the SDI/HDMI output config

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.output_config import OutputConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_output_config()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_output_config: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**OutputConfig**](OutputConfig.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_output_status**
> OutputConfig get_output_status()



Get the SDI/HDMI output status

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.output_config import OutputConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_output_status()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_output_status: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**OutputConfig**](OutputConfig.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_overlay**
> Overlay get_overlay()



Get the overlay configuration

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.overlay import Overlay
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_overlay()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_overlay: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**Overlay**](Overlay.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_pipeline_stages**
> PipelineStages get_pipeline_stages()



Get the stages object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.pipeline_stages import PipelineStages
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_pipeline_stages()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_pipeline_stages: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**PipelineStages**](PipelineStages.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_preview_image**
> Preview get_preview_image()



Return a preview image

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.preview import Preview
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_preview_image()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_preview_image: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**Preview**](Preview.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_routing**
> Routing get_routing()



Get the routing object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.routing import Routing
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_routing()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_routing: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**Routing**](Routing.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_sdi_input_config**
> SDI get_sdi_input_config()



Get the SDI input config

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.sdi import SDI
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_sdi_input_config()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_sdi_input_config: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**SDI**](SDI.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_sdi_input_status**
> SDI get_sdi_input_status()



Get the SDI input status

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.sdi import SDI
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_sdi_input_status()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_sdi_input_status: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**SDI**](SDI.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_staged_params_for_given_net_device_index**
> NetParams get_staged_params_for_given_net_device_index(dev_idx)



Return an object with staged params for network interface at devIdx

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.net_params import NetParams
from openapi_client.model.device_idx import DeviceIdx
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    dev_idx = DeviceIdx(0) # DeviceIdx | 

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_staged_params_for_given_net_device_index(dev_idx)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_staged_params_for_given_net_device_index: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **dev_idx** | **DeviceIdx**|  |

### Return type

[**NetParams**](NetParams.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_status_for_given_net_device_index**
> NetStatus get_status_for_given_net_device_index(dev_idx)



Return an object with status for network interface at devIdx

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.device_idx import DeviceIdx
from openapi_client.model.net_status import NetStatus
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    dev_idx = DeviceIdx(0) # DeviceIdx | 

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.get_status_for_given_net_device_index(dev_idx)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_status_for_given_net_device_index: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **dev_idx** | **DeviceIdx**|  |

### Return type

[**NetStatus**](NetStatus.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_system_config**
> SystemConfig get_system_config()



Return an object with the system configuration

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.system_config import SystemConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_system_config()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_system_config: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**SystemConfig**](SystemConfig.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_system_preset_library**
> [LibraryEntry] get_system_preset_library()



Get the System Preset Library array

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.library_entry import LibraryEntry
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_system_preset_library()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_system_preset_library: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**[LibraryEntry]**](LibraryEntry.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_system_status**
> SystemStatus get_system_status()



Return an object with the system status

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.system_status import SystemStatus
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_system_status()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_system_status: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**SystemStatus**](SystemStatus.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_wi_fi_config**
> WiFiDeviceConfig get_wi_fi_config()



Return the complete wifi config object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.wi_fi_device_config import WiFiDeviceConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_wi_fi_config()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_wi_fi_config: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**WiFiDeviceConfig**](WiFiDeviceConfig.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_wi_fi_status**
> WiFiDeviceStatus get_wi_fi_status()



Return the complete wifi status object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.wi_fi_device_status import WiFiDeviceStatus
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_response = api_instance.get_wi_fi_status()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_wi_fi_status: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**WiFiDeviceStatus**](WiFiDeviceStatus.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_active_params_for_given_net_device_index**
> set_active_params_for_given_net_device_index(dev_idx, net_params)



Set the active params for network interface at devIdx

### Example

* Api Key Authentication (app_id):

```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.net_params import NetParams
from openapi_client.model.device_idx import DeviceIdx
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: app_id
configuration.api_key['app_id'] = 'YOUR_API_KEY'

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['app_id'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    dev_idx = DeviceIdx(0) # DeviceIdx | 
    net_params = NetParams(
        address="address_example",
        subnet="subnet_example",
        gateway="gateway_example",
        dns_server1="dns_server1_example",
        dns_server2="dns_server2_example",
        dns_search="dns_search_example",
    ) # NetParams | Net Device params object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_active_params_for_given_net_device_index(dev_idx, net_params)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_active_params_for_given_net_device_index: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **dev_idx** | **DeviceIdx**|  |
 **net_params** | [**NetParams**](NetParams.md)| Net Device params object |

### Return type

void (empty response body)

### Authorization

[app_id](../README.md#app_id)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_all_status**
> set_all_status(status)



Modify the status object

### Example

* Api Key Authentication (app_id):

```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.status import Status
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: app_id
configuration.api_key['app_id'] = 'YOUR_API_KEY'

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['app_id'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    status = Status(
        device_die_temp=StatusInfo(
            upper_bound_good=3.14,
            upper_bound_maybe=3.14,
            value="value_example",
            value_int=3.14,
            label="label_example",
            extra_value="extra_value_example",
            extra_label="extra_label_example",
            state=StatusState("StatusStateUnknown"),
        ),
        system_date="system_date_example",
        system_time="system_time_example",
        system_uptime="system_uptime_example",
        system_os_name="system_os_name_example",
        system_serial_number="system_serial_number_example",
        system_catalog_number="system_catalog_number_example",
        system_app_sw_version="system_app_sw_version_example",
        system_support_info="system_support_info_example",
        eula_accepted=True,
        license_active=True,
        bbc_luts_licensed=True,
        orion_engine_licensed=True,
        colorfront_engine_licensed=True,
        shutdown_time=1,
        colorfront_transform_version="colorfront_transform_version_example",
        colorfront_engine_version="colorfront_engine_version_example",
        orion_version="orion_version_example",
        bbc_lut_version="bbc_lut_version_example",
        nbcu_lut_version="nbcu_lut_version_example",
        cpu_busy=True,
    ) # Status | Status object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_all_status(status)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_all_status: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **status** | [**Status**](Status.md)| Status object |

### Return type

void (empty response body)

### Authorization

[app_id](../README.md#app_id)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_all_system_discovers**
> set_all_system_discovers(system_discover)



Modify the array of discovered devices

### Example

* Api Key Authentication (app_id):

```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.system_discover import SystemDiscover
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: app_id
configuration.api_key['app_id'] = 'YOUR_API_KEY'

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['app_id'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    system_discover = [
        SystemDiscover(
            service_description="service_description_example",
            service_type="service_type_example",
            service_domain="service_domain_example",
            host_name="host_name_example",
            ip_address="ip_address_example",
            port=3.14,
            device_name="device_name_example",
            description="description_example",
            board_type="board_type_example",
            board_number="board_number_example",
            board_id="board_id_example",
        ),
    ] # [SystemDiscover] | Array of system discover objects

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_all_system_discovers(system_discover)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_all_system_discovers: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **system_discover** | [**[SystemDiscover]**](SystemDiscover.md)| Array of system discover objects |

### Return type

void (empty response body)

### Authorization

[app_id](../README.md#app_id)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_anc_capture_filter**
> set_anc_capture_filter(anc_capture_filter)



Modify the anc capture filter object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.anc_capture_filter import AncCaptureFilter
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    anc_capture_filter = AncCaptureFilter(
        enable=False,
        dids=["0x44","0x20"],
    ) # AncCaptureFilter | AncCaptureFilter object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_anc_capture_filter(anc_capture_filter)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_anc_capture_filter: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **anc_capture_filter** | [**AncCaptureFilter**](AncCaptureFilter.md)| AncCaptureFilter object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_bbc_config**
> set_bbc_config(bbc_config)



Modify the BbcConfig object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.bbc_config import BbcConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    bbc_config = BbcConfig(
        lut1d_1=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
        m3x3_2=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
        lut3d_1=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
    ) # BbcConfig | BbcConfig object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_bbc_config(bbc_config)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_bbc_config: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bbc_config** | [**BbcConfig**](BbcConfig.md)| BbcConfig object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_colorfront_config**
> set_colorfront_config(colorfront_config)



Modify the ColorfrontConfig object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.colorfront_config import ColorfrontConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    colorfront_config = ColorfrontConfig(
        enabled=True,
        in_dyn_range_gamut=ColorfrontDynRangeGamut("SDR BT.709"),
        out_dyn_range_gamut=ColorfrontDynRangeGamut("SDR BT.709"),
    ) # ColorfrontConfig | ColorfrontConfig object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_colorfront_config(colorfront_config)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_colorfront_config: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **colorfront_config** | [**ColorfrontConfig**](ColorfrontConfig.md)| ColorfrontConfig object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_config_for_given_net_device_index**
> set_config_for_given_net_device_index(dev_idx, net_config)



Set the config for network interface at devIdx

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.device_idx import DeviceIdx
from openapi_client.model.net_config import NetConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    dev_idx = DeviceIdx(0) # DeviceIdx | 
    net_config = NetConfig(
        ip_config=IpConfig("DHCP"),
        ip_change_commit=0,
    ) # NetConfig | Net Device config object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_config_for_given_net_device_index(dev_idx, net_config)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_config_for_given_net_device_index: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **dev_idx** | **DeviceIdx**|  |
 **net_config** | [**NetConfig**](NetConfig.md)| Net Device config object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_frame_store**
> set_frame_store(frame_store)



Set the frame store config

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.frame_store import FrameStore
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    frame_store = FrameStore(
        enabled=True,
        dynamic=True,
        image_name="image_name_example",
        timecode_appended=True,
        file_type=FileTypeChoice("TIFF"),
        library_entry=1,
        format=VideoFormat("Auto"),
        convert=VideoConvertChoice("VideoConvertActual"),
        rgb_range=RgbRange("Auto"),
    ) # FrameStore | FrameStore object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_frame_store(frame_store)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_frame_store: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **frame_store** | [**FrameStore**](FrameStore.md)| FrameStore object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_library_control**
> set_library_control(library_control)



Perform actions on Library entries

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.library_control import LibraryControl
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    library_control = LibraryControl(
        library=Library("1D LUT"),
        entry=1,
        action=LibraryAction("Idle"),
        data="data_example",
        error_msg="error_msg_example",
    ) # LibraryControl | LibraryControl object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_library_control(library_control)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_library_control: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **library_control** | [**LibraryControl**](LibraryControl.md)| LibraryControl object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_license_generation_request**
> set_license_generation_request()



Request a license request file to be generated

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        api_instance.set_license_generation_request()
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_license_generation_request: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_nbc_config**
> set_nbc_config(nbc_config)



Modify the NbcConfig object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.nbc_config import NbcConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    nbc_config = NbcConfig(
        lut1d_1=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
        m3x3_2=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
        lut3d_1=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
    ) # NbcConfig | NbcConfig object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_nbc_config(nbc_config)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_nbc_config: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **nbc_config** | [**NbcConfig**](NbcConfig.md)| NbcConfig object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_orion_config**
> set_orion_config(orion_config)



Modify the OrionConfig object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.orion_config import OrionConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    orion_config = OrionConfig(
        enabled=True,
        conversion=OrionConversion("HLG to SDR"),
        mode=OrionMode("Display Light"),
        method=OrionMethod("MAX(RGB)"),
        source_range=OrionSourceRange("Narrow"),
        hdr_ref=75.0,
        sdr_ref=100.0,
        hdr_peak=1000,
        sdr_eotf=OrionSdrEotf("2.4 Gamma"),
        pre_knee=100.0,
        pre_amount=0.0,
        post_knee=100.0,
        post_amount=0.0,
        clamping=OrionClamping("-7 to 109 IRE"),
        implementation=OrionImplementation("Engine"),
    ) # OrionConfig | OrionConfig object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_orion_config(orion_config)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_orion_config: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **orion_config** | [**OrionConfig**](OrionConfig.md)| OrionConfig object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_output_config**
> set_output_config(output_config)



Set the SDI/HDMI output config

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.output_config import OutputConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    output_config = OutputConfig(
        color_space=ColorSpace("Auto"),
        rgb_range=RgbRange("Auto"),
        bit_depth=BitDepth("Auto"),
        scan_mode=ScanMode("Auto"),
        colorimetry=Colorimetry("Auto"),
        transfer=Transfer("Auto"),
        format=VideoFormat("Auto"),
        sdi_mode3g=SdiMode3g("Auto"),
        hdmi_crop4k2k=Crop4k2k("Auto"),
        hdmi_connection=Connection("Auto"),
    ) # OutputConfig | OutputConfig object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_output_config(output_config)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_output_config: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **output_config** | [**OutputConfig**](OutputConfig.md)| OutputConfig object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_output_status**
> set_output_status(output_config)



Set the SDI/HDMI output status

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.output_config import OutputConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    output_config = OutputConfig(
        color_space=ColorSpace("Auto"),
        rgb_range=RgbRange("Auto"),
        bit_depth=BitDepth("Auto"),
        scan_mode=ScanMode("Auto"),
        colorimetry=Colorimetry("Auto"),
        transfer=Transfer("Auto"),
        format=VideoFormat("Auto"),
        sdi_mode3g=SdiMode3g("Auto"),
        hdmi_crop4k2k=Crop4k2k("Auto"),
        hdmi_connection=Connection("Auto"),
    ) # OutputConfig | OutputConfig object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_output_status(output_config)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_output_status: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **output_config** | [**OutputConfig**](OutputConfig.md)| OutputConfig object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_overlay**
> set_overlay(overlay)



Set the overlay configuration

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.overlay import Overlay
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    overlay = Overlay(
        enabled=True,
        in_vpid_format=True,
        in_vpid_range=True,
        in_vpid_hdr=True,
        in_vpid_bit_depth=True,
        out_vpid_format=True,
        out_vpid_range=True,
        out_vpid_hdr=True,
        out_vpid_bit_depth=True,
        time_code=True,
        closed_caption=True,
        user_text_enabled=True,
        user_text_line1="user_text_line1_example",
        user_text_line2="user_text_line2_example",
        pipeline_config=True,
        location=Locations("Bottom Center"),
    ) # Overlay | Overlay object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_overlay(overlay)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_overlay: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **overlay** | [**Overlay**](Overlay.md)| Overlay object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_pipeline_stages**
> set_pipeline_stages(pipeline_stages)



Modify the stages object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.pipeline_stages import PipelineStages
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    pipeline_stages = PipelineStages(
        lut1d_1=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
        m3x3_2=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
        lut1d_2=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
        lut3d_1=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
        lut1d_3=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
        m3x3_3=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
        lut1d_4=Stage(
            enabled=True,
            dynamic=True,
            library_entry=1,
            color_corrector=ColorCorrector(
                black_red=0.0,
                black_green=0.0,
                black_blue=0.0,
                gain_red=1.0,
                gain_green=1.0,
                gain_blue=1.0,
                gamma_red=0.0,
                gamma_green=0.0,
                gamma_blue=0.0,
                units_black="IRE",
                units_gain="",
                units_gamma="",
            ),
            proc_amp=ProcAmp(
                black=0.0,
                gain=1.0,
                hue=0,
                sat=1.0,
                units_black="IRE",
                units_gain="",
                units_hue="degrees",
                units_sat="",
            ),
        ),
        in_colorimetry=Colorimetry("Auto"),
        in_range=PipelineRange("SMPTEFull"),
        out_colorimetry=Colorimetry("Auto"),
        out_range=PipelineRange("SMPTEFull"),
        transfer_characteristic=Transfer("Auto"),
        csc_filter=CSCFilter("None"),
    ) # PipelineStages | Stages object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_pipeline_stages(pipeline_stages)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_pipeline_stages: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pipeline_stages** | [**PipelineStages**](PipelineStages.md)| Stages object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_preview_image**
> set_preview_image()



Set the preview image

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.preview import Preview
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    preview = Preview(
        image='YQ==',
        image_type="image_type_example",
        anc_data='YQ==',
        user_data1="user_data1_example",
        user_data2="user_data2_example",
    ) # Preview | base 64 JPEG encoded image (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.set_preview_image(preview=preview)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_preview_image: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **preview** | [**Preview**](Preview.md)| base 64 JPEG encoded image | [optional]

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_routing**
> set_routing(routing)



Modify the routing object

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.routing import Routing
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    routing = Routing(
        mode=Mode("Input"),
        preview_tap=PreviewTap("OUTPUT"),
        pipeline_bypass_button=True,
        pipeline_bypass_user=True,
    ) # Routing | Routing object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_routing(routing)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_routing: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **routing** | [**Routing**](Routing.md)| Routing object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_sdi_input_config**
> set_sdi_input_config(sdi)



Set the SDI input config

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.sdi import SDI
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    sdi = SDI(
        color_space=ColorSpace("Auto"),
        rgb_range=RgbRange("Auto"),
        bit_depth=BitDepth("Auto"),
        scan_mode=ScanMode("Auto"),
        sdi_mode3g=SdiMode3g("Auto"),
        colorimetry=Colorimetry("Auto"),
        transfer=Transfer("Auto"),
        format=VideoFormat("Auto"),
    ) # SDI | SDI object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_sdi_input_config(sdi)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_sdi_input_config: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sdi** | [**SDI**](SDI.md)| SDI object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_sdi_input_status**
> set_sdi_input_status(sdi)



Set the SDI input status

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.sdi import SDI
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    sdi = SDI(
        color_space=ColorSpace("Auto"),
        rgb_range=RgbRange("Auto"),
        bit_depth=BitDepth("Auto"),
        scan_mode=ScanMode("Auto"),
        sdi_mode3g=SdiMode3g("Auto"),
        colorimetry=Colorimetry("Auto"),
        transfer=Transfer("Auto"),
        format=VideoFormat("Auto"),
    ) # SDI | SDI object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_sdi_input_status(sdi)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_sdi_input_status: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sdi** | [**SDI**](SDI.md)| SDI object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_staged_params_for_given_net_device_index**
> set_staged_params_for_given_net_device_index(dev_idx, net_params)



Set the staged params for network interface at devIdx

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.net_params import NetParams
from openapi_client.model.device_idx import DeviceIdx
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    dev_idx = DeviceIdx(0) # DeviceIdx | 
    net_params = NetParams(
        address="address_example",
        subnet="subnet_example",
        gateway="gateway_example",
        dns_server1="dns_server1_example",
        dns_server2="dns_server2_example",
        dns_search="dns_search_example",
    ) # NetParams | Net Device params object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_staged_params_for_given_net_device_index(dev_idx, net_params)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_staged_params_for_given_net_device_index: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **dev_idx** | **DeviceIdx**|  |
 **net_params** | [**NetParams**](NetParams.md)| Net Device params object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_status_for_given_net_device_index**
> set_status_for_given_net_device_index(dev_idx, net_status)



Set the status for network interface at devIdx

### Example

* Api Key Authentication (app_id):

```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.device_idx import DeviceIdx
from openapi_client.model.net_status import NetStatus
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: app_id
configuration.api_key['app_id'] = 'YOUR_API_KEY'

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['app_id'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    dev_idx = DeviceIdx(0) # DeviceIdx | 
    net_status = NetStatus(
        name="name_example",
        mac="mac_example",
        connected=False,
        dhcp_state=DHCPState("Disabled"),
        interface_setup_state=InterfaceSetupState("Uninitialized"),
        ip_address_offered="ip_address_offered_example",
        link_errors=0,
        link_state="link_state_example",
        lldp_chassis_id="lldp_chassis_id_example",
        lldp_port_id="lldp_port_id_example",
        lldp_name="lldp_name_example",
    ) # NetStatus | Net Device status object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_status_for_given_net_device_index(dev_idx, net_status)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_status_for_given_net_device_index: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **dev_idx** | **DeviceIdx**|  |
 **net_status** | [**NetStatus**](NetStatus.md)| Net Device status object |

### Return type

void (empty response body)

### Authorization

[app_id](../README.md#app_id)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_system_config**
> set_system_config(system_config)



Modify the system configuration

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.system_config import SystemConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    system_config = SystemConfig(
        host_name="host_name_example",
        system_organization_name="system_organization_name_example",
        ssdp_enable=False,
        identify=False,
        update_request=False,
        reboot=False,
        refresh=False,
        shutdown=False,
        factory_preset=False,
        factory_reset=False,
        transform_mode=TransformMode("LUT"),
        preview_anc_enable=False,
        authentication_enable=False,
        fan_speed=170,
        startup_preset=0,
    ) # SystemConfig | System config object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_system_config(system_config)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_system_config: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **system_config** | [**SystemConfig**](SystemConfig.md)| System config object |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_system_password**
> SystemPasswordResponse set_system_password(system_password)



Update the system password

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.system_password import SystemPassword
from openapi_client.model.system_password_response import SystemPasswordResponse
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    system_password = SystemPassword(
        current_password="current_password_example",
        new_password="new_password_example",
    ) # SystemPassword | System password object

    # example passing only required values which don't have defaults set
    try:
        api_response = api_instance.set_system_password(system_password)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_system_password: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **system_password** | [**SystemPassword**](SystemPassword.md)| System password object |

### Return type

[**SystemPasswordResponse**](SystemPasswordResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_system_status**
> set_system_status(system_status)



Modify the system status

### Example

* Api Key Authentication (app_id):

```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.system_status import SystemStatus
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: app_id
configuration.api_key['app_id'] = 'YOUR_API_KEY'

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['app_id'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    system_status = SystemStatus(
        safeboot_version="1.0.0.1d",
        mainboot_version="1.0.0.2d",
        running_version="1.0.0.3d",
        safeboot=True,
        update_msg=["str1","str2","str3"],
        transform_mode_changing=False,
        transform_mode_timestamp=dateutil_parser('1970-01-01T00:00:00.00Z'),
    ) # SystemStatus | System status object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_system_status(system_status)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_system_status: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **system_status** | [**SystemStatus**](SystemStatus.md)| System status object |

### Return type

void (empty response body)

### Authorization

[app_id](../README.md#app_id)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_wi_fi_config**
> set_wi_fi_config(wi_fi_device_config)



Modify the wifi config object

### Example

* Api Key Authentication (app_id):

```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.wi_fi_device_config import WiFiDeviceConfig
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: app_id
configuration.api_key['app_id'] = 'YOUR_API_KEY'

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['app_id'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    wi_fi_device_config = WiFiDeviceConfig(
        wifi_control="Off",
        wifi_network="wifi_network_example",
        wifi_password="wifi_password_example",
        wifi_security="None",
        wifi_ip_config="DHCP",
        address="address_example",
        subnet="subnet_example",
        gateway="gateway_example",
        wifi_ip_change_commit=0,
    ) # WiFiDeviceConfig | WiFi Config object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_wi_fi_config(wi_fi_device_config)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_wi_fi_config: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wi_fi_device_config** | [**WiFiDeviceConfig**](WiFiDeviceConfig.md)| WiFi Config object |

### Return type

void (empty response body)

### Authorization

[app_id](../README.md#app_id)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **set_wi_fi_status**
> set_wi_fi_status(wi_fi_device_status)



Modify the wifi status object

### Example

* Api Key Authentication (app_id):

```python
import time
import openapi_client
from openapi_client.api import default_api
from openapi_client.model.wi_fi_device_status import WiFiDeviceStatus
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: app_id
configuration.api_key['app_id'] = 'YOUR_API_KEY'

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['app_id'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    wi_fi_device_status = WiFiDeviceStatus(
        name="name_example",
        mac="mac_example",
        address="address_example",
        subnet="subnet_example",
        gateway="gateway_example",
        networks=[
            "networks_example",
        ],
        connected=False,
        dhcp_state=DHCPState("Disabled"),
        interface_setup_state=InterfaceSetupState("Uninitialized"),
        ip_address_offered="ip_address_offered_example",
        link_state="link_state_example",
        wifi_dongle_state="wifi_dongle_state_example",
        authentication_state="authentication_state_example",
    ) # WiFiDeviceStatus | WiFi Status object

    # example passing only required values which don't have defaults set
    try:
        api_instance.set_wi_fi_status(wi_fi_device_status)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->set_wi_fi_status: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **wi_fi_device_status** | [**WiFiDeviceStatus**](WiFiDeviceStatus.md)| WiFi Status object |

### Return type

void (empty response body)

### Authorization

[app_id](../README.md#app_id)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **upload_file**
> upload_file()



Upload a file

### Example


```python
import time
import openapi_client
from openapi_client.api import default_api
from pprint import pprint
# Defining the host is optional and defaults to /v2
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "/v2"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    file = open('/path/to/file', 'rb') # file_type |  (optional)
    kind = "" # str | The kind of file being uploaded valid kinds are: **lut_1d**, **lut_3d**, **matrix**, **image**, **preset**, **license**, **update** (optional) if omitted the server will use the default value of ""
    entry = -1 # int | The entry number to upload the file to, **not** used with kinds: **license** and **update** (optional) if omitted the server will use the default value of -1

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        api_instance.upload_file(file=file, kind=kind, entry=entry)
    except openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->upload_file: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **file** | **file_type**|  | [optional]
 **kind** | **str**| The kind of file being uploaded valid kinds are: **lut_1d**, **lut_3d**, **matrix**, **image**, **preset**, **license**, **update** | [optional] if omitted the server will use the default value of ""
 **entry** | **int**| The entry number to upload the file to, **not** used with kinds: **license** and **update** | [optional] if omitted the server will use the default value of -1

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: text/plain


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successful operation |  -  |
**400** | Error uploading |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

