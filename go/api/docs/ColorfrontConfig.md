# ColorfrontConfig

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Enabled** | Pointer to **bool** | true if stage is enabled else disabled (unity passthru) | [optional] 
**InDynRangeGamut** | Pointer to [**ColorfrontDynRangeGamut**](ColorfrontDynRangeGamut.md) |  | [optional] [default to COLORFRONTDYNRANGEGAMUT_SDR_BT_709]
**OutDynRangeGamut** | Pointer to [**ColorfrontDynRangeGamut**](ColorfrontDynRangeGamut.md) |  | [optional] [default to COLORFRONTDYNRANGEGAMUT_SDR_BT_709]

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

### GetInDynRangeGamut

`func (o *ColorfrontConfig) GetInDynRangeGamut() ColorfrontDynRangeGamut`

GetInDynRangeGamut returns the InDynRangeGamut field if non-nil, zero value otherwise.

### GetInDynRangeGamutOk

`func (o *ColorfrontConfig) GetInDynRangeGamutOk() (*ColorfrontDynRangeGamut, bool)`

GetInDynRangeGamutOk returns a tuple with the InDynRangeGamut field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInDynRangeGamut

`func (o *ColorfrontConfig) SetInDynRangeGamut(v ColorfrontDynRangeGamut)`

SetInDynRangeGamut sets InDynRangeGamut field to given value.

### HasInDynRangeGamut

`func (o *ColorfrontConfig) HasInDynRangeGamut() bool`

HasInDynRangeGamut returns a boolean if a field has been set.

### GetOutDynRangeGamut

`func (o *ColorfrontConfig) GetOutDynRangeGamut() ColorfrontDynRangeGamut`

GetOutDynRangeGamut returns the OutDynRangeGamut field if non-nil, zero value otherwise.

### GetOutDynRangeGamutOk

`func (o *ColorfrontConfig) GetOutDynRangeGamutOk() (*ColorfrontDynRangeGamut, bool)`

GetOutDynRangeGamutOk returns a tuple with the OutDynRangeGamut field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutDynRangeGamut

`func (o *ColorfrontConfig) SetOutDynRangeGamut(v ColorfrontDynRangeGamut)`

SetOutDynRangeGamut sets OutDynRangeGamut field to given value.

### HasOutDynRangeGamut

`func (o *ColorfrontConfig) HasOutDynRangeGamut() bool`

HasOutDynRangeGamut returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


