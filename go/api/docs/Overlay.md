# Overlay

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Enabled** | Pointer to **bool** | true if overlay is enabled else disabled | [optional] 
**InVpidFormat** | Pointer to **bool** |  | [optional] 
**InVpidRange** | Pointer to **bool** |  | [optional] 
**InVpidHdr** | Pointer to **bool** |  | [optional] 
**InVpidBitDepth** | Pointer to **bool** |  | [optional] 
**OutVpidFormat** | Pointer to **bool** |  | [optional] 
**OutVpidRange** | Pointer to **bool** |  | [optional] 
**OutVpidHdr** | Pointer to **bool** |  | [optional] 
**OutVpidBitDepth** | Pointer to **bool** |  | [optional] 
**TimeCode** | Pointer to **bool** |  | [optional] 
**ClosedCaption** | Pointer to **bool** |  | [optional] 
**UserTextEnabled** | Pointer to **bool** |  | [optional] 
**UserTextLine1** | Pointer to **string** |  | [optional] 
**UserTextLine2** | Pointer to **string** |  | [optional] 
**PipelineConfig** | Pointer to **bool** |  | [optional] 
**Location** | Pointer to [**Locations**](Locations.md) |  | [optional] [default to LOCATIONS_BOTTOM_CENTER]
**UserOverlayEnabled** | Pointer to **bool** |  | [optional] [default to false]
**LibraryEntry** | Pointer to **int32** | library entry number of user overlay graphic | [optional] [default to 1]

## Methods

### NewOverlay

`func NewOverlay() *Overlay`

NewOverlay instantiates a new Overlay object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOverlayWithDefaults

`func NewOverlayWithDefaults() *Overlay`

NewOverlayWithDefaults instantiates a new Overlay object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetEnabled

`func (o *Overlay) GetEnabled() bool`

GetEnabled returns the Enabled field if non-nil, zero value otherwise.

### GetEnabledOk

`func (o *Overlay) GetEnabledOk() (*bool, bool)`

GetEnabledOk returns a tuple with the Enabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnabled

`func (o *Overlay) SetEnabled(v bool)`

SetEnabled sets Enabled field to given value.

### HasEnabled

`func (o *Overlay) HasEnabled() bool`

HasEnabled returns a boolean if a field has been set.

### GetInVpidFormat

`func (o *Overlay) GetInVpidFormat() bool`

GetInVpidFormat returns the InVpidFormat field if non-nil, zero value otherwise.

### GetInVpidFormatOk

`func (o *Overlay) GetInVpidFormatOk() (*bool, bool)`

GetInVpidFormatOk returns a tuple with the InVpidFormat field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInVpidFormat

`func (o *Overlay) SetInVpidFormat(v bool)`

SetInVpidFormat sets InVpidFormat field to given value.

### HasInVpidFormat

`func (o *Overlay) HasInVpidFormat() bool`

HasInVpidFormat returns a boolean if a field has been set.

### GetInVpidRange

`func (o *Overlay) GetInVpidRange() bool`

GetInVpidRange returns the InVpidRange field if non-nil, zero value otherwise.

### GetInVpidRangeOk

`func (o *Overlay) GetInVpidRangeOk() (*bool, bool)`

GetInVpidRangeOk returns a tuple with the InVpidRange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInVpidRange

`func (o *Overlay) SetInVpidRange(v bool)`

SetInVpidRange sets InVpidRange field to given value.

### HasInVpidRange

`func (o *Overlay) HasInVpidRange() bool`

HasInVpidRange returns a boolean if a field has been set.

### GetInVpidHdr

`func (o *Overlay) GetInVpidHdr() bool`

GetInVpidHdr returns the InVpidHdr field if non-nil, zero value otherwise.

### GetInVpidHdrOk

`func (o *Overlay) GetInVpidHdrOk() (*bool, bool)`

GetInVpidHdrOk returns a tuple with the InVpidHdr field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInVpidHdr

`func (o *Overlay) SetInVpidHdr(v bool)`

SetInVpidHdr sets InVpidHdr field to given value.

### HasInVpidHdr

`func (o *Overlay) HasInVpidHdr() bool`

HasInVpidHdr returns a boolean if a field has been set.

### GetInVpidBitDepth

`func (o *Overlay) GetInVpidBitDepth() bool`

GetInVpidBitDepth returns the InVpidBitDepth field if non-nil, zero value otherwise.

### GetInVpidBitDepthOk

`func (o *Overlay) GetInVpidBitDepthOk() (*bool, bool)`

GetInVpidBitDepthOk returns a tuple with the InVpidBitDepth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInVpidBitDepth

`func (o *Overlay) SetInVpidBitDepth(v bool)`

SetInVpidBitDepth sets InVpidBitDepth field to given value.

### HasInVpidBitDepth

`func (o *Overlay) HasInVpidBitDepth() bool`

HasInVpidBitDepth returns a boolean if a field has been set.

### GetOutVpidFormat

`func (o *Overlay) GetOutVpidFormat() bool`

GetOutVpidFormat returns the OutVpidFormat field if non-nil, zero value otherwise.

### GetOutVpidFormatOk

`func (o *Overlay) GetOutVpidFormatOk() (*bool, bool)`

GetOutVpidFormatOk returns a tuple with the OutVpidFormat field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutVpidFormat

`func (o *Overlay) SetOutVpidFormat(v bool)`

SetOutVpidFormat sets OutVpidFormat field to given value.

### HasOutVpidFormat

`func (o *Overlay) HasOutVpidFormat() bool`

HasOutVpidFormat returns a boolean if a field has been set.

### GetOutVpidRange

`func (o *Overlay) GetOutVpidRange() bool`

GetOutVpidRange returns the OutVpidRange field if non-nil, zero value otherwise.

### GetOutVpidRangeOk

`func (o *Overlay) GetOutVpidRangeOk() (*bool, bool)`

GetOutVpidRangeOk returns a tuple with the OutVpidRange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutVpidRange

`func (o *Overlay) SetOutVpidRange(v bool)`

SetOutVpidRange sets OutVpidRange field to given value.

### HasOutVpidRange

`func (o *Overlay) HasOutVpidRange() bool`

HasOutVpidRange returns a boolean if a field has been set.

### GetOutVpidHdr

`func (o *Overlay) GetOutVpidHdr() bool`

GetOutVpidHdr returns the OutVpidHdr field if non-nil, zero value otherwise.

### GetOutVpidHdrOk

`func (o *Overlay) GetOutVpidHdrOk() (*bool, bool)`

GetOutVpidHdrOk returns a tuple with the OutVpidHdr field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutVpidHdr

`func (o *Overlay) SetOutVpidHdr(v bool)`

SetOutVpidHdr sets OutVpidHdr field to given value.

### HasOutVpidHdr

`func (o *Overlay) HasOutVpidHdr() bool`

HasOutVpidHdr returns a boolean if a field has been set.

### GetOutVpidBitDepth

`func (o *Overlay) GetOutVpidBitDepth() bool`

GetOutVpidBitDepth returns the OutVpidBitDepth field if non-nil, zero value otherwise.

### GetOutVpidBitDepthOk

`func (o *Overlay) GetOutVpidBitDepthOk() (*bool, bool)`

GetOutVpidBitDepthOk returns a tuple with the OutVpidBitDepth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutVpidBitDepth

`func (o *Overlay) SetOutVpidBitDepth(v bool)`

SetOutVpidBitDepth sets OutVpidBitDepth field to given value.

### HasOutVpidBitDepth

`func (o *Overlay) HasOutVpidBitDepth() bool`

HasOutVpidBitDepth returns a boolean if a field has been set.

### GetTimeCode

`func (o *Overlay) GetTimeCode() bool`

GetTimeCode returns the TimeCode field if non-nil, zero value otherwise.

### GetTimeCodeOk

`func (o *Overlay) GetTimeCodeOk() (*bool, bool)`

GetTimeCodeOk returns a tuple with the TimeCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimeCode

`func (o *Overlay) SetTimeCode(v bool)`

SetTimeCode sets TimeCode field to given value.

### HasTimeCode

`func (o *Overlay) HasTimeCode() bool`

HasTimeCode returns a boolean if a field has been set.

### GetClosedCaption

`func (o *Overlay) GetClosedCaption() bool`

GetClosedCaption returns the ClosedCaption field if non-nil, zero value otherwise.

### GetClosedCaptionOk

`func (o *Overlay) GetClosedCaptionOk() (*bool, bool)`

GetClosedCaptionOk returns a tuple with the ClosedCaption field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClosedCaption

`func (o *Overlay) SetClosedCaption(v bool)`

SetClosedCaption sets ClosedCaption field to given value.

### HasClosedCaption

`func (o *Overlay) HasClosedCaption() bool`

HasClosedCaption returns a boolean if a field has been set.

### GetUserTextEnabled

`func (o *Overlay) GetUserTextEnabled() bool`

GetUserTextEnabled returns the UserTextEnabled field if non-nil, zero value otherwise.

### GetUserTextEnabledOk

`func (o *Overlay) GetUserTextEnabledOk() (*bool, bool)`

GetUserTextEnabledOk returns a tuple with the UserTextEnabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUserTextEnabled

`func (o *Overlay) SetUserTextEnabled(v bool)`

SetUserTextEnabled sets UserTextEnabled field to given value.

### HasUserTextEnabled

`func (o *Overlay) HasUserTextEnabled() bool`

HasUserTextEnabled returns a boolean if a field has been set.

### GetUserTextLine1

`func (o *Overlay) GetUserTextLine1() string`

GetUserTextLine1 returns the UserTextLine1 field if non-nil, zero value otherwise.

### GetUserTextLine1Ok

`func (o *Overlay) GetUserTextLine1Ok() (*string, bool)`

GetUserTextLine1Ok returns a tuple with the UserTextLine1 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUserTextLine1

`func (o *Overlay) SetUserTextLine1(v string)`

SetUserTextLine1 sets UserTextLine1 field to given value.

### HasUserTextLine1

`func (o *Overlay) HasUserTextLine1() bool`

HasUserTextLine1 returns a boolean if a field has been set.

### GetUserTextLine2

`func (o *Overlay) GetUserTextLine2() string`

GetUserTextLine2 returns the UserTextLine2 field if non-nil, zero value otherwise.

### GetUserTextLine2Ok

`func (o *Overlay) GetUserTextLine2Ok() (*string, bool)`

GetUserTextLine2Ok returns a tuple with the UserTextLine2 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUserTextLine2

`func (o *Overlay) SetUserTextLine2(v string)`

SetUserTextLine2 sets UserTextLine2 field to given value.

### HasUserTextLine2

`func (o *Overlay) HasUserTextLine2() bool`

HasUserTextLine2 returns a boolean if a field has been set.

### GetPipelineConfig

`func (o *Overlay) GetPipelineConfig() bool`

GetPipelineConfig returns the PipelineConfig field if non-nil, zero value otherwise.

### GetPipelineConfigOk

`func (o *Overlay) GetPipelineConfigOk() (*bool, bool)`

GetPipelineConfigOk returns a tuple with the PipelineConfig field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPipelineConfig

`func (o *Overlay) SetPipelineConfig(v bool)`

SetPipelineConfig sets PipelineConfig field to given value.

### HasPipelineConfig

`func (o *Overlay) HasPipelineConfig() bool`

HasPipelineConfig returns a boolean if a field has been set.

### GetLocation

`func (o *Overlay) GetLocation() Locations`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *Overlay) GetLocationOk() (*Locations, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *Overlay) SetLocation(v Locations)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *Overlay) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetUserOverlayEnabled

`func (o *Overlay) GetUserOverlayEnabled() bool`

GetUserOverlayEnabled returns the UserOverlayEnabled field if non-nil, zero value otherwise.

### GetUserOverlayEnabledOk

`func (o *Overlay) GetUserOverlayEnabledOk() (*bool, bool)`

GetUserOverlayEnabledOk returns a tuple with the UserOverlayEnabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUserOverlayEnabled

`func (o *Overlay) SetUserOverlayEnabled(v bool)`

SetUserOverlayEnabled sets UserOverlayEnabled field to given value.

### HasUserOverlayEnabled

`func (o *Overlay) HasUserOverlayEnabled() bool`

HasUserOverlayEnabled returns a boolean if a field has been set.

### GetLibraryEntry

`func (o *Overlay) GetLibraryEntry() int32`

GetLibraryEntry returns the LibraryEntry field if non-nil, zero value otherwise.

### GetLibraryEntryOk

`func (o *Overlay) GetLibraryEntryOk() (*int32, bool)`

GetLibraryEntryOk returns a tuple with the LibraryEntry field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLibraryEntry

`func (o *Overlay) SetLibraryEntry(v int32)`

SetLibraryEntry sets LibraryEntry field to given value.

### HasLibraryEntry

`func (o *Overlay) HasLibraryEntry() bool`

HasLibraryEntry returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


