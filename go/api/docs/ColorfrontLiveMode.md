# ColorfrontLiveMode

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Engine** | Pointer to [**ColorfrontEngine**](ColorfrontEngine.md) |  | [optional] [default to COLORFRONTENGINE_DEFAULT]
**InDynRangeGamut** | Pointer to [**ColorfrontDynRangeGamutLiveModeIn**](ColorfrontDynRangeGamutLiveModeIn.md) |  | [optional] [default to COLORFRONTDYNRANGEGAMUTLIVEMODEIN_SDR_BT_709_100_NITS]
**OutDynRangeGamut** | Pointer to [**ColorfrontDynRangeGamutLiveModeOut**](ColorfrontDynRangeGamutLiveModeOut.md) |  | [optional] [default to COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_SDR_BT_709_100_NITS]
**SdrPreview** | Pointer to **bool** |  | [optional] [default to false]
**HdrAmount** | Pointer to **float32** |  | [optional] [default to 0]
**AmbLightComp** | Pointer to **float32** |  | [optional] [default to 0]
**HdrLogLook** | Pointer to **float32** |  | [optional] [default to 0.5]
**SdrSoftness** | Pointer to **float32** |  | [optional] [default to 0]
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
**Exposure** | Pointer to **float32** |  | [optional] [default to 0]
**ColorTemp** | Pointer to **float32** |  | [optional] [default to 0]
**Tint** | Pointer to **float32** |  | [optional] [default to 0]
**PqOutputNitLevel** | Pointer to **float32** |  | [optional] [default to 1000]
**P3ColorspaceClamp** | Pointer to **bool** |  | [optional] [default to false]
**Bt2408Mode** | Pointer to **float32** |  | [optional] [default to 0]

## Methods

### NewColorfrontLiveMode

`func NewColorfrontLiveMode() *ColorfrontLiveMode`

NewColorfrontLiveMode instantiates a new ColorfrontLiveMode object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewColorfrontLiveModeWithDefaults

`func NewColorfrontLiveModeWithDefaults() *ColorfrontLiveMode`

NewColorfrontLiveModeWithDefaults instantiates a new ColorfrontLiveMode object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetEngine

`func (o *ColorfrontLiveMode) GetEngine() ColorfrontEngine`

GetEngine returns the Engine field if non-nil, zero value otherwise.

### GetEngineOk

`func (o *ColorfrontLiveMode) GetEngineOk() (*ColorfrontEngine, bool)`

GetEngineOk returns a tuple with the Engine field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEngine

`func (o *ColorfrontLiveMode) SetEngine(v ColorfrontEngine)`

SetEngine sets Engine field to given value.

### HasEngine

`func (o *ColorfrontLiveMode) HasEngine() bool`

HasEngine returns a boolean if a field has been set.

### GetInDynRangeGamut

`func (o *ColorfrontLiveMode) GetInDynRangeGamut() ColorfrontDynRangeGamutLiveModeIn`

GetInDynRangeGamut returns the InDynRangeGamut field if non-nil, zero value otherwise.

### GetInDynRangeGamutOk

`func (o *ColorfrontLiveMode) GetInDynRangeGamutOk() (*ColorfrontDynRangeGamutLiveModeIn, bool)`

GetInDynRangeGamutOk returns a tuple with the InDynRangeGamut field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInDynRangeGamut

`func (o *ColorfrontLiveMode) SetInDynRangeGamut(v ColorfrontDynRangeGamutLiveModeIn)`

SetInDynRangeGamut sets InDynRangeGamut field to given value.

### HasInDynRangeGamut

`func (o *ColorfrontLiveMode) HasInDynRangeGamut() bool`

HasInDynRangeGamut returns a boolean if a field has been set.

### GetOutDynRangeGamut

`func (o *ColorfrontLiveMode) GetOutDynRangeGamut() ColorfrontDynRangeGamutLiveModeOut`

GetOutDynRangeGamut returns the OutDynRangeGamut field if non-nil, zero value otherwise.

### GetOutDynRangeGamutOk

`func (o *ColorfrontLiveMode) GetOutDynRangeGamutOk() (*ColorfrontDynRangeGamutLiveModeOut, bool)`

GetOutDynRangeGamutOk returns a tuple with the OutDynRangeGamut field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutDynRangeGamut

`func (o *ColorfrontLiveMode) SetOutDynRangeGamut(v ColorfrontDynRangeGamutLiveModeOut)`

SetOutDynRangeGamut sets OutDynRangeGamut field to given value.

### HasOutDynRangeGamut

`func (o *ColorfrontLiveMode) HasOutDynRangeGamut() bool`

HasOutDynRangeGamut returns a boolean if a field has been set.

### GetSdrPreview

`func (o *ColorfrontLiveMode) GetSdrPreview() bool`

GetSdrPreview returns the SdrPreview field if non-nil, zero value otherwise.

### GetSdrPreviewOk

`func (o *ColorfrontLiveMode) GetSdrPreviewOk() (*bool, bool)`

GetSdrPreviewOk returns a tuple with the SdrPreview field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSdrPreview

`func (o *ColorfrontLiveMode) SetSdrPreview(v bool)`

SetSdrPreview sets SdrPreview field to given value.

### HasSdrPreview

`func (o *ColorfrontLiveMode) HasSdrPreview() bool`

HasSdrPreview returns a boolean if a field has been set.

### GetHdrAmount

`func (o *ColorfrontLiveMode) GetHdrAmount() float32`

GetHdrAmount returns the HdrAmount field if non-nil, zero value otherwise.

### GetHdrAmountOk

`func (o *ColorfrontLiveMode) GetHdrAmountOk() (*float32, bool)`

GetHdrAmountOk returns a tuple with the HdrAmount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdrAmount

`func (o *ColorfrontLiveMode) SetHdrAmount(v float32)`

SetHdrAmount sets HdrAmount field to given value.

### HasHdrAmount

`func (o *ColorfrontLiveMode) HasHdrAmount() bool`

HasHdrAmount returns a boolean if a field has been set.

### GetAmbLightComp

`func (o *ColorfrontLiveMode) GetAmbLightComp() float32`

GetAmbLightComp returns the AmbLightComp field if non-nil, zero value otherwise.

### GetAmbLightCompOk

`func (o *ColorfrontLiveMode) GetAmbLightCompOk() (*float32, bool)`

GetAmbLightCompOk returns a tuple with the AmbLightComp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAmbLightComp

`func (o *ColorfrontLiveMode) SetAmbLightComp(v float32)`

SetAmbLightComp sets AmbLightComp field to given value.

### HasAmbLightComp

`func (o *ColorfrontLiveMode) HasAmbLightComp() bool`

HasAmbLightComp returns a boolean if a field has been set.

### GetHdrLogLook

`func (o *ColorfrontLiveMode) GetHdrLogLook() float32`

GetHdrLogLook returns the HdrLogLook field if non-nil, zero value otherwise.

### GetHdrLogLookOk

`func (o *ColorfrontLiveMode) GetHdrLogLookOk() (*float32, bool)`

GetHdrLogLookOk returns a tuple with the HdrLogLook field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdrLogLook

`func (o *ColorfrontLiveMode) SetHdrLogLook(v float32)`

SetHdrLogLook sets HdrLogLook field to given value.

### HasHdrLogLook

`func (o *ColorfrontLiveMode) HasHdrLogLook() bool`

HasHdrLogLook returns a boolean if a field has been set.

### GetSdrSoftness

`func (o *ColorfrontLiveMode) GetSdrSoftness() float32`

GetSdrSoftness returns the SdrSoftness field if non-nil, zero value otherwise.

### GetSdrSoftnessOk

`func (o *ColorfrontLiveMode) GetSdrSoftnessOk() (*float32, bool)`

GetSdrSoftnessOk returns a tuple with the SdrSoftness field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSdrSoftness

`func (o *ColorfrontLiveMode) SetSdrSoftness(v float32)`

SetSdrSoftness sets SdrSoftness field to given value.

### HasSdrSoftness

`func (o *ColorfrontLiveMode) HasSdrSoftness() bool`

HasSdrSoftness returns a boolean if a field has been set.

### GetLiftMaster

`func (o *ColorfrontLiveMode) GetLiftMaster() float32`

GetLiftMaster returns the LiftMaster field if non-nil, zero value otherwise.

### GetLiftMasterOk

`func (o *ColorfrontLiveMode) GetLiftMasterOk() (*float32, bool)`

GetLiftMasterOk returns a tuple with the LiftMaster field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLiftMaster

`func (o *ColorfrontLiveMode) SetLiftMaster(v float32)`

SetLiftMaster sets LiftMaster field to given value.

### HasLiftMaster

`func (o *ColorfrontLiveMode) HasLiftMaster() bool`

HasLiftMaster returns a boolean if a field has been set.

### GetLiftRed

`func (o *ColorfrontLiveMode) GetLiftRed() float32`

GetLiftRed returns the LiftRed field if non-nil, zero value otherwise.

### GetLiftRedOk

`func (o *ColorfrontLiveMode) GetLiftRedOk() (*float32, bool)`

GetLiftRedOk returns a tuple with the LiftRed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLiftRed

`func (o *ColorfrontLiveMode) SetLiftRed(v float32)`

SetLiftRed sets LiftRed field to given value.

### HasLiftRed

`func (o *ColorfrontLiveMode) HasLiftRed() bool`

HasLiftRed returns a boolean if a field has been set.

### GetLiftGreen

`func (o *ColorfrontLiveMode) GetLiftGreen() float32`

GetLiftGreen returns the LiftGreen field if non-nil, zero value otherwise.

### GetLiftGreenOk

`func (o *ColorfrontLiveMode) GetLiftGreenOk() (*float32, bool)`

GetLiftGreenOk returns a tuple with the LiftGreen field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLiftGreen

`func (o *ColorfrontLiveMode) SetLiftGreen(v float32)`

SetLiftGreen sets LiftGreen field to given value.

### HasLiftGreen

`func (o *ColorfrontLiveMode) HasLiftGreen() bool`

HasLiftGreen returns a boolean if a field has been set.

### GetLiftBlue

`func (o *ColorfrontLiveMode) GetLiftBlue() float32`

GetLiftBlue returns the LiftBlue field if non-nil, zero value otherwise.

### GetLiftBlueOk

`func (o *ColorfrontLiveMode) GetLiftBlueOk() (*float32, bool)`

GetLiftBlueOk returns a tuple with the LiftBlue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLiftBlue

`func (o *ColorfrontLiveMode) SetLiftBlue(v float32)`

SetLiftBlue sets LiftBlue field to given value.

### HasLiftBlue

`func (o *ColorfrontLiveMode) HasLiftBlue() bool`

HasLiftBlue returns a boolean if a field has been set.

### GetGammaMaster

`func (o *ColorfrontLiveMode) GetGammaMaster() float32`

GetGammaMaster returns the GammaMaster field if non-nil, zero value otherwise.

### GetGammaMasterOk

`func (o *ColorfrontLiveMode) GetGammaMasterOk() (*float32, bool)`

GetGammaMasterOk returns a tuple with the GammaMaster field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGammaMaster

`func (o *ColorfrontLiveMode) SetGammaMaster(v float32)`

SetGammaMaster sets GammaMaster field to given value.

### HasGammaMaster

`func (o *ColorfrontLiveMode) HasGammaMaster() bool`

HasGammaMaster returns a boolean if a field has been set.

### GetGammaRed

`func (o *ColorfrontLiveMode) GetGammaRed() float32`

GetGammaRed returns the GammaRed field if non-nil, zero value otherwise.

### GetGammaRedOk

`func (o *ColorfrontLiveMode) GetGammaRedOk() (*float32, bool)`

GetGammaRedOk returns a tuple with the GammaRed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGammaRed

`func (o *ColorfrontLiveMode) SetGammaRed(v float32)`

SetGammaRed sets GammaRed field to given value.

### HasGammaRed

`func (o *ColorfrontLiveMode) HasGammaRed() bool`

HasGammaRed returns a boolean if a field has been set.

### GetGammaGreen

`func (o *ColorfrontLiveMode) GetGammaGreen() float32`

GetGammaGreen returns the GammaGreen field if non-nil, zero value otherwise.

### GetGammaGreenOk

`func (o *ColorfrontLiveMode) GetGammaGreenOk() (*float32, bool)`

GetGammaGreenOk returns a tuple with the GammaGreen field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGammaGreen

`func (o *ColorfrontLiveMode) SetGammaGreen(v float32)`

SetGammaGreen sets GammaGreen field to given value.

### HasGammaGreen

`func (o *ColorfrontLiveMode) HasGammaGreen() bool`

HasGammaGreen returns a boolean if a field has been set.

### GetGammaBlue

`func (o *ColorfrontLiveMode) GetGammaBlue() float32`

GetGammaBlue returns the GammaBlue field if non-nil, zero value otherwise.

### GetGammaBlueOk

`func (o *ColorfrontLiveMode) GetGammaBlueOk() (*float32, bool)`

GetGammaBlueOk returns a tuple with the GammaBlue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGammaBlue

`func (o *ColorfrontLiveMode) SetGammaBlue(v float32)`

SetGammaBlue sets GammaBlue field to given value.

### HasGammaBlue

`func (o *ColorfrontLiveMode) HasGammaBlue() bool`

HasGammaBlue returns a boolean if a field has been set.

### GetGainMaster

`func (o *ColorfrontLiveMode) GetGainMaster() float32`

GetGainMaster returns the GainMaster field if non-nil, zero value otherwise.

### GetGainMasterOk

`func (o *ColorfrontLiveMode) GetGainMasterOk() (*float32, bool)`

GetGainMasterOk returns a tuple with the GainMaster field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGainMaster

`func (o *ColorfrontLiveMode) SetGainMaster(v float32)`

SetGainMaster sets GainMaster field to given value.

### HasGainMaster

`func (o *ColorfrontLiveMode) HasGainMaster() bool`

HasGainMaster returns a boolean if a field has been set.

### GetGainRed

`func (o *ColorfrontLiveMode) GetGainRed() float32`

GetGainRed returns the GainRed field if non-nil, zero value otherwise.

### GetGainRedOk

`func (o *ColorfrontLiveMode) GetGainRedOk() (*float32, bool)`

GetGainRedOk returns a tuple with the GainRed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGainRed

`func (o *ColorfrontLiveMode) SetGainRed(v float32)`

SetGainRed sets GainRed field to given value.

### HasGainRed

`func (o *ColorfrontLiveMode) HasGainRed() bool`

HasGainRed returns a boolean if a field has been set.

### GetGainGreen

`func (o *ColorfrontLiveMode) GetGainGreen() float32`

GetGainGreen returns the GainGreen field if non-nil, zero value otherwise.

### GetGainGreenOk

`func (o *ColorfrontLiveMode) GetGainGreenOk() (*float32, bool)`

GetGainGreenOk returns a tuple with the GainGreen field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGainGreen

`func (o *ColorfrontLiveMode) SetGainGreen(v float32)`

SetGainGreen sets GainGreen field to given value.

### HasGainGreen

`func (o *ColorfrontLiveMode) HasGainGreen() bool`

HasGainGreen returns a boolean if a field has been set.

### GetGainBlue

`func (o *ColorfrontLiveMode) GetGainBlue() float32`

GetGainBlue returns the GainBlue field if non-nil, zero value otherwise.

### GetGainBlueOk

`func (o *ColorfrontLiveMode) GetGainBlueOk() (*float32, bool)`

GetGainBlueOk returns a tuple with the GainBlue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGainBlue

`func (o *ColorfrontLiveMode) SetGainBlue(v float32)`

SetGainBlue sets GainBlue field to given value.

### HasGainBlue

`func (o *ColorfrontLiveMode) HasGainBlue() bool`

HasGainBlue returns a boolean if a field has been set.

### GetSaturation

`func (o *ColorfrontLiveMode) GetSaturation() float32`

GetSaturation returns the Saturation field if non-nil, zero value otherwise.

### GetSaturationOk

`func (o *ColorfrontLiveMode) GetSaturationOk() (*float32, bool)`

GetSaturationOk returns a tuple with the Saturation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSaturation

`func (o *ColorfrontLiveMode) SetSaturation(v float32)`

SetSaturation sets Saturation field to given value.

### HasSaturation

`func (o *ColorfrontLiveMode) HasSaturation() bool`

HasSaturation returns a boolean if a field has been set.

### GetExposure

`func (o *ColorfrontLiveMode) GetExposure() float32`

GetExposure returns the Exposure field if non-nil, zero value otherwise.

### GetExposureOk

`func (o *ColorfrontLiveMode) GetExposureOk() (*float32, bool)`

GetExposureOk returns a tuple with the Exposure field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExposure

`func (o *ColorfrontLiveMode) SetExposure(v float32)`

SetExposure sets Exposure field to given value.

### HasExposure

`func (o *ColorfrontLiveMode) HasExposure() bool`

HasExposure returns a boolean if a field has been set.

### GetColorTemp

`func (o *ColorfrontLiveMode) GetColorTemp() float32`

GetColorTemp returns the ColorTemp field if non-nil, zero value otherwise.

### GetColorTempOk

`func (o *ColorfrontLiveMode) GetColorTempOk() (*float32, bool)`

GetColorTempOk returns a tuple with the ColorTemp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetColorTemp

`func (o *ColorfrontLiveMode) SetColorTemp(v float32)`

SetColorTemp sets ColorTemp field to given value.

### HasColorTemp

`func (o *ColorfrontLiveMode) HasColorTemp() bool`

HasColorTemp returns a boolean if a field has been set.

### GetTint

`func (o *ColorfrontLiveMode) GetTint() float32`

GetTint returns the Tint field if non-nil, zero value otherwise.

### GetTintOk

`func (o *ColorfrontLiveMode) GetTintOk() (*float32, bool)`

GetTintOk returns a tuple with the Tint field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTint

`func (o *ColorfrontLiveMode) SetTint(v float32)`

SetTint sets Tint field to given value.

### HasTint

`func (o *ColorfrontLiveMode) HasTint() bool`

HasTint returns a boolean if a field has been set.

### GetPqOutputNitLevel

`func (o *ColorfrontLiveMode) GetPqOutputNitLevel() float32`

GetPqOutputNitLevel returns the PqOutputNitLevel field if non-nil, zero value otherwise.

### GetPqOutputNitLevelOk

`func (o *ColorfrontLiveMode) GetPqOutputNitLevelOk() (*float32, bool)`

GetPqOutputNitLevelOk returns a tuple with the PqOutputNitLevel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPqOutputNitLevel

`func (o *ColorfrontLiveMode) SetPqOutputNitLevel(v float32)`

SetPqOutputNitLevel sets PqOutputNitLevel field to given value.

### HasPqOutputNitLevel

`func (o *ColorfrontLiveMode) HasPqOutputNitLevel() bool`

HasPqOutputNitLevel returns a boolean if a field has been set.

### GetP3ColorspaceClamp

`func (o *ColorfrontLiveMode) GetP3ColorspaceClamp() bool`

GetP3ColorspaceClamp returns the P3ColorspaceClamp field if non-nil, zero value otherwise.

### GetP3ColorspaceClampOk

`func (o *ColorfrontLiveMode) GetP3ColorspaceClampOk() (*bool, bool)`

GetP3ColorspaceClampOk returns a tuple with the P3ColorspaceClamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetP3ColorspaceClamp

`func (o *ColorfrontLiveMode) SetP3ColorspaceClamp(v bool)`

SetP3ColorspaceClamp sets P3ColorspaceClamp field to given value.

### HasP3ColorspaceClamp

`func (o *ColorfrontLiveMode) HasP3ColorspaceClamp() bool`

HasP3ColorspaceClamp returns a boolean if a field has been set.

### GetBt2408Mode

`func (o *ColorfrontLiveMode) GetBt2408Mode() float32`

GetBt2408Mode returns the Bt2408Mode field if non-nil, zero value otherwise.

### GetBt2408ModeOk

`func (o *ColorfrontLiveMode) GetBt2408ModeOk() (*float32, bool)`

GetBt2408ModeOk returns a tuple with the Bt2408Mode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBt2408Mode

`func (o *ColorfrontLiveMode) SetBt2408Mode(v float32)`

SetBt2408Mode sets Bt2408Mode field to given value.

### HasBt2408Mode

`func (o *ColorfrontLiveMode) HasBt2408Mode() bool`

HasBt2408Mode returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


