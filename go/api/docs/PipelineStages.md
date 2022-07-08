# PipelineStages

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Lut1d1** | Pointer to [**Stage**](Stage.md) |  | [optional] 
**M3x32** | Pointer to [**Stage**](Stage.md) |  | [optional] 
**Lut1d2** | Pointer to [**Stage**](Stage.md) |  | [optional] 
**Lut3d1** | Pointer to [**Stage**](Stage.md) |  | [optional] 
**Lut1d3** | Pointer to [**Stage**](Stage.md) |  | [optional] 
**M3x33** | Pointer to [**Stage**](Stage.md) |  | [optional] 
**Lut1d4** | Pointer to [**Stage**](Stage.md) |  | [optional] 
**InColorimetry** | Pointer to [**Colorimetry**](Colorimetry.md) |  | [optional] 
**InRange** | Pointer to [**PipelineRange**](PipelineRange.md) |  | [optional] [default to PIPELINERANGE_SMPTE_FULL]
**OutColorimetry** | Pointer to [**Colorimetry**](Colorimetry.md) |  | [optional] 
**OutRange** | Pointer to [**PipelineRange**](PipelineRange.md) |  | [optional] [default to PIPELINERANGE_SMPTE_FULL]
**TransferCharacteristic** | Pointer to [**Transfer**](Transfer.md) |  | [optional] 
**CscFilter** | Pointer to [**CSCFilter**](CSCFilter.md) |  | [optional] [default to CSCFILTER_NONE]

## Methods

### NewPipelineStages

`func NewPipelineStages() *PipelineStages`

NewPipelineStages instantiates a new PipelineStages object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPipelineStagesWithDefaults

`func NewPipelineStagesWithDefaults() *PipelineStages`

NewPipelineStagesWithDefaults instantiates a new PipelineStages object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLut1d1

`func (o *PipelineStages) GetLut1d1() Stage`

GetLut1d1 returns the Lut1d1 field if non-nil, zero value otherwise.

### GetLut1d1Ok

`func (o *PipelineStages) GetLut1d1Ok() (*Stage, bool)`

GetLut1d1Ok returns a tuple with the Lut1d1 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLut1d1

`func (o *PipelineStages) SetLut1d1(v Stage)`

SetLut1d1 sets Lut1d1 field to given value.

### HasLut1d1

`func (o *PipelineStages) HasLut1d1() bool`

HasLut1d1 returns a boolean if a field has been set.

### GetM3x32

`func (o *PipelineStages) GetM3x32() Stage`

GetM3x32 returns the M3x32 field if non-nil, zero value otherwise.

### GetM3x32Ok

`func (o *PipelineStages) GetM3x32Ok() (*Stage, bool)`

GetM3x32Ok returns a tuple with the M3x32 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetM3x32

`func (o *PipelineStages) SetM3x32(v Stage)`

SetM3x32 sets M3x32 field to given value.

### HasM3x32

`func (o *PipelineStages) HasM3x32() bool`

HasM3x32 returns a boolean if a field has been set.

### GetLut1d2

`func (o *PipelineStages) GetLut1d2() Stage`

GetLut1d2 returns the Lut1d2 field if non-nil, zero value otherwise.

### GetLut1d2Ok

`func (o *PipelineStages) GetLut1d2Ok() (*Stage, bool)`

GetLut1d2Ok returns a tuple with the Lut1d2 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLut1d2

`func (o *PipelineStages) SetLut1d2(v Stage)`

SetLut1d2 sets Lut1d2 field to given value.

### HasLut1d2

`func (o *PipelineStages) HasLut1d2() bool`

HasLut1d2 returns a boolean if a field has been set.

### GetLut3d1

`func (o *PipelineStages) GetLut3d1() Stage`

GetLut3d1 returns the Lut3d1 field if non-nil, zero value otherwise.

### GetLut3d1Ok

`func (o *PipelineStages) GetLut3d1Ok() (*Stage, bool)`

GetLut3d1Ok returns a tuple with the Lut3d1 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLut3d1

`func (o *PipelineStages) SetLut3d1(v Stage)`

SetLut3d1 sets Lut3d1 field to given value.

### HasLut3d1

`func (o *PipelineStages) HasLut3d1() bool`

HasLut3d1 returns a boolean if a field has been set.

### GetLut1d3

`func (o *PipelineStages) GetLut1d3() Stage`

GetLut1d3 returns the Lut1d3 field if non-nil, zero value otherwise.

### GetLut1d3Ok

`func (o *PipelineStages) GetLut1d3Ok() (*Stage, bool)`

GetLut1d3Ok returns a tuple with the Lut1d3 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLut1d3

`func (o *PipelineStages) SetLut1d3(v Stage)`

SetLut1d3 sets Lut1d3 field to given value.

### HasLut1d3

`func (o *PipelineStages) HasLut1d3() bool`

HasLut1d3 returns a boolean if a field has been set.

### GetM3x33

`func (o *PipelineStages) GetM3x33() Stage`

GetM3x33 returns the M3x33 field if non-nil, zero value otherwise.

### GetM3x33Ok

`func (o *PipelineStages) GetM3x33Ok() (*Stage, bool)`

GetM3x33Ok returns a tuple with the M3x33 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetM3x33

`func (o *PipelineStages) SetM3x33(v Stage)`

SetM3x33 sets M3x33 field to given value.

### HasM3x33

`func (o *PipelineStages) HasM3x33() bool`

HasM3x33 returns a boolean if a field has been set.

### GetLut1d4

`func (o *PipelineStages) GetLut1d4() Stage`

GetLut1d4 returns the Lut1d4 field if non-nil, zero value otherwise.

### GetLut1d4Ok

`func (o *PipelineStages) GetLut1d4Ok() (*Stage, bool)`

GetLut1d4Ok returns a tuple with the Lut1d4 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLut1d4

`func (o *PipelineStages) SetLut1d4(v Stage)`

SetLut1d4 sets Lut1d4 field to given value.

### HasLut1d4

`func (o *PipelineStages) HasLut1d4() bool`

HasLut1d4 returns a boolean if a field has been set.

### GetInColorimetry

`func (o *PipelineStages) GetInColorimetry() Colorimetry`

GetInColorimetry returns the InColorimetry field if non-nil, zero value otherwise.

### GetInColorimetryOk

`func (o *PipelineStages) GetInColorimetryOk() (*Colorimetry, bool)`

GetInColorimetryOk returns a tuple with the InColorimetry field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInColorimetry

`func (o *PipelineStages) SetInColorimetry(v Colorimetry)`

SetInColorimetry sets InColorimetry field to given value.

### HasInColorimetry

`func (o *PipelineStages) HasInColorimetry() bool`

HasInColorimetry returns a boolean if a field has been set.

### GetInRange

`func (o *PipelineStages) GetInRange() PipelineRange`

GetInRange returns the InRange field if non-nil, zero value otherwise.

### GetInRangeOk

`func (o *PipelineStages) GetInRangeOk() (*PipelineRange, bool)`

GetInRangeOk returns a tuple with the InRange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInRange

`func (o *PipelineStages) SetInRange(v PipelineRange)`

SetInRange sets InRange field to given value.

### HasInRange

`func (o *PipelineStages) HasInRange() bool`

HasInRange returns a boolean if a field has been set.

### GetOutColorimetry

`func (o *PipelineStages) GetOutColorimetry() Colorimetry`

GetOutColorimetry returns the OutColorimetry field if non-nil, zero value otherwise.

### GetOutColorimetryOk

`func (o *PipelineStages) GetOutColorimetryOk() (*Colorimetry, bool)`

GetOutColorimetryOk returns a tuple with the OutColorimetry field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutColorimetry

`func (o *PipelineStages) SetOutColorimetry(v Colorimetry)`

SetOutColorimetry sets OutColorimetry field to given value.

### HasOutColorimetry

`func (o *PipelineStages) HasOutColorimetry() bool`

HasOutColorimetry returns a boolean if a field has been set.

### GetOutRange

`func (o *PipelineStages) GetOutRange() PipelineRange`

GetOutRange returns the OutRange field if non-nil, zero value otherwise.

### GetOutRangeOk

`func (o *PipelineStages) GetOutRangeOk() (*PipelineRange, bool)`

GetOutRangeOk returns a tuple with the OutRange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutRange

`func (o *PipelineStages) SetOutRange(v PipelineRange)`

SetOutRange sets OutRange field to given value.

### HasOutRange

`func (o *PipelineStages) HasOutRange() bool`

HasOutRange returns a boolean if a field has been set.

### GetTransferCharacteristic

`func (o *PipelineStages) GetTransferCharacteristic() Transfer`

GetTransferCharacteristic returns the TransferCharacteristic field if non-nil, zero value otherwise.

### GetTransferCharacteristicOk

`func (o *PipelineStages) GetTransferCharacteristicOk() (*Transfer, bool)`

GetTransferCharacteristicOk returns a tuple with the TransferCharacteristic field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransferCharacteristic

`func (o *PipelineStages) SetTransferCharacteristic(v Transfer)`

SetTransferCharacteristic sets TransferCharacteristic field to given value.

### HasTransferCharacteristic

`func (o *PipelineStages) HasTransferCharacteristic() bool`

HasTransferCharacteristic returns a boolean if a field has been set.

### GetCscFilter

`func (o *PipelineStages) GetCscFilter() CSCFilter`

GetCscFilter returns the CscFilter field if non-nil, zero value otherwise.

### GetCscFilterOk

`func (o *PipelineStages) GetCscFilterOk() (*CSCFilter, bool)`

GetCscFilterOk returns a tuple with the CscFilter field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCscFilter

`func (o *PipelineStages) SetCscFilter(v CSCFilter)`

SetCscFilter sets CscFilter field to given value.

### HasCscFilter

`func (o *PipelineStages) HasCscFilter() bool`

HasCscFilter returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


