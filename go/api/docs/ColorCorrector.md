# ColorCorrector

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**BlackRed** | Pointer to **float32** |  | [optional] [default to 0.0]
**BlackGreen** | Pointer to **float32** |  | [optional] [default to 0.0]
**BlackBlue** | Pointer to **float32** |  | [optional] [default to 0.0]
**GainRed** | Pointer to **float32** |  | [optional] [default to 1.0]
**GainGreen** | Pointer to **float32** |  | [optional] [default to 1.0]
**GainBlue** | Pointer to **float32** |  | [optional] [default to 1.0]
**GammaRed** | Pointer to **float32** |  | [optional] [default to 0.0]
**GammaGreen** | Pointer to **float32** |  | [optional] [default to 0.0]
**GammaBlue** | Pointer to **float32** |  | [optional] [default to 0.0]
**UnitsBlack** | Pointer to **string** |  | [optional] [default to "IRE"]
**UnitsGain** | Pointer to **string** |  | [optional] [default to ""]
**UnitsGamma** | Pointer to **string** |  | [optional] [default to ""]

## Methods

### NewColorCorrector

`func NewColorCorrector() *ColorCorrector`

NewColorCorrector instantiates a new ColorCorrector object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewColorCorrectorWithDefaults

`func NewColorCorrectorWithDefaults() *ColorCorrector`

NewColorCorrectorWithDefaults instantiates a new ColorCorrector object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetBlackRed

`func (o *ColorCorrector) GetBlackRed() float32`

GetBlackRed returns the BlackRed field if non-nil, zero value otherwise.

### GetBlackRedOk

`func (o *ColorCorrector) GetBlackRedOk() (*float32, bool)`

GetBlackRedOk returns a tuple with the BlackRed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBlackRed

`func (o *ColorCorrector) SetBlackRed(v float32)`

SetBlackRed sets BlackRed field to given value.

### HasBlackRed

`func (o *ColorCorrector) HasBlackRed() bool`

HasBlackRed returns a boolean if a field has been set.

### GetBlackGreen

`func (o *ColorCorrector) GetBlackGreen() float32`

GetBlackGreen returns the BlackGreen field if non-nil, zero value otherwise.

### GetBlackGreenOk

`func (o *ColorCorrector) GetBlackGreenOk() (*float32, bool)`

GetBlackGreenOk returns a tuple with the BlackGreen field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBlackGreen

`func (o *ColorCorrector) SetBlackGreen(v float32)`

SetBlackGreen sets BlackGreen field to given value.

### HasBlackGreen

`func (o *ColorCorrector) HasBlackGreen() bool`

HasBlackGreen returns a boolean if a field has been set.

### GetBlackBlue

`func (o *ColorCorrector) GetBlackBlue() float32`

GetBlackBlue returns the BlackBlue field if non-nil, zero value otherwise.

### GetBlackBlueOk

`func (o *ColorCorrector) GetBlackBlueOk() (*float32, bool)`

GetBlackBlueOk returns a tuple with the BlackBlue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBlackBlue

`func (o *ColorCorrector) SetBlackBlue(v float32)`

SetBlackBlue sets BlackBlue field to given value.

### HasBlackBlue

`func (o *ColorCorrector) HasBlackBlue() bool`

HasBlackBlue returns a boolean if a field has been set.

### GetGainRed

`func (o *ColorCorrector) GetGainRed() float32`

GetGainRed returns the GainRed field if non-nil, zero value otherwise.

### GetGainRedOk

`func (o *ColorCorrector) GetGainRedOk() (*float32, bool)`

GetGainRedOk returns a tuple with the GainRed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGainRed

`func (o *ColorCorrector) SetGainRed(v float32)`

SetGainRed sets GainRed field to given value.

### HasGainRed

`func (o *ColorCorrector) HasGainRed() bool`

HasGainRed returns a boolean if a field has been set.

### GetGainGreen

`func (o *ColorCorrector) GetGainGreen() float32`

GetGainGreen returns the GainGreen field if non-nil, zero value otherwise.

### GetGainGreenOk

`func (o *ColorCorrector) GetGainGreenOk() (*float32, bool)`

GetGainGreenOk returns a tuple with the GainGreen field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGainGreen

`func (o *ColorCorrector) SetGainGreen(v float32)`

SetGainGreen sets GainGreen field to given value.

### HasGainGreen

`func (o *ColorCorrector) HasGainGreen() bool`

HasGainGreen returns a boolean if a field has been set.

### GetGainBlue

`func (o *ColorCorrector) GetGainBlue() float32`

GetGainBlue returns the GainBlue field if non-nil, zero value otherwise.

### GetGainBlueOk

`func (o *ColorCorrector) GetGainBlueOk() (*float32, bool)`

GetGainBlueOk returns a tuple with the GainBlue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGainBlue

`func (o *ColorCorrector) SetGainBlue(v float32)`

SetGainBlue sets GainBlue field to given value.

### HasGainBlue

`func (o *ColorCorrector) HasGainBlue() bool`

HasGainBlue returns a boolean if a field has been set.

### GetGammaRed

`func (o *ColorCorrector) GetGammaRed() float32`

GetGammaRed returns the GammaRed field if non-nil, zero value otherwise.

### GetGammaRedOk

`func (o *ColorCorrector) GetGammaRedOk() (*float32, bool)`

GetGammaRedOk returns a tuple with the GammaRed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGammaRed

`func (o *ColorCorrector) SetGammaRed(v float32)`

SetGammaRed sets GammaRed field to given value.

### HasGammaRed

`func (o *ColorCorrector) HasGammaRed() bool`

HasGammaRed returns a boolean if a field has been set.

### GetGammaGreen

`func (o *ColorCorrector) GetGammaGreen() float32`

GetGammaGreen returns the GammaGreen field if non-nil, zero value otherwise.

### GetGammaGreenOk

`func (o *ColorCorrector) GetGammaGreenOk() (*float32, bool)`

GetGammaGreenOk returns a tuple with the GammaGreen field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGammaGreen

`func (o *ColorCorrector) SetGammaGreen(v float32)`

SetGammaGreen sets GammaGreen field to given value.

### HasGammaGreen

`func (o *ColorCorrector) HasGammaGreen() bool`

HasGammaGreen returns a boolean if a field has been set.

### GetGammaBlue

`func (o *ColorCorrector) GetGammaBlue() float32`

GetGammaBlue returns the GammaBlue field if non-nil, zero value otherwise.

### GetGammaBlueOk

`func (o *ColorCorrector) GetGammaBlueOk() (*float32, bool)`

GetGammaBlueOk returns a tuple with the GammaBlue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGammaBlue

`func (o *ColorCorrector) SetGammaBlue(v float32)`

SetGammaBlue sets GammaBlue field to given value.

### HasGammaBlue

`func (o *ColorCorrector) HasGammaBlue() bool`

HasGammaBlue returns a boolean if a field has been set.

### GetUnitsBlack

`func (o *ColorCorrector) GetUnitsBlack() string`

GetUnitsBlack returns the UnitsBlack field if non-nil, zero value otherwise.

### GetUnitsBlackOk

`func (o *ColorCorrector) GetUnitsBlackOk() (*string, bool)`

GetUnitsBlackOk returns a tuple with the UnitsBlack field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnitsBlack

`func (o *ColorCorrector) SetUnitsBlack(v string)`

SetUnitsBlack sets UnitsBlack field to given value.

### HasUnitsBlack

`func (o *ColorCorrector) HasUnitsBlack() bool`

HasUnitsBlack returns a boolean if a field has been set.

### GetUnitsGain

`func (o *ColorCorrector) GetUnitsGain() string`

GetUnitsGain returns the UnitsGain field if non-nil, zero value otherwise.

### GetUnitsGainOk

`func (o *ColorCorrector) GetUnitsGainOk() (*string, bool)`

GetUnitsGainOk returns a tuple with the UnitsGain field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnitsGain

`func (o *ColorCorrector) SetUnitsGain(v string)`

SetUnitsGain sets UnitsGain field to given value.

### HasUnitsGain

`func (o *ColorCorrector) HasUnitsGain() bool`

HasUnitsGain returns a boolean if a field has been set.

### GetUnitsGamma

`func (o *ColorCorrector) GetUnitsGamma() string`

GetUnitsGamma returns the UnitsGamma field if non-nil, zero value otherwise.

### GetUnitsGammaOk

`func (o *ColorCorrector) GetUnitsGammaOk() (*string, bool)`

GetUnitsGammaOk returns a tuple with the UnitsGamma field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnitsGamma

`func (o *ColorCorrector) SetUnitsGamma(v string)`

SetUnitsGamma sets UnitsGamma field to given value.

### HasUnitsGamma

`func (o *ColorCorrector) HasUnitsGamma() bool`

HasUnitsGamma returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


