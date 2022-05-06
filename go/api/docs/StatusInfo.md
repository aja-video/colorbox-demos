# StatusInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**UpperBoundGood** | Pointer to **float32** | The upper bound for the state to be considered StatusStateGood | [optional] 
**UpperBoundMaybe** | Pointer to **float32** | The upper bound for the state to be considered StatusStateMaybe | [optional] 
**Value** | Pointer to **string** | The instantaneous value for this status object | [optional] 
**Label** | Pointer to **string** | A descriptive label of what this status object represents | [optional] 
**ExtraValue** | Pointer to **string** | A second value that is optional | [optional] 
**ExtraLabel** | Pointer to **string** | A second descriptive label for the extraValue | [optional] 
**State** | Pointer to [**StatusState**](StatusState.md) |  | [optional] [default to STATUSSTATE_STATUS_STATE_UNKNOWN]

## Methods

### NewStatusInfo

`func NewStatusInfo() *StatusInfo`

NewStatusInfo instantiates a new StatusInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStatusInfoWithDefaults

`func NewStatusInfoWithDefaults() *StatusInfo`

NewStatusInfoWithDefaults instantiates a new StatusInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUpperBoundGood

`func (o *StatusInfo) GetUpperBoundGood() float32`

GetUpperBoundGood returns the UpperBoundGood field if non-nil, zero value otherwise.

### GetUpperBoundGoodOk

`func (o *StatusInfo) GetUpperBoundGoodOk() (*float32, bool)`

GetUpperBoundGoodOk returns a tuple with the UpperBoundGood field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUpperBoundGood

`func (o *StatusInfo) SetUpperBoundGood(v float32)`

SetUpperBoundGood sets UpperBoundGood field to given value.

### HasUpperBoundGood

`func (o *StatusInfo) HasUpperBoundGood() bool`

HasUpperBoundGood returns a boolean if a field has been set.

### GetUpperBoundMaybe

`func (o *StatusInfo) GetUpperBoundMaybe() float32`

GetUpperBoundMaybe returns the UpperBoundMaybe field if non-nil, zero value otherwise.

### GetUpperBoundMaybeOk

`func (o *StatusInfo) GetUpperBoundMaybeOk() (*float32, bool)`

GetUpperBoundMaybeOk returns a tuple with the UpperBoundMaybe field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUpperBoundMaybe

`func (o *StatusInfo) SetUpperBoundMaybe(v float32)`

SetUpperBoundMaybe sets UpperBoundMaybe field to given value.

### HasUpperBoundMaybe

`func (o *StatusInfo) HasUpperBoundMaybe() bool`

HasUpperBoundMaybe returns a boolean if a field has been set.

### GetValue

`func (o *StatusInfo) GetValue() string`

GetValue returns the Value field if non-nil, zero value otherwise.

### GetValueOk

`func (o *StatusInfo) GetValueOk() (*string, bool)`

GetValueOk returns a tuple with the Value field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValue

`func (o *StatusInfo) SetValue(v string)`

SetValue sets Value field to given value.

### HasValue

`func (o *StatusInfo) HasValue() bool`

HasValue returns a boolean if a field has been set.

### GetLabel

`func (o *StatusInfo) GetLabel() string`

GetLabel returns the Label field if non-nil, zero value otherwise.

### GetLabelOk

`func (o *StatusInfo) GetLabelOk() (*string, bool)`

GetLabelOk returns a tuple with the Label field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLabel

`func (o *StatusInfo) SetLabel(v string)`

SetLabel sets Label field to given value.

### HasLabel

`func (o *StatusInfo) HasLabel() bool`

HasLabel returns a boolean if a field has been set.

### GetExtraValue

`func (o *StatusInfo) GetExtraValue() string`

GetExtraValue returns the ExtraValue field if non-nil, zero value otherwise.

### GetExtraValueOk

`func (o *StatusInfo) GetExtraValueOk() (*string, bool)`

GetExtraValueOk returns a tuple with the ExtraValue field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraValue

`func (o *StatusInfo) SetExtraValue(v string)`

SetExtraValue sets ExtraValue field to given value.

### HasExtraValue

`func (o *StatusInfo) HasExtraValue() bool`

HasExtraValue returns a boolean if a field has been set.

### GetExtraLabel

`func (o *StatusInfo) GetExtraLabel() string`

GetExtraLabel returns the ExtraLabel field if non-nil, zero value otherwise.

### GetExtraLabelOk

`func (o *StatusInfo) GetExtraLabelOk() (*string, bool)`

GetExtraLabelOk returns a tuple with the ExtraLabel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraLabel

`func (o *StatusInfo) SetExtraLabel(v string)`

SetExtraLabel sets ExtraLabel field to given value.

### HasExtraLabel

`func (o *StatusInfo) HasExtraLabel() bool`

HasExtraLabel returns a boolean if a field has been set.

### GetState

`func (o *StatusInfo) GetState() StatusState`

GetState returns the State field if non-nil, zero value otherwise.

### GetStateOk

`func (o *StatusInfo) GetStateOk() (*StatusState, bool)`

GetStateOk returns a tuple with the State field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetState

`func (o *StatusInfo) SetState(v StatusState)`

SetState sets State field to given value.

### HasState

`func (o *StatusInfo) HasState() bool`

HasState returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


