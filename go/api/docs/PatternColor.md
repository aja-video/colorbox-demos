# PatternColor

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Depth** | Pointer to **int32** | The color depth in bits, valid values are: 8, 10, 12 &amp; 16 | [optional] [default to 10]
**Blue** | Pointer to **int32** | The blue component of the color, max value depends on bit depth | [optional] [default to 0]
**Green** | Pointer to **int32** | The green component of the color, max value depends on bit depth | [optional] [default to 0]
**Red** | Pointer to **int32** | The red component of the color, max value depends on bit depth | [optional] [default to 0]

## Methods

### NewPatternColor

`func NewPatternColor() *PatternColor`

NewPatternColor instantiates a new PatternColor object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPatternColorWithDefaults

`func NewPatternColorWithDefaults() *PatternColor`

NewPatternColorWithDefaults instantiates a new PatternColor object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDepth

`func (o *PatternColor) GetDepth() int32`

GetDepth returns the Depth field if non-nil, zero value otherwise.

### GetDepthOk

`func (o *PatternColor) GetDepthOk() (*int32, bool)`

GetDepthOk returns a tuple with the Depth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDepth

`func (o *PatternColor) SetDepth(v int32)`

SetDepth sets Depth field to given value.

### HasDepth

`func (o *PatternColor) HasDepth() bool`

HasDepth returns a boolean if a field has been set.

### GetBlue

`func (o *PatternColor) GetBlue() int32`

GetBlue returns the Blue field if non-nil, zero value otherwise.

### GetBlueOk

`func (o *PatternColor) GetBlueOk() (*int32, bool)`

GetBlueOk returns a tuple with the Blue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBlue

`func (o *PatternColor) SetBlue(v int32)`

SetBlue sets Blue field to given value.

### HasBlue

`func (o *PatternColor) HasBlue() bool`

HasBlue returns a boolean if a field has been set.

### GetGreen

`func (o *PatternColor) GetGreen() int32`

GetGreen returns the Green field if non-nil, zero value otherwise.

### GetGreenOk

`func (o *PatternColor) GetGreenOk() (*int32, bool)`

GetGreenOk returns a tuple with the Green field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGreen

`func (o *PatternColor) SetGreen(v int32)`

SetGreen sets Green field to given value.

### HasGreen

`func (o *PatternColor) HasGreen() bool`

HasGreen returns a boolean if a field has been set.

### GetRed

`func (o *PatternColor) GetRed() int32`

GetRed returns the Red field if non-nil, zero value otherwise.

### GetRedOk

`func (o *PatternColor) GetRedOk() (*int32, bool)`

GetRedOk returns a tuple with the Red field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRed

`func (o *PatternColor) SetRed(v int32)`

SetRed sets Red field to given value.

### HasRed

`func (o *PatternColor) HasRed() bool`

HasRed returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


