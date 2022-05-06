# SystemStatus

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SafebootVersion** | Pointer to **string** |  | [optional] 
**MainbootVersion** | Pointer to **string** |  | [optional] 
**RunningVersion** | Pointer to **string** |  | [optional] 
**Safeboot** | Pointer to **bool** |  | [optional] 
**UpdateMsg** | Pointer to **[]string** |  | [optional] 

## Methods

### NewSystemStatus

`func NewSystemStatus() *SystemStatus`

NewSystemStatus instantiates a new SystemStatus object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSystemStatusWithDefaults

`func NewSystemStatusWithDefaults() *SystemStatus`

NewSystemStatusWithDefaults instantiates a new SystemStatus object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSafebootVersion

`func (o *SystemStatus) GetSafebootVersion() string`

GetSafebootVersion returns the SafebootVersion field if non-nil, zero value otherwise.

### GetSafebootVersionOk

`func (o *SystemStatus) GetSafebootVersionOk() (*string, bool)`

GetSafebootVersionOk returns a tuple with the SafebootVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSafebootVersion

`func (o *SystemStatus) SetSafebootVersion(v string)`

SetSafebootVersion sets SafebootVersion field to given value.

### HasSafebootVersion

`func (o *SystemStatus) HasSafebootVersion() bool`

HasSafebootVersion returns a boolean if a field has been set.

### GetMainbootVersion

`func (o *SystemStatus) GetMainbootVersion() string`

GetMainbootVersion returns the MainbootVersion field if non-nil, zero value otherwise.

### GetMainbootVersionOk

`func (o *SystemStatus) GetMainbootVersionOk() (*string, bool)`

GetMainbootVersionOk returns a tuple with the MainbootVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMainbootVersion

`func (o *SystemStatus) SetMainbootVersion(v string)`

SetMainbootVersion sets MainbootVersion field to given value.

### HasMainbootVersion

`func (o *SystemStatus) HasMainbootVersion() bool`

HasMainbootVersion returns a boolean if a field has been set.

### GetRunningVersion

`func (o *SystemStatus) GetRunningVersion() string`

GetRunningVersion returns the RunningVersion field if non-nil, zero value otherwise.

### GetRunningVersionOk

`func (o *SystemStatus) GetRunningVersionOk() (*string, bool)`

GetRunningVersionOk returns a tuple with the RunningVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRunningVersion

`func (o *SystemStatus) SetRunningVersion(v string)`

SetRunningVersion sets RunningVersion field to given value.

### HasRunningVersion

`func (o *SystemStatus) HasRunningVersion() bool`

HasRunningVersion returns a boolean if a field has been set.

### GetSafeboot

`func (o *SystemStatus) GetSafeboot() bool`

GetSafeboot returns the Safeboot field if non-nil, zero value otherwise.

### GetSafebootOk

`func (o *SystemStatus) GetSafebootOk() (*bool, bool)`

GetSafebootOk returns a tuple with the Safeboot field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSafeboot

`func (o *SystemStatus) SetSafeboot(v bool)`

SetSafeboot sets Safeboot field to given value.

### HasSafeboot

`func (o *SystemStatus) HasSafeboot() bool`

HasSafeboot returns a boolean if a field has been set.

### GetUpdateMsg

`func (o *SystemStatus) GetUpdateMsg() []string`

GetUpdateMsg returns the UpdateMsg field if non-nil, zero value otherwise.

### GetUpdateMsgOk

`func (o *SystemStatus) GetUpdateMsgOk() (*[]string, bool)`

GetUpdateMsgOk returns a tuple with the UpdateMsg field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUpdateMsg

`func (o *SystemStatus) SetUpdateMsg(v []string)`

SetUpdateMsg sets UpdateMsg field to given value.

### HasUpdateMsg

`func (o *SystemStatus) HasUpdateMsg() bool`

HasUpdateMsg returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


