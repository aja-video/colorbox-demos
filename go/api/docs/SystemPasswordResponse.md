# SystemPasswordResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Successful** | Pointer to **bool** |  | [optional] 
**Message** | Pointer to **string** |  | [optional] 

## Methods

### NewSystemPasswordResponse

`func NewSystemPasswordResponse() *SystemPasswordResponse`

NewSystemPasswordResponse instantiates a new SystemPasswordResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSystemPasswordResponseWithDefaults

`func NewSystemPasswordResponseWithDefaults() *SystemPasswordResponse`

NewSystemPasswordResponseWithDefaults instantiates a new SystemPasswordResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSuccessful

`func (o *SystemPasswordResponse) GetSuccessful() bool`

GetSuccessful returns the Successful field if non-nil, zero value otherwise.

### GetSuccessfulOk

`func (o *SystemPasswordResponse) GetSuccessfulOk() (*bool, bool)`

GetSuccessfulOk returns a tuple with the Successful field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSuccessful

`func (o *SystemPasswordResponse) SetSuccessful(v bool)`

SetSuccessful sets Successful field to given value.

### HasSuccessful

`func (o *SystemPasswordResponse) HasSuccessful() bool`

HasSuccessful returns a boolean if a field has been set.

### GetMessage

`func (o *SystemPasswordResponse) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *SystemPasswordResponse) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *SystemPasswordResponse) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *SystemPasswordResponse) HasMessage() bool`

HasMessage returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


