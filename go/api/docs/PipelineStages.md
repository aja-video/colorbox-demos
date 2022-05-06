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
**PipelineRange** | Pointer to [**PipelineRange**](PipelineRange.md) |  | [optional] [default to PIPELINERANGE_SMPTE_FULL]

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

### GetPipelineRange

`func (o *PipelineStages) GetPipelineRange() PipelineRange`

GetPipelineRange returns the PipelineRange field if non-nil, zero value otherwise.

### GetPipelineRangeOk

`func (o *PipelineStages) GetPipelineRangeOk() (*PipelineRange, bool)`

GetPipelineRangeOk returns a tuple with the PipelineRange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPipelineRange

`func (o *PipelineStages) SetPipelineRange(v PipelineRange)`

SetPipelineRange sets PipelineRange field to given value.

### HasPipelineRange

`func (o *PipelineStages) HasPipelineRange() bool`

HasPipelineRange returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


