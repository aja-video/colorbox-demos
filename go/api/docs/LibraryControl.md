# LibraryControl

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Library** | Pointer to [**Library**](Library.md) |  | [optional] 
**Entry** | Pointer to **int32** | The library entry to act on(starting at 1) | [optional] 
**Action** | Pointer to [**LibraryAction**](LibraryAction.md) |  | [optional] 
**Data** | Pointer to **string** | Data to be used with action | [optional] 
**ErrorMsg** | Pointer to **string** | Message to alert when things go wrong | [optional] 

## Methods

### NewLibraryControl

`func NewLibraryControl() *LibraryControl`

NewLibraryControl instantiates a new LibraryControl object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewLibraryControlWithDefaults

`func NewLibraryControlWithDefaults() *LibraryControl`

NewLibraryControlWithDefaults instantiates a new LibraryControl object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLibrary

`func (o *LibraryControl) GetLibrary() Library`

GetLibrary returns the Library field if non-nil, zero value otherwise.

### GetLibraryOk

`func (o *LibraryControl) GetLibraryOk() (*Library, bool)`

GetLibraryOk returns a tuple with the Library field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLibrary

`func (o *LibraryControl) SetLibrary(v Library)`

SetLibrary sets Library field to given value.

### HasLibrary

`func (o *LibraryControl) HasLibrary() bool`

HasLibrary returns a boolean if a field has been set.

### GetEntry

`func (o *LibraryControl) GetEntry() int32`

GetEntry returns the Entry field if non-nil, zero value otherwise.

### GetEntryOk

`func (o *LibraryControl) GetEntryOk() (*int32, bool)`

GetEntryOk returns a tuple with the Entry field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEntry

`func (o *LibraryControl) SetEntry(v int32)`

SetEntry sets Entry field to given value.

### HasEntry

`func (o *LibraryControl) HasEntry() bool`

HasEntry returns a boolean if a field has been set.

### GetAction

`func (o *LibraryControl) GetAction() LibraryAction`

GetAction returns the Action field if non-nil, zero value otherwise.

### GetActionOk

`func (o *LibraryControl) GetActionOk() (*LibraryAction, bool)`

GetActionOk returns a tuple with the Action field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAction

`func (o *LibraryControl) SetAction(v LibraryAction)`

SetAction sets Action field to given value.

### HasAction

`func (o *LibraryControl) HasAction() bool`

HasAction returns a boolean if a field has been set.

### GetData

`func (o *LibraryControl) GetData() string`

GetData returns the Data field if non-nil, zero value otherwise.

### GetDataOk

`func (o *LibraryControl) GetDataOk() (*string, bool)`

GetDataOk returns a tuple with the Data field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetData

`func (o *LibraryControl) SetData(v string)`

SetData sets Data field to given value.

### HasData

`func (o *LibraryControl) HasData() bool`

HasData returns a boolean if a field has been set.

### GetErrorMsg

`func (o *LibraryControl) GetErrorMsg() string`

GetErrorMsg returns the ErrorMsg field if non-nil, zero value otherwise.

### GetErrorMsgOk

`func (o *LibraryControl) GetErrorMsgOk() (*string, bool)`

GetErrorMsgOk returns a tuple with the ErrorMsg field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrorMsg

`func (o *LibraryControl) SetErrorMsg(v string)`

SetErrorMsg sets ErrorMsg field to given value.

### HasErrorMsg

`func (o *LibraryControl) HasErrorMsg() bool`

HasErrorMsg returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


