# ColorfrontUpmapMode

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Bypass** | Pointer to **bool** |  | [optional] [default to false]
**Contrast** | Pointer to [**ColorfrontLowMidHigh**](ColorfrontLowMidHigh.md) |  | [optional] [default to COLORFRONTLOWMIDHIGH_MID]
**Highlights** | Pointer to [**ColorfrontLowMidHigh**](ColorfrontLowMidHigh.md) |  | [optional] [default to COLORFRONTLOWMIDHIGH_MID]

## Methods

### NewColorfrontUpmapMode

`func NewColorfrontUpmapMode() *ColorfrontUpmapMode`

NewColorfrontUpmapMode instantiates a new ColorfrontUpmapMode object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewColorfrontUpmapModeWithDefaults

`func NewColorfrontUpmapModeWithDefaults() *ColorfrontUpmapMode`

NewColorfrontUpmapModeWithDefaults instantiates a new ColorfrontUpmapMode object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetBypass

`func (o *ColorfrontUpmapMode) GetBypass() bool`

GetBypass returns the Bypass field if non-nil, zero value otherwise.

### GetBypassOk

`func (o *ColorfrontUpmapMode) GetBypassOk() (*bool, bool)`

GetBypassOk returns a tuple with the Bypass field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBypass

`func (o *ColorfrontUpmapMode) SetBypass(v bool)`

SetBypass sets Bypass field to given value.

### HasBypass

`func (o *ColorfrontUpmapMode) HasBypass() bool`

HasBypass returns a boolean if a field has been set.

### GetContrast

`func (o *ColorfrontUpmapMode) GetContrast() ColorfrontLowMidHigh`

GetContrast returns the Contrast field if non-nil, zero value otherwise.

### GetContrastOk

`func (o *ColorfrontUpmapMode) GetContrastOk() (*ColorfrontLowMidHigh, bool)`

GetContrastOk returns a tuple with the Contrast field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContrast

`func (o *ColorfrontUpmapMode) SetContrast(v ColorfrontLowMidHigh)`

SetContrast sets Contrast field to given value.

### HasContrast

`func (o *ColorfrontUpmapMode) HasContrast() bool`

HasContrast returns a boolean if a field has been set.

### GetHighlights

`func (o *ColorfrontUpmapMode) GetHighlights() ColorfrontLowMidHigh`

GetHighlights returns the Highlights field if non-nil, zero value otherwise.

### GetHighlightsOk

`func (o *ColorfrontUpmapMode) GetHighlightsOk() (*ColorfrontLowMidHigh, bool)`

GetHighlightsOk returns a tuple with the Highlights field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHighlights

`func (o *ColorfrontUpmapMode) SetHighlights(v ColorfrontLowMidHigh)`

SetHighlights sets Highlights field to given value.

### HasHighlights

`func (o *ColorfrontUpmapMode) HasHighlights() bool`

HasHighlights returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


