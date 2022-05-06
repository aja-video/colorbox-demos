# AncCaptureFilter

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Enable** | Pointer to **bool** |  | [optional] [default to false]
**Dids** | Pointer to **[]float32** |  | [optional] 

## Methods

### NewAncCaptureFilter

`func NewAncCaptureFilter() *AncCaptureFilter`

NewAncCaptureFilter instantiates a new AncCaptureFilter object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAncCaptureFilterWithDefaults

`func NewAncCaptureFilterWithDefaults() *AncCaptureFilter`

NewAncCaptureFilterWithDefaults instantiates a new AncCaptureFilter object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetEnable

`func (o *AncCaptureFilter) GetEnable() bool`

GetEnable returns the Enable field if non-nil, zero value otherwise.

### GetEnableOk

`func (o *AncCaptureFilter) GetEnableOk() (*bool, bool)`

GetEnableOk returns a tuple with the Enable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnable

`func (o *AncCaptureFilter) SetEnable(v bool)`

SetEnable sets Enable field to given value.

### HasEnable

`func (o *AncCaptureFilter) HasEnable() bool`

HasEnable returns a boolean if a field has been set.

### GetDids

`func (o *AncCaptureFilter) GetDids() []float32`

GetDids returns the Dids field if non-nil, zero value otherwise.

### GetDidsOk

`func (o *AncCaptureFilter) GetDidsOk() (*[]float32, bool)`

GetDidsOk returns a tuple with the Dids field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDids

`func (o *AncCaptureFilter) SetDids(v []float32)`

SetDids sets Dids field to given value.

### HasDids

`func (o *AncCaptureFilter) HasDids() bool`

HasDids returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


