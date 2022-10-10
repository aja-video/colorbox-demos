# SystemConfig

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**HostName** | Pointer to **string** |  | [optional] 
**SystemOrganizationName** | Pointer to **string** |  | [optional] 
**SsdpEnable** | Pointer to **bool** |  | [optional] 
**Identify** | Pointer to **bool** |  | [optional] 
**UpdateRequest** | Pointer to **bool** |  | [optional] 
**Reboot** | Pointer to **bool** |  | [optional] 
**FactoryPreset** | Pointer to **bool** |  | [optional] 
**FactoryReset** | Pointer to **bool** |  | [optional] 
**TransformMode** | Pointer to [**TransformMode**](TransformMode.md) |  | [optional] [default to TRANSFORMMODE_LUT]
**PreviewAncEnable** | Pointer to **bool** |  | [optional] [default to false]
**AuthenticationEnable** | Pointer to **bool** |  | [optional] [default to false]
**FanSpeed** | Pointer to **float32** |  | [optional] [default to 170]
**StartupPreset** | Pointer to **int32** |  | [optional] [default to 0]

## Methods

### NewSystemConfig

`func NewSystemConfig() *SystemConfig`

NewSystemConfig instantiates a new SystemConfig object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSystemConfigWithDefaults

`func NewSystemConfigWithDefaults() *SystemConfig`

NewSystemConfigWithDefaults instantiates a new SystemConfig object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetHostName

`func (o *SystemConfig) GetHostName() string`

GetHostName returns the HostName field if non-nil, zero value otherwise.

### GetHostNameOk

`func (o *SystemConfig) GetHostNameOk() (*string, bool)`

GetHostNameOk returns a tuple with the HostName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHostName

`func (o *SystemConfig) SetHostName(v string)`

SetHostName sets HostName field to given value.

### HasHostName

`func (o *SystemConfig) HasHostName() bool`

HasHostName returns a boolean if a field has been set.

### GetSystemOrganizationName

`func (o *SystemConfig) GetSystemOrganizationName() string`

GetSystemOrganizationName returns the SystemOrganizationName field if non-nil, zero value otherwise.

### GetSystemOrganizationNameOk

`func (o *SystemConfig) GetSystemOrganizationNameOk() (*string, bool)`

GetSystemOrganizationNameOk returns a tuple with the SystemOrganizationName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemOrganizationName

`func (o *SystemConfig) SetSystemOrganizationName(v string)`

SetSystemOrganizationName sets SystemOrganizationName field to given value.

### HasSystemOrganizationName

`func (o *SystemConfig) HasSystemOrganizationName() bool`

HasSystemOrganizationName returns a boolean if a field has been set.

### GetSsdpEnable

`func (o *SystemConfig) GetSsdpEnable() bool`

GetSsdpEnable returns the SsdpEnable field if non-nil, zero value otherwise.

### GetSsdpEnableOk

`func (o *SystemConfig) GetSsdpEnableOk() (*bool, bool)`

GetSsdpEnableOk returns a tuple with the SsdpEnable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSsdpEnable

`func (o *SystemConfig) SetSsdpEnable(v bool)`

SetSsdpEnable sets SsdpEnable field to given value.

### HasSsdpEnable

`func (o *SystemConfig) HasSsdpEnable() bool`

HasSsdpEnable returns a boolean if a field has been set.

### GetIdentify

`func (o *SystemConfig) GetIdentify() bool`

GetIdentify returns the Identify field if non-nil, zero value otherwise.

### GetIdentifyOk

`func (o *SystemConfig) GetIdentifyOk() (*bool, bool)`

GetIdentifyOk returns a tuple with the Identify field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIdentify

`func (o *SystemConfig) SetIdentify(v bool)`

SetIdentify sets Identify field to given value.

### HasIdentify

`func (o *SystemConfig) HasIdentify() bool`

HasIdentify returns a boolean if a field has been set.

### GetUpdateRequest

`func (o *SystemConfig) GetUpdateRequest() bool`

GetUpdateRequest returns the UpdateRequest field if non-nil, zero value otherwise.

### GetUpdateRequestOk

`func (o *SystemConfig) GetUpdateRequestOk() (*bool, bool)`

GetUpdateRequestOk returns a tuple with the UpdateRequest field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUpdateRequest

`func (o *SystemConfig) SetUpdateRequest(v bool)`

SetUpdateRequest sets UpdateRequest field to given value.

### HasUpdateRequest

`func (o *SystemConfig) HasUpdateRequest() bool`

HasUpdateRequest returns a boolean if a field has been set.

### GetReboot

`func (o *SystemConfig) GetReboot() bool`

GetReboot returns the Reboot field if non-nil, zero value otherwise.

### GetRebootOk

`func (o *SystemConfig) GetRebootOk() (*bool, bool)`

GetRebootOk returns a tuple with the Reboot field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetReboot

`func (o *SystemConfig) SetReboot(v bool)`

SetReboot sets Reboot field to given value.

### HasReboot

`func (o *SystemConfig) HasReboot() bool`

HasReboot returns a boolean if a field has been set.

### GetFactoryPreset

`func (o *SystemConfig) GetFactoryPreset() bool`

GetFactoryPreset returns the FactoryPreset field if non-nil, zero value otherwise.

### GetFactoryPresetOk

`func (o *SystemConfig) GetFactoryPresetOk() (*bool, bool)`

GetFactoryPresetOk returns a tuple with the FactoryPreset field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFactoryPreset

`func (o *SystemConfig) SetFactoryPreset(v bool)`

SetFactoryPreset sets FactoryPreset field to given value.

### HasFactoryPreset

`func (o *SystemConfig) HasFactoryPreset() bool`

HasFactoryPreset returns a boolean if a field has been set.

### GetFactoryReset

`func (o *SystemConfig) GetFactoryReset() bool`

GetFactoryReset returns the FactoryReset field if non-nil, zero value otherwise.

### GetFactoryResetOk

`func (o *SystemConfig) GetFactoryResetOk() (*bool, bool)`

GetFactoryResetOk returns a tuple with the FactoryReset field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFactoryReset

`func (o *SystemConfig) SetFactoryReset(v bool)`

SetFactoryReset sets FactoryReset field to given value.

### HasFactoryReset

`func (o *SystemConfig) HasFactoryReset() bool`

HasFactoryReset returns a boolean if a field has been set.

### GetTransformMode

`func (o *SystemConfig) GetTransformMode() TransformMode`

GetTransformMode returns the TransformMode field if non-nil, zero value otherwise.

### GetTransformModeOk

`func (o *SystemConfig) GetTransformModeOk() (*TransformMode, bool)`

GetTransformModeOk returns a tuple with the TransformMode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransformMode

`func (o *SystemConfig) SetTransformMode(v TransformMode)`

SetTransformMode sets TransformMode field to given value.

### HasTransformMode

`func (o *SystemConfig) HasTransformMode() bool`

HasTransformMode returns a boolean if a field has been set.

### GetPreviewAncEnable

`func (o *SystemConfig) GetPreviewAncEnable() bool`

GetPreviewAncEnable returns the PreviewAncEnable field if non-nil, zero value otherwise.

### GetPreviewAncEnableOk

`func (o *SystemConfig) GetPreviewAncEnableOk() (*bool, bool)`

GetPreviewAncEnableOk returns a tuple with the PreviewAncEnable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPreviewAncEnable

`func (o *SystemConfig) SetPreviewAncEnable(v bool)`

SetPreviewAncEnable sets PreviewAncEnable field to given value.

### HasPreviewAncEnable

`func (o *SystemConfig) HasPreviewAncEnable() bool`

HasPreviewAncEnable returns a boolean if a field has been set.

### GetAuthenticationEnable

`func (o *SystemConfig) GetAuthenticationEnable() bool`

GetAuthenticationEnable returns the AuthenticationEnable field if non-nil, zero value otherwise.

### GetAuthenticationEnableOk

`func (o *SystemConfig) GetAuthenticationEnableOk() (*bool, bool)`

GetAuthenticationEnableOk returns a tuple with the AuthenticationEnable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuthenticationEnable

`func (o *SystemConfig) SetAuthenticationEnable(v bool)`

SetAuthenticationEnable sets AuthenticationEnable field to given value.

### HasAuthenticationEnable

`func (o *SystemConfig) HasAuthenticationEnable() bool`

HasAuthenticationEnable returns a boolean if a field has been set.

### GetFanSpeed

`func (o *SystemConfig) GetFanSpeed() float32`

GetFanSpeed returns the FanSpeed field if non-nil, zero value otherwise.

### GetFanSpeedOk

`func (o *SystemConfig) GetFanSpeedOk() (*float32, bool)`

GetFanSpeedOk returns a tuple with the FanSpeed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFanSpeed

`func (o *SystemConfig) SetFanSpeed(v float32)`

SetFanSpeed sets FanSpeed field to given value.

### HasFanSpeed

`func (o *SystemConfig) HasFanSpeed() bool`

HasFanSpeed returns a boolean if a field has been set.

### GetStartupPreset

`func (o *SystemConfig) GetStartupPreset() int32`

GetStartupPreset returns the StartupPreset field if non-nil, zero value otherwise.

### GetStartupPresetOk

`func (o *SystemConfig) GetStartupPresetOk() (*int32, bool)`

GetStartupPresetOk returns a tuple with the StartupPreset field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStartupPreset

`func (o *SystemConfig) SetStartupPreset(v int32)`

SetStartupPreset sets StartupPreset field to given value.

### HasStartupPreset

`func (o *SystemConfig) HasStartupPreset() bool`

HasStartupPreset returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


