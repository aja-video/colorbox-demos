# ColorfrontTvMode

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Engine** | Pointer to [**ColorfrontEngine**](ColorfrontEngine.md) |  | [optional] [default to COLORFRONTENGINE_DEFAULT]
**InDynRangeGamut** | Pointer to [**ColorfrontDynRangeGamutTvModeIn**](ColorfrontDynRangeGamutTvModeIn.md) |  | [optional] [default to COLORFRONTDYNRANGEGAMUTTVMODEIN_SDR_BT_709]
**OutDynRangeGamut** | Pointer to [**ColorfrontDynRangeGamutTvModeOut**](ColorfrontDynRangeGamutTvModeOut.md) |  | [optional] [default to COLORFRONTDYNRANGEGAMUTTVMODEOUT_SDR_BT_709]
**Brightness** | Pointer to **float32** |  | [optional] [default to 0]
**Highlight** | Pointer to **float32** |  | [optional] [default to 0]
**Colorfulness** | Pointer to **float32** |  | [optional] [default to 0]
**SuperHighlight** | Pointer to **float32** |  | [optional] [default to 0]
**Roundtrip** | Pointer to **bool** |  | [optional] [default to false]
**ClampToLegal** | Pointer to **bool** |  | [optional] [default to false]
**ColorCorrector** | Pointer to **bool** |  | [optional] [default to false]
**LiftMaster** | Pointer to **float32** |  | [optional] [default to 0]
**LiftRed** | Pointer to **float32** |  | [optional] [default to 0]
**LiftGreen** | Pointer to **float32** |  | [optional] [default to 0]
**LiftBlue** | Pointer to **float32** |  | [optional] [default to 0]
**GammaMaster** | Pointer to **float32** |  | [optional] [default to 1]
**GammaRed** | Pointer to **float32** |  | [optional] [default to 1]
**GammaGreen** | Pointer to **float32** |  | [optional] [default to 1]
**GammaBlue** | Pointer to **float32** |  | [optional] [default to 1]
**GainMaster** | Pointer to **float32** |  | [optional] [default to 1]
**GainRed** | Pointer to **float32** |  | [optional] [default to 1]
**GainGreen** | Pointer to **float32** |  | [optional] [default to 1]
**GainBlue** | Pointer to **float32** |  | [optional] [default to 1]
**Saturation** | Pointer to **float32** |  | [optional] [default to 1.0]
**CameraCorrection** | Pointer to **bool** |  | [optional] [default to false]
**Exposure** | Pointer to **float32** |  | [optional] [default to 0]
**ColorTemp** | Pointer to **float32** |  | [optional] [default to 0]
**Tint** | Pointer to **float32** |  | [optional] [default to 0]

## Methods

### NewColorfrontTvMode

`func NewColorfrontTvMode() *ColorfrontTvMode`

NewColorfrontTvMode instantiates a new ColorfrontTvMode object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewColorfrontTvModeWithDefaults

`func NewColorfrontTvModeWithDefaults() *ColorfrontTvMode`

NewColorfrontTvModeWithDefaults instantiates a new ColorfrontTvMode object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetEngine

`func (o *ColorfrontTvMode) GetEngine() ColorfrontEngine`

GetEngine returns the Engine field if non-nil, zero value otherwise.

### GetEngineOk

`func (o *ColorfrontTvMode) GetEngineOk() (*ColorfrontEngine, bool)`

GetEngineOk returns a tuple with the Engine field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEngine

`func (o *ColorfrontTvMode) SetEngine(v ColorfrontEngine)`

SetEngine sets Engine field to given value.

### HasEngine

`func (o *ColorfrontTvMode) HasEngine() bool`

HasEngine returns a boolean if a field has been set.

### GetInDynRangeGamut

`func (o *ColorfrontTvMode) GetInDynRangeGamut() ColorfrontDynRangeGamutTvModeIn`

GetInDynRangeGamut returns the InDynRangeGamut field if non-nil, zero value otherwise.

### GetInDynRangeGamutOk

`func (o *ColorfrontTvMode) GetInDynRangeGamutOk() (*ColorfrontDynRangeGamutTvModeIn, bool)`

GetInDynRangeGamutOk returns a tuple with the InDynRangeGamut field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInDynRangeGamut

`func (o *ColorfrontTvMode) SetInDynRangeGamut(v ColorfrontDynRangeGamutTvModeIn)`

SetInDynRangeGamut sets InDynRangeGamut field to given value.

### HasInDynRangeGamut

`func (o *ColorfrontTvMode) HasInDynRangeGamut() bool`

HasInDynRangeGamut returns a boolean if a field has been set.

### GetOutDynRangeGamut

`func (o *ColorfrontTvMode) GetOutDynRangeGamut() ColorfrontDynRangeGamutTvModeOut`

GetOutDynRangeGamut returns the OutDynRangeGamut field if non-nil, zero value otherwise.

### GetOutDynRangeGamutOk

`func (o *ColorfrontTvMode) GetOutDynRangeGamutOk() (*ColorfrontDynRangeGamutTvModeOut, bool)`

GetOutDynRangeGamutOk returns a tuple with the OutDynRangeGamut field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutDynRangeGamut

`func (o *ColorfrontTvMode) SetOutDynRangeGamut(v ColorfrontDynRangeGamutTvModeOut)`

SetOutDynRangeGamut sets OutDynRangeGamut field to given value.

### HasOutDynRangeGamut

`func (o *ColorfrontTvMode) HasOutDynRangeGamut() bool`

HasOutDynRangeGamut returns a boolean if a field has been set.

### GetBrightness

`func (o *ColorfrontTvMode) GetBrightness() float32`

GetBrightness returns the Brightness field if non-nil, zero value otherwise.

### GetBrightnessOk

`func (o *ColorfrontTvMode) GetBrightnessOk() (*float32, bool)`

GetBrightnessOk returns a tuple with the Brightness field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBrightness

`func (o *ColorfrontTvMode) SetBrightness(v float32)`

SetBrightness sets Brightness field to given value.

### HasBrightness

`func (o *ColorfrontTvMode) HasBrightness() bool`

HasBrightness returns a boolean if a field has been set.

### GetHighlight

`func (o *ColorfrontTvMode) GetHighlight() float32`

GetHighlight returns the Highlight field if non-nil, zero value otherwise.

### GetHighlightOk

`func (o *ColorfrontTvMode) GetHighlightOk() (*float32, bool)`

GetHighlightOk returns a tuple with the Highlight field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHighlight

`func (o *ColorfrontTvMode) SetHighlight(v float32)`

SetHighlight sets Highlight field to given value.

### HasHighlight

`func (o *ColorfrontTvMode) HasHighlight() bool`

HasHighlight returns a boolean if a field has been set.

### GetColorfulness

`func (o *ColorfrontTvMode) GetColorfulness() float32`

GetColorfulness returns the Colorfulness field if non-nil, zero value otherwise.

### GetColorfulnessOk

`func (o *ColorfrontTvMode) GetColorfulnessOk() (*float32, bool)`

GetColorfulnessOk returns a tuple with the Colorfulness field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetColorfulness

`func (o *ColorfrontTvMode) SetColorfulness(v float32)`

SetColorfulness sets Colorfulness field to given value.

### HasColorfulness

`func (o *ColorfrontTvMode) HasColorfulness() bool`

HasColorfulness returns a boolean if a field has been set.

### GetSuperHighlight

`func (o *ColorfrontTvMode) GetSuperHighlight() float32`

GetSuperHighlight returns the SuperHighlight field if non-nil, zero value otherwise.

### GetSuperHighlightOk

`func (o *ColorfrontTvMode) GetSuperHighlightOk() (*float32, bool)`

GetSuperHighlightOk returns a tuple with the SuperHighlight field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSuperHighlight

`func (o *ColorfrontTvMode) SetSuperHighlight(v float32)`

SetSuperHighlight sets SuperHighlight field to given value.

### HasSuperHighlight

`func (o *ColorfrontTvMode) HasSuperHighlight() bool`

HasSuperHighlight returns a boolean if a field has been set.

### GetRoundtrip

`func (o *ColorfrontTvMode) GetRoundtrip() bool`

GetRoundtrip returns the Roundtrip field if non-nil, zero value otherwise.

### GetRoundtripOk

`func (o *ColorfrontTvMode) GetRoundtripOk() (*bool, bool)`

GetRoundtripOk returns a tuple with the Roundtrip field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRoundtrip

`func (o *ColorfrontTvMode) SetRoundtrip(v bool)`

SetRoundtrip sets Roundtrip field to given value.

### HasRoundtrip

`func (o *ColorfrontTvMode) HasRoundtrip() bool`

HasRoundtrip returns a boolean if a field has been set.

### GetClampToLegal

`func (o *ColorfrontTvMode) GetClampToLegal() bool`

GetClampToLegal returns the ClampToLegal field if non-nil, zero value otherwise.

### GetClampToLegalOk

`func (o *ColorfrontTvMode) GetClampToLegalOk() (*bool, bool)`

GetClampToLegalOk returns a tuple with the ClampToLegal field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClampToLegal

`func (o *ColorfrontTvMode) SetClampToLegal(v bool)`

SetClampToLegal sets ClampToLegal field to given value.

### HasClampToLegal

`func (o *ColorfrontTvMode) HasClampToLegal() bool`

HasClampToLegal returns a boolean if a field has been set.

### GetColorCorrector

`func (o *ColorfrontTvMode) GetColorCorrector() bool`

GetColorCorrector returns the ColorCorrector field if non-nil, zero value otherwise.

### GetColorCorrectorOk

`func (o *ColorfrontTvMode) GetColorCorrectorOk() (*bool, bool)`

GetColorCorrectorOk returns a tuple with the ColorCorrector field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetColorCorrector

`func (o *ColorfrontTvMode) SetColorCorrector(v bool)`

SetColorCorrector sets ColorCorrector field to given value.

### HasColorCorrector

`func (o *ColorfrontTvMode) HasColorCorrector() bool`

HasColorCorrector returns a boolean if a field has been set.

### GetLiftMaster

`func (o *ColorfrontTvMode) GetLiftMaster() float32`

GetLiftMaster returns the LiftMaster field if non-nil, zero value otherwise.

### GetLiftMasterOk

`func (o *ColorfrontTvMode) GetLiftMasterOk() (*float32, bool)`

GetLiftMasterOk returns a tuple with the LiftMaster field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLiftMaster

`func (o *ColorfrontTvMode) SetLiftMaster(v float32)`

SetLiftMaster sets LiftMaster field to given value.

### HasLiftMaster

`func (o *ColorfrontTvMode) HasLiftMaster() bool`

HasLiftMaster returns a boolean if a field has been set.

### GetLiftRed

`func (o *ColorfrontTvMode) GetLiftRed() float32`

GetLiftRed returns the LiftRed field if non-nil, zero value otherwise.

### GetLiftRedOk

`func (o *ColorfrontTvMode) GetLiftRedOk() (*float32, bool)`

GetLiftRedOk returns a tuple with the LiftRed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLiftRed

`func (o *ColorfrontTvMode) SetLiftRed(v float32)`

SetLiftRed sets LiftRed field to given value.

### HasLiftRed

`func (o *ColorfrontTvMode) HasLiftRed() bool`

HasLiftRed returns a boolean if a field has been set.

### GetLiftGreen

`func (o *ColorfrontTvMode) GetLiftGreen() float32`

GetLiftGreen returns the LiftGreen field if non-nil, zero value otherwise.

### GetLiftGreenOk

`func (o *ColorfrontTvMode) GetLiftGreenOk() (*float32, bool)`

GetLiftGreenOk returns a tuple with the LiftGreen field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLiftGreen

`func (o *ColorfrontTvMode) SetLiftGreen(v float32)`

SetLiftGreen sets LiftGreen field to given value.

### HasLiftGreen

`func (o *ColorfrontTvMode) HasLiftGreen() bool`

HasLiftGreen returns a boolean if a field has been set.

### GetLiftBlue

`func (o *ColorfrontTvMode) GetLiftBlue() float32`

GetLiftBlue returns the LiftBlue field if non-nil, zero value otherwise.

### GetLiftBlueOk

`func (o *ColorfrontTvMode) GetLiftBlueOk() (*float32, bool)`

GetLiftBlueOk returns a tuple with the LiftBlue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLiftBlue

`func (o *ColorfrontTvMode) SetLiftBlue(v float32)`

SetLiftBlue sets LiftBlue field to given value.

### HasLiftBlue

`func (o *ColorfrontTvMode) HasLiftBlue() bool`

HasLiftBlue returns a boolean if a field has been set.

### GetGammaMaster

`func (o *ColorfrontTvMode) GetGammaMaster() float32`

GetGammaMaster returns the GammaMaster field if non-nil, zero value otherwise.

### GetGammaMasterOk

`func (o *ColorfrontTvMode) GetGammaMasterOk() (*float32, bool)`

GetGammaMasterOk returns a tuple with the GammaMaster field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGammaMaster

`func (o *ColorfrontTvMode) SetGammaMaster(v float32)`

SetGammaMaster sets GammaMaster field to given value.

### HasGammaMaster

`func (o *ColorfrontTvMode) HasGammaMaster() bool`

HasGammaMaster returns a boolean if a field has been set.

### GetGammaRed

`func (o *ColorfrontTvMode) GetGammaRed() float32`

GetGammaRed returns the GammaRed field if non-nil, zero value otherwise.

### GetGammaRedOk

`func (o *ColorfrontTvMode) GetGammaRedOk() (*float32, bool)`

GetGammaRedOk returns a tuple with the GammaRed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGammaRed

`func (o *ColorfrontTvMode) SetGammaRed(v float32)`

SetGammaRed sets GammaRed field to given value.

### HasGammaRed

`func (o *ColorfrontTvMode) HasGammaRed() bool`

HasGammaRed returns a boolean if a field has been set.

### GetGammaGreen

`func (o *ColorfrontTvMode) GetGammaGreen() float32`

GetGammaGreen returns the GammaGreen field if non-nil, zero value otherwise.

### GetGammaGreenOk

`func (o *ColorfrontTvMode) GetGammaGreenOk() (*float32, bool)`

GetGammaGreenOk returns a tuple with the GammaGreen field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGammaGreen

`func (o *ColorfrontTvMode) SetGammaGreen(v float32)`

SetGammaGreen sets GammaGreen field to given value.

### HasGammaGreen

`func (o *ColorfrontTvMode) HasGammaGreen() bool`

HasGammaGreen returns a boolean if a field has been set.

### GetGammaBlue

`func (o *ColorfrontTvMode) GetGammaBlue() float32`

GetGammaBlue returns the GammaBlue field if non-nil, zero value otherwise.

### GetGammaBlueOk

`func (o *ColorfrontTvMode) GetGammaBlueOk() (*float32, bool)`

GetGammaBlueOk returns a tuple with the GammaBlue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGammaBlue

`func (o *ColorfrontTvMode) SetGammaBlue(v float32)`

SetGammaBlue sets GammaBlue field to given value.

### HasGammaBlue

`func (o *ColorfrontTvMode) HasGammaBlue() bool`

HasGammaBlue returns a boolean if a field has been set.

### GetGainMaster

`func (o *ColorfrontTvMode) GetGainMaster() float32`

GetGainMaster returns the GainMaster field if non-nil, zero value otherwise.

### GetGainMasterOk

`func (o *ColorfrontTvMode) GetGainMasterOk() (*float32, bool)`

GetGainMasterOk returns a tuple with the GainMaster field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGainMaster

`func (o *ColorfrontTvMode) SetGainMaster(v float32)`

SetGainMaster sets GainMaster field to given value.

### HasGainMaster

`func (o *ColorfrontTvMode) HasGainMaster() bool`

HasGainMaster returns a boolean if a field has been set.

### GetGainRed

`func (o *ColorfrontTvMode) GetGainRed() float32`

GetGainRed returns the GainRed field if non-nil, zero value otherwise.

### GetGainRedOk

`func (o *ColorfrontTvMode) GetGainRedOk() (*float32, bool)`

GetGainRedOk returns a tuple with the GainRed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGainRed

`func (o *ColorfrontTvMode) SetGainRed(v float32)`

SetGainRed sets GainRed field to given value.

### HasGainRed

`func (o *ColorfrontTvMode) HasGainRed() bool`

HasGainRed returns a boolean if a field has been set.

### GetGainGreen

`func (o *ColorfrontTvMode) GetGainGreen() float32`

GetGainGreen returns the GainGreen field if non-nil, zero value otherwise.

### GetGainGreenOk

`func (o *ColorfrontTvMode) GetGainGreenOk() (*float32, bool)`

GetGainGreenOk returns a tuple with the GainGreen field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGainGreen

`func (o *ColorfrontTvMode) SetGainGreen(v float32)`

SetGainGreen sets GainGreen field to given value.

### HasGainGreen

`func (o *ColorfrontTvMode) HasGainGreen() bool`

HasGainGreen returns a boolean if a field has been set.

### GetGainBlue

`func (o *ColorfrontTvMode) GetGainBlue() float32`

GetGainBlue returns the GainBlue field if non-nil, zero value otherwise.

### GetGainBlueOk

`func (o *ColorfrontTvMode) GetGainBlueOk() (*float32, bool)`

GetGainBlueOk returns a tuple with the GainBlue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGainBlue

`func (o *ColorfrontTvMode) SetGainBlue(v float32)`

SetGainBlue sets GainBlue field to given value.

### HasGainBlue

`func (o *ColorfrontTvMode) HasGainBlue() bool`

HasGainBlue returns a boolean if a field has been set.

### GetSaturation

`func (o *ColorfrontTvMode) GetSaturation() float32`

GetSaturation returns the Saturation field if non-nil, zero value otherwise.

### GetSaturationOk

`func (o *ColorfrontTvMode) GetSaturationOk() (*float32, bool)`

GetSaturationOk returns a tuple with the Saturation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSaturation

`func (o *ColorfrontTvMode) SetSaturation(v float32)`

SetSaturation sets Saturation field to given value.

### HasSaturation

`func (o *ColorfrontTvMode) HasSaturation() bool`

HasSaturation returns a boolean if a field has been set.

### GetCameraCorrection

`func (o *ColorfrontTvMode) GetCameraCorrection() bool`

GetCameraCorrection returns the CameraCorrection field if non-nil, zero value otherwise.

### GetCameraCorrectionOk

`func (o *ColorfrontTvMode) GetCameraCorrectionOk() (*bool, bool)`

GetCameraCorrectionOk returns a tuple with the CameraCorrection field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCameraCorrection

`func (o *ColorfrontTvMode) SetCameraCorrection(v bool)`

SetCameraCorrection sets CameraCorrection field to given value.

### HasCameraCorrection

`func (o *ColorfrontTvMode) HasCameraCorrection() bool`

HasCameraCorrection returns a boolean if a field has been set.

### GetExposure

`func (o *ColorfrontTvMode) GetExposure() float32`

GetExposure returns the Exposure field if non-nil, zero value otherwise.

### GetExposureOk

`func (o *ColorfrontTvMode) GetExposureOk() (*float32, bool)`

GetExposureOk returns a tuple with the Exposure field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExposure

`func (o *ColorfrontTvMode) SetExposure(v float32)`

SetExposure sets Exposure field to given value.

### HasExposure

`func (o *ColorfrontTvMode) HasExposure() bool`

HasExposure returns a boolean if a field has been set.

### GetColorTemp

`func (o *ColorfrontTvMode) GetColorTemp() float32`

GetColorTemp returns the ColorTemp field if non-nil, zero value otherwise.

### GetColorTempOk

`func (o *ColorfrontTvMode) GetColorTempOk() (*float32, bool)`

GetColorTempOk returns a tuple with the ColorTemp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetColorTemp

`func (o *ColorfrontTvMode) SetColorTemp(v float32)`

SetColorTemp sets ColorTemp field to given value.

### HasColorTemp

`func (o *ColorfrontTvMode) HasColorTemp() bool`

HasColorTemp returns a boolean if a field has been set.

### GetTint

`func (o *ColorfrontTvMode) GetTint() float32`

GetTint returns the Tint field if non-nil, zero value otherwise.

### GetTintOk

`func (o *ColorfrontTvMode) GetTintOk() (*float32, bool)`

GetTintOk returns a tuple with the Tint field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTint

`func (o *ColorfrontTvMode) SetTint(v float32)`

SetTint sets Tint field to given value.

### HasTint

`func (o *ColorfrontTvMode) HasTint() bool`

HasTint returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


