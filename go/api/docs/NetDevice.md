# NetDevice

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Config** | Pointer to [**NetConfig**](NetConfig.md) |  | [optional] 
**Status** | Pointer to [**NetStatus**](NetStatus.md) |  | [optional] 
**ActiveParams** | Pointer to [**NetParams**](NetParams.md) |  | [optional] 
**StagedParams** | Pointer to [**NetParams**](NetParams.md) |  | [optional] 

## Methods

### NewNetDevice

`func NewNetDevice() *NetDevice`

NewNetDevice instantiates a new NetDevice object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewNetDeviceWithDefaults

`func NewNetDeviceWithDefaults() *NetDevice`

NewNetDeviceWithDefaults instantiates a new NetDevice object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetConfig

`func (o *NetDevice) GetConfig() NetConfig`

GetConfig returns the Config field if non-nil, zero value otherwise.

### GetConfigOk

`func (o *NetDevice) GetConfigOk() (*NetConfig, bool)`

GetConfigOk returns a tuple with the Config field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetConfig

`func (o *NetDevice) SetConfig(v NetConfig)`

SetConfig sets Config field to given value.

### HasConfig

`func (o *NetDevice) HasConfig() bool`

HasConfig returns a boolean if a field has been set.

### GetStatus

`func (o *NetDevice) GetStatus() NetStatus`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *NetDevice) GetStatusOk() (*NetStatus, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *NetDevice) SetStatus(v NetStatus)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *NetDevice) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetActiveParams

`func (o *NetDevice) GetActiveParams() NetParams`

GetActiveParams returns the ActiveParams field if non-nil, zero value otherwise.

### GetActiveParamsOk

`func (o *NetDevice) GetActiveParamsOk() (*NetParams, bool)`

GetActiveParamsOk returns a tuple with the ActiveParams field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetActiveParams

`func (o *NetDevice) SetActiveParams(v NetParams)`

SetActiveParams sets ActiveParams field to given value.

### HasActiveParams

`func (o *NetDevice) HasActiveParams() bool`

HasActiveParams returns a boolean if a field has been set.

### GetStagedParams

`func (o *NetDevice) GetStagedParams() NetParams`

GetStagedParams returns the StagedParams field if non-nil, zero value otherwise.

### GetStagedParamsOk

`func (o *NetDevice) GetStagedParamsOk() (*NetParams, bool)`

GetStagedParamsOk returns a tuple with the StagedParams field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStagedParams

`func (o *NetDevice) SetStagedParams(v NetParams)`

SetStagedParams sets StagedParams field to given value.

### HasStagedParams

`func (o *NetDevice) HasStagedParams() bool`

HasStagedParams returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


