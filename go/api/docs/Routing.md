# Routing

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Mode** | Pointer to [**Mode**](Mode.md) |  | [optional] [default to MODE_INPUT]
**PreviewTap** | Pointer to [**PreviewTap**](PreviewTap.md) |  | [optional] [default to PREVIEWTAP_OVERLAY]
**PipelineBypassButton** | Pointer to **bool** | This is the bypass state due to the button on the device being pressed | [optional] 
**PipelineBypassUser** | Pointer to **bool** | This is the bypass state set by the user in the UI | [optional] 

## Methods

### NewRouting

`func NewRouting() *Routing`

NewRouting instantiates a new Routing object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRoutingWithDefaults

`func NewRoutingWithDefaults() *Routing`

NewRoutingWithDefaults instantiates a new Routing object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMode

`func (o *Routing) GetMode() Mode`

GetMode returns the Mode field if non-nil, zero value otherwise.

### GetModeOk

`func (o *Routing) GetModeOk() (*Mode, bool)`

GetModeOk returns a tuple with the Mode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMode

`func (o *Routing) SetMode(v Mode)`

SetMode sets Mode field to given value.

### HasMode

`func (o *Routing) HasMode() bool`

HasMode returns a boolean if a field has been set.

### GetPreviewTap

`func (o *Routing) GetPreviewTap() PreviewTap`

GetPreviewTap returns the PreviewTap field if non-nil, zero value otherwise.

### GetPreviewTapOk

`func (o *Routing) GetPreviewTapOk() (*PreviewTap, bool)`

GetPreviewTapOk returns a tuple with the PreviewTap field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPreviewTap

`func (o *Routing) SetPreviewTap(v PreviewTap)`

SetPreviewTap sets PreviewTap field to given value.

### HasPreviewTap

`func (o *Routing) HasPreviewTap() bool`

HasPreviewTap returns a boolean if a field has been set.

### GetPipelineBypassButton

`func (o *Routing) GetPipelineBypassButton() bool`

GetPipelineBypassButton returns the PipelineBypassButton field if non-nil, zero value otherwise.

### GetPipelineBypassButtonOk

`func (o *Routing) GetPipelineBypassButtonOk() (*bool, bool)`

GetPipelineBypassButtonOk returns a tuple with the PipelineBypassButton field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPipelineBypassButton

`func (o *Routing) SetPipelineBypassButton(v bool)`

SetPipelineBypassButton sets PipelineBypassButton field to given value.

### HasPipelineBypassButton

`func (o *Routing) HasPipelineBypassButton() bool`

HasPipelineBypassButton returns a boolean if a field has been set.

### GetPipelineBypassUser

`func (o *Routing) GetPipelineBypassUser() bool`

GetPipelineBypassUser returns the PipelineBypassUser field if non-nil, zero value otherwise.

### GetPipelineBypassUserOk

`func (o *Routing) GetPipelineBypassUserOk() (*bool, bool)`

GetPipelineBypassUserOk returns a tuple with the PipelineBypassUser field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPipelineBypassUser

`func (o *Routing) SetPipelineBypassUser(v bool)`

SetPipelineBypassUser sets PipelineBypassUser field to given value.

### HasPipelineBypassUser

`func (o *Routing) HasPipelineBypassUser() bool`

HasPipelineBypassUser returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


