# ColorfrontConfig

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Enabled** | Pointer to **bool** | true if stage is enabled else disabled (unity passthru) | [optional] 
**InColorspace** | Pointer to [**ColorfrontColorspace**](ColorfrontColorspace.md) |  | [optional] [default to COLORFRONTCOLORSPACE_BT709]
**OutColorspace** | Pointer to [**ColorfrontColorspace**](ColorfrontColorspace.md) |  | [optional] [default to COLORFRONTCOLORSPACE_BT709]

## Methods

### NewColorfrontConfig

`func NewColorfrontConfig() *ColorfrontConfig`

NewColorfrontConfig instantiates a new ColorfrontConfig object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewColorfrontConfigWithDefaults

`func NewColorfrontConfigWithDefaults() *ColorfrontConfig`

NewColorfrontConfigWithDefaults instantiates a new ColorfrontConfig object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetEnabled

`func (o *ColorfrontConfig) GetEnabled() bool`

GetEnabled returns the Enabled field if non-nil, zero value otherwise.

### GetEnabledOk

`func (o *ColorfrontConfig) GetEnabledOk() (*bool, bool)`

GetEnabledOk returns a tuple with the Enabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnabled

`func (o *ColorfrontConfig) SetEnabled(v bool)`

SetEnabled sets Enabled field to given value.

### HasEnabled

`func (o *ColorfrontConfig) HasEnabled() bool`

HasEnabled returns a boolean if a field has been set.

### GetInColorspace

`func (o *ColorfrontConfig) GetInColorspace() ColorfrontColorspace`

GetInColorspace returns the InColorspace field if non-nil, zero value otherwise.

### GetInColorspaceOk

`func (o *ColorfrontConfig) GetInColorspaceOk() (*ColorfrontColorspace, bool)`

GetInColorspaceOk returns a tuple with the InColorspace field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInColorspace

`func (o *ColorfrontConfig) SetInColorspace(v ColorfrontColorspace)`

SetInColorspace sets InColorspace field to given value.

### HasInColorspace

`func (o *ColorfrontConfig) HasInColorspace() bool`

HasInColorspace returns a boolean if a field has been set.

### GetOutColorspace

`func (o *ColorfrontConfig) GetOutColorspace() ColorfrontColorspace`

GetOutColorspace returns the OutColorspace field if non-nil, zero value otherwise.

### GetOutColorspaceOk

`func (o *ColorfrontConfig) GetOutColorspaceOk() (*ColorfrontColorspace, bool)`

GetOutColorspaceOk returns a tuple with the OutColorspace field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutColorspace

`func (o *ColorfrontConfig) SetOutColorspace(v ColorfrontColorspace)`

SetOutColorspace sets OutColorspace field to given value.

### HasOutColorspace

`func (o *ColorfrontConfig) HasOutColorspace() bool`

HasOutColorspace returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


