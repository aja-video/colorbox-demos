# OrionConfig

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Enabled** | Pointer to **bool** | true if stage is enabled else disabled (unity passthru) | [optional] 
**Conversion** | Pointer to [**OrionConversion**](OrionConversion.md) |  | [optional] [default to ORIONCONVERSION_HLG_TO_SDR]
**Mode** | Pointer to [**OrionMode**](OrionMode.md) |  | [optional] [default to ORIONMODE_DISPLAY_LIGHT]
**Method** | Pointer to [**OrionMethod**](OrionMethod.md) |  | [optional] [default to "MAX(RGB)"]
**SourceRange** | Pointer to [**OrionSourceRange**](OrionSourceRange.md) |  | [optional] [default to ORIONSOURCERANGE_NARROW]
**HdrRef** | Pointer to **float32** |  | [optional] [default to 75.0]
**SdrRef** | Pointer to **float32** |  | [optional] [default to 100.0]
**HdrPeak** | Pointer to **int32** |  | [optional] [default to 1000]
**SdrEotf** | Pointer to [**OrionSdrEotf**](OrionSdrEotf.md) |  | [optional] [default to ORIONSDREOTF__2_4_GAMMA]
**PreKnee** | Pointer to **float32** |  | [optional] [default to 100.0]
**PreAmount** | Pointer to **float32** |  | [optional] [default to 0.0]
**PostKnee** | Pointer to **float32** |  | [optional] [default to 100.0]
**PostAmount** | Pointer to **float32** |  | [optional] [default to 0.0]
**Clamping** | Pointer to [**OrionClamping**](OrionClamping.md) |  | [optional] [default to ORIONCLAMPING__7_TO_109_IRE]
**Implementation** | Pointer to [**OrionImplementation**](OrionImplementation.md) |  | [optional] [default to ORIONIMPLEMENTATION_ENGINE]

## Methods

### NewOrionConfig

`func NewOrionConfig() *OrionConfig`

NewOrionConfig instantiates a new OrionConfig object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOrionConfigWithDefaults

`func NewOrionConfigWithDefaults() *OrionConfig`

NewOrionConfigWithDefaults instantiates a new OrionConfig object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetEnabled

`func (o *OrionConfig) GetEnabled() bool`

GetEnabled returns the Enabled field if non-nil, zero value otherwise.

### GetEnabledOk

`func (o *OrionConfig) GetEnabledOk() (*bool, bool)`

GetEnabledOk returns a tuple with the Enabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnabled

`func (o *OrionConfig) SetEnabled(v bool)`

SetEnabled sets Enabled field to given value.

### HasEnabled

`func (o *OrionConfig) HasEnabled() bool`

HasEnabled returns a boolean if a field has been set.

### GetConversion

`func (o *OrionConfig) GetConversion() OrionConversion`

GetConversion returns the Conversion field if non-nil, zero value otherwise.

### GetConversionOk

`func (o *OrionConfig) GetConversionOk() (*OrionConversion, bool)`

GetConversionOk returns a tuple with the Conversion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetConversion

`func (o *OrionConfig) SetConversion(v OrionConversion)`

SetConversion sets Conversion field to given value.

### HasConversion

`func (o *OrionConfig) HasConversion() bool`

HasConversion returns a boolean if a field has been set.

### GetMode

`func (o *OrionConfig) GetMode() OrionMode`

GetMode returns the Mode field if non-nil, zero value otherwise.

### GetModeOk

`func (o *OrionConfig) GetModeOk() (*OrionMode, bool)`

GetModeOk returns a tuple with the Mode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMode

`func (o *OrionConfig) SetMode(v OrionMode)`

SetMode sets Mode field to given value.

### HasMode

`func (o *OrionConfig) HasMode() bool`

HasMode returns a boolean if a field has been set.

### GetMethod

`func (o *OrionConfig) GetMethod() OrionMethod`

GetMethod returns the Method field if non-nil, zero value otherwise.

### GetMethodOk

`func (o *OrionConfig) GetMethodOk() (*OrionMethod, bool)`

GetMethodOk returns a tuple with the Method field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMethod

`func (o *OrionConfig) SetMethod(v OrionMethod)`

SetMethod sets Method field to given value.

### HasMethod

`func (o *OrionConfig) HasMethod() bool`

HasMethod returns a boolean if a field has been set.

### GetSourceRange

`func (o *OrionConfig) GetSourceRange() OrionSourceRange`

GetSourceRange returns the SourceRange field if non-nil, zero value otherwise.

### GetSourceRangeOk

`func (o *OrionConfig) GetSourceRangeOk() (*OrionSourceRange, bool)`

GetSourceRangeOk returns a tuple with the SourceRange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSourceRange

`func (o *OrionConfig) SetSourceRange(v OrionSourceRange)`

SetSourceRange sets SourceRange field to given value.

### HasSourceRange

`func (o *OrionConfig) HasSourceRange() bool`

HasSourceRange returns a boolean if a field has been set.

### GetHdrRef

`func (o *OrionConfig) GetHdrRef() float32`

GetHdrRef returns the HdrRef field if non-nil, zero value otherwise.

### GetHdrRefOk

`func (o *OrionConfig) GetHdrRefOk() (*float32, bool)`

GetHdrRefOk returns a tuple with the HdrRef field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdrRef

`func (o *OrionConfig) SetHdrRef(v float32)`

SetHdrRef sets HdrRef field to given value.

### HasHdrRef

`func (o *OrionConfig) HasHdrRef() bool`

HasHdrRef returns a boolean if a field has been set.

### GetSdrRef

`func (o *OrionConfig) GetSdrRef() float32`

GetSdrRef returns the SdrRef field if non-nil, zero value otherwise.

### GetSdrRefOk

`func (o *OrionConfig) GetSdrRefOk() (*float32, bool)`

GetSdrRefOk returns a tuple with the SdrRef field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSdrRef

`func (o *OrionConfig) SetSdrRef(v float32)`

SetSdrRef sets SdrRef field to given value.

### HasSdrRef

`func (o *OrionConfig) HasSdrRef() bool`

HasSdrRef returns a boolean if a field has been set.

### GetHdrPeak

`func (o *OrionConfig) GetHdrPeak() int32`

GetHdrPeak returns the HdrPeak field if non-nil, zero value otherwise.

### GetHdrPeakOk

`func (o *OrionConfig) GetHdrPeakOk() (*int32, bool)`

GetHdrPeakOk returns a tuple with the HdrPeak field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdrPeak

`func (o *OrionConfig) SetHdrPeak(v int32)`

SetHdrPeak sets HdrPeak field to given value.

### HasHdrPeak

`func (o *OrionConfig) HasHdrPeak() bool`

HasHdrPeak returns a boolean if a field has been set.

### GetSdrEotf

`func (o *OrionConfig) GetSdrEotf() OrionSdrEotf`

GetSdrEotf returns the SdrEotf field if non-nil, zero value otherwise.

### GetSdrEotfOk

`func (o *OrionConfig) GetSdrEotfOk() (*OrionSdrEotf, bool)`

GetSdrEotfOk returns a tuple with the SdrEotf field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSdrEotf

`func (o *OrionConfig) SetSdrEotf(v OrionSdrEotf)`

SetSdrEotf sets SdrEotf field to given value.

### HasSdrEotf

`func (o *OrionConfig) HasSdrEotf() bool`

HasSdrEotf returns a boolean if a field has been set.

### GetPreKnee

`func (o *OrionConfig) GetPreKnee() float32`

GetPreKnee returns the PreKnee field if non-nil, zero value otherwise.

### GetPreKneeOk

`func (o *OrionConfig) GetPreKneeOk() (*float32, bool)`

GetPreKneeOk returns a tuple with the PreKnee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPreKnee

`func (o *OrionConfig) SetPreKnee(v float32)`

SetPreKnee sets PreKnee field to given value.

### HasPreKnee

`func (o *OrionConfig) HasPreKnee() bool`

HasPreKnee returns a boolean if a field has been set.

### GetPreAmount

`func (o *OrionConfig) GetPreAmount() float32`

GetPreAmount returns the PreAmount field if non-nil, zero value otherwise.

### GetPreAmountOk

`func (o *OrionConfig) GetPreAmountOk() (*float32, bool)`

GetPreAmountOk returns a tuple with the PreAmount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPreAmount

`func (o *OrionConfig) SetPreAmount(v float32)`

SetPreAmount sets PreAmount field to given value.

### HasPreAmount

`func (o *OrionConfig) HasPreAmount() bool`

HasPreAmount returns a boolean if a field has been set.

### GetPostKnee

`func (o *OrionConfig) GetPostKnee() float32`

GetPostKnee returns the PostKnee field if non-nil, zero value otherwise.

### GetPostKneeOk

`func (o *OrionConfig) GetPostKneeOk() (*float32, bool)`

GetPostKneeOk returns a tuple with the PostKnee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPostKnee

`func (o *OrionConfig) SetPostKnee(v float32)`

SetPostKnee sets PostKnee field to given value.

### HasPostKnee

`func (o *OrionConfig) HasPostKnee() bool`

HasPostKnee returns a boolean if a field has been set.

### GetPostAmount

`func (o *OrionConfig) GetPostAmount() float32`

GetPostAmount returns the PostAmount field if non-nil, zero value otherwise.

### GetPostAmountOk

`func (o *OrionConfig) GetPostAmountOk() (*float32, bool)`

GetPostAmountOk returns a tuple with the PostAmount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPostAmount

`func (o *OrionConfig) SetPostAmount(v float32)`

SetPostAmount sets PostAmount field to given value.

### HasPostAmount

`func (o *OrionConfig) HasPostAmount() bool`

HasPostAmount returns a boolean if a field has been set.

### GetClamping

`func (o *OrionConfig) GetClamping() OrionClamping`

GetClamping returns the Clamping field if non-nil, zero value otherwise.

### GetClampingOk

`func (o *OrionConfig) GetClampingOk() (*OrionClamping, bool)`

GetClampingOk returns a tuple with the Clamping field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClamping

`func (o *OrionConfig) SetClamping(v OrionClamping)`

SetClamping sets Clamping field to given value.

### HasClamping

`func (o *OrionConfig) HasClamping() bool`

HasClamping returns a boolean if a field has been set.

### GetImplementation

`func (o *OrionConfig) GetImplementation() OrionImplementation`

GetImplementation returns the Implementation field if non-nil, zero value otherwise.

### GetImplementationOk

`func (o *OrionConfig) GetImplementationOk() (*OrionImplementation, bool)`

GetImplementationOk returns a tuple with the Implementation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImplementation

`func (o *OrionConfig) SetImplementation(v OrionImplementation)`

SetImplementation sets Implementation field to given value.

### HasImplementation

`func (o *OrionConfig) HasImplementation() bool`

HasImplementation returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


