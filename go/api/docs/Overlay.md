# Overlay

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Enabled** | Pointer to **bool** | true if overlay is enabled else disabled | [optional] 
**VpidFormat** | Pointer to **bool** |  | [optional] 
**VpidRange** | Pointer to **bool** |  | [optional] 
**VpidHdr** | Pointer to **bool** |  | [optional] 
**VpidBitDepth** | Pointer to **bool** |  | [optional] 
**TimeCode** | Pointer to **bool** |  | [optional] 
**ClosedCaption** | Pointer to **bool** |  | [optional] 
**UserTextEnabled** | Pointer to **bool** |  | [optional] 
**UserTextLine1** | Pointer to **string** |  | [optional] 
**UserTextLine2** | Pointer to **string** |  | [optional] 
**Location** | Pointer to [**Locations**](Locations.md) |  | [optional] [default to LOCATIONS_BOTTOM_CENTER]

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

### GetVpidFormat

`func (o *Overlay) GetVpidFormat() bool`

GetVpidFormat returns the VpidFormat field if non-nil, zero value otherwise.

### GetVpidFormatOk

`func (o *Overlay) GetVpidFormatOk() (*bool, bool)`

GetVpidFormatOk returns a tuple with the VpidFormat field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpidFormat

`func (o *Overlay) SetVpidFormat(v bool)`

SetVpidFormat sets VpidFormat field to given value.

### HasVpidFormat

`func (o *Overlay) HasVpidFormat() bool`

HasVpidFormat returns a boolean if a field has been set.

### GetVpidRange

`func (o *Overlay) GetVpidRange() bool`

GetVpidRange returns the VpidRange field if non-nil, zero value otherwise.

### GetVpidRangeOk

`func (o *Overlay) GetVpidRangeOk() (*bool, bool)`

GetVpidRangeOk returns a tuple with the VpidRange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpidRange

`func (o *Overlay) SetVpidRange(v bool)`

SetVpidRange sets VpidRange field to given value.

### HasVpidRange

`func (o *Overlay) HasVpidRange() bool`

HasVpidRange returns a boolean if a field has been set.

### GetVpidHdr

`func (o *Overlay) GetVpidHdr() bool`

GetVpidHdr returns the VpidHdr field if non-nil, zero value otherwise.

### GetVpidHdrOk

`func (o *Overlay) GetVpidHdrOk() (*bool, bool)`

GetVpidHdrOk returns a tuple with the VpidHdr field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpidHdr

`func (o *Overlay) SetVpidHdr(v bool)`

SetVpidHdr sets VpidHdr field to given value.

### HasVpidHdr

`func (o *Overlay) HasVpidHdr() bool`

HasVpidHdr returns a boolean if a field has been set.

### GetVpidBitDepth

`func (o *Overlay) GetVpidBitDepth() bool`

GetVpidBitDepth returns the VpidBitDepth field if non-nil, zero value otherwise.

### GetVpidBitDepthOk

`func (o *Overlay) GetVpidBitDepthOk() (*bool, bool)`

GetVpidBitDepthOk returns a tuple with the VpidBitDepth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpidBitDepth

`func (o *Overlay) SetVpidBitDepth(v bool)`

SetVpidBitDepth sets VpidBitDepth field to given value.

### HasVpidBitDepth

`func (o *Overlay) HasVpidBitDepth() bool`

HasVpidBitDepth returns a boolean if a field has been set.

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


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


