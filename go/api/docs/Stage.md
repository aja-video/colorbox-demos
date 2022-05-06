# Stage

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Enabled** | Pointer to **bool** | true if stage is enabled else disabled (unity passthru) | [optional] 
**Dynamic** | Pointer to **bool** | true if stage can be dynamically adjusted | [optional] 
**LibraryEntry** | Pointer to **int32** | library entry number, zero is unity bypass | [optional] 
**ColorCorrector** | Pointer to [**ColorCorrector**](ColorCorrector.md) |  | [optional] 
**ProcAmp** | Pointer to [**ProcAmp**](ProcAmp.md) |  | [optional] 

## Methods

### NewStage

`func NewStage() *Stage`

NewStage instantiates a new Stage object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStageWithDefaults

`func NewStageWithDefaults() *Stage`

NewStageWithDefaults instantiates a new Stage object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetEnabled

`func (o *Stage) GetEnabled() bool`

GetEnabled returns the Enabled field if non-nil, zero value otherwise.

### GetEnabledOk

`func (o *Stage) GetEnabledOk() (*bool, bool)`

GetEnabledOk returns a tuple with the Enabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnabled

`func (o *Stage) SetEnabled(v bool)`

SetEnabled sets Enabled field to given value.

### HasEnabled

`func (o *Stage) HasEnabled() bool`

HasEnabled returns a boolean if a field has been set.

### GetDynamic

`func (o *Stage) GetDynamic() bool`

GetDynamic returns the Dynamic field if non-nil, zero value otherwise.

### GetDynamicOk

`func (o *Stage) GetDynamicOk() (*bool, bool)`

GetDynamicOk returns a tuple with the Dynamic field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDynamic

`func (o *Stage) SetDynamic(v bool)`

SetDynamic sets Dynamic field to given value.

### HasDynamic

`func (o *Stage) HasDynamic() bool`

HasDynamic returns a boolean if a field has been set.

### GetLibraryEntry

`func (o *Stage) GetLibraryEntry() int32`

GetLibraryEntry returns the LibraryEntry field if non-nil, zero value otherwise.

### GetLibraryEntryOk

`func (o *Stage) GetLibraryEntryOk() (*int32, bool)`

GetLibraryEntryOk returns a tuple with the LibraryEntry field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLibraryEntry

`func (o *Stage) SetLibraryEntry(v int32)`

SetLibraryEntry sets LibraryEntry field to given value.

### HasLibraryEntry

`func (o *Stage) HasLibraryEntry() bool`

HasLibraryEntry returns a boolean if a field has been set.

### GetColorCorrector

`func (o *Stage) GetColorCorrector() ColorCorrector`

GetColorCorrector returns the ColorCorrector field if non-nil, zero value otherwise.

### GetColorCorrectorOk

`func (o *Stage) GetColorCorrectorOk() (*ColorCorrector, bool)`

GetColorCorrectorOk returns a tuple with the ColorCorrector field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetColorCorrector

`func (o *Stage) SetColorCorrector(v ColorCorrector)`

SetColorCorrector sets ColorCorrector field to given value.

### HasColorCorrector

`func (o *Stage) HasColorCorrector() bool`

HasColorCorrector returns a boolean if a field has been set.

### GetProcAmp

`func (o *Stage) GetProcAmp() ProcAmp`

GetProcAmp returns the ProcAmp field if non-nil, zero value otherwise.

### GetProcAmpOk

`func (o *Stage) GetProcAmpOk() (*ProcAmp, bool)`

GetProcAmpOk returns a tuple with the ProcAmp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetProcAmp

`func (o *Stage) SetProcAmp(v ProcAmp)`

SetProcAmp sets ProcAmp field to given value.

### HasProcAmp

`func (o *Stage) HasProcAmp() bool`

HasProcAmp returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


