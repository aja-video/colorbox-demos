# FrameStore

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Enabled** | Pointer to **bool** | true if frame store is enabled else disabled | [optional] 
**Dynamic** | Pointer to **bool** | true if frame store can be dynamically adjusted | [optional] 
**ImageName** | Pointer to **string** | The custom name for the captured image | [optional] 
**ClipNameAppended** | Pointer to **bool** | Flag to append the clip name of the captured image onto the filename | [optional] 
**TimecodeAppended** | Pointer to **bool** | Flag to append the timecode of the captured image onto the filename | [optional] 
**LibraryEntry** | Pointer to **int32** | library entry number, zero is black | [optional] 
**Format** | Pointer to [**VideoFormat**](VideoFormat.md) |  | [optional] 
**Convert** | Pointer to [**VideoConvertChoice**](VideoConvertChoice.md) |  | [optional] [default to VIDEOCONVERTCHOICE_VIDEO_CONVERT_ACTUAL]
**RgbRange** | Pointer to [**RgbRange**](RgbRange.md) |  | [optional] 

## Methods

### NewFrameStore

`func NewFrameStore() *FrameStore`

NewFrameStore instantiates a new FrameStore object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewFrameStoreWithDefaults

`func NewFrameStoreWithDefaults() *FrameStore`

NewFrameStoreWithDefaults instantiates a new FrameStore object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetEnabled

`func (o *FrameStore) GetEnabled() bool`

GetEnabled returns the Enabled field if non-nil, zero value otherwise.

### GetEnabledOk

`func (o *FrameStore) GetEnabledOk() (*bool, bool)`

GetEnabledOk returns a tuple with the Enabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnabled

`func (o *FrameStore) SetEnabled(v bool)`

SetEnabled sets Enabled field to given value.

### HasEnabled

`func (o *FrameStore) HasEnabled() bool`

HasEnabled returns a boolean if a field has been set.

### GetDynamic

`func (o *FrameStore) GetDynamic() bool`

GetDynamic returns the Dynamic field if non-nil, zero value otherwise.

### GetDynamicOk

`func (o *FrameStore) GetDynamicOk() (*bool, bool)`

GetDynamicOk returns a tuple with the Dynamic field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDynamic

`func (o *FrameStore) SetDynamic(v bool)`

SetDynamic sets Dynamic field to given value.

### HasDynamic

`func (o *FrameStore) HasDynamic() bool`

HasDynamic returns a boolean if a field has been set.

### GetImageName

`func (o *FrameStore) GetImageName() string`

GetImageName returns the ImageName field if non-nil, zero value otherwise.

### GetImageNameOk

`func (o *FrameStore) GetImageNameOk() (*string, bool)`

GetImageNameOk returns a tuple with the ImageName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImageName

`func (o *FrameStore) SetImageName(v string)`

SetImageName sets ImageName field to given value.

### HasImageName

`func (o *FrameStore) HasImageName() bool`

HasImageName returns a boolean if a field has been set.

### GetClipNameAppended

`func (o *FrameStore) GetClipNameAppended() bool`

GetClipNameAppended returns the ClipNameAppended field if non-nil, zero value otherwise.

### GetClipNameAppendedOk

`func (o *FrameStore) GetClipNameAppendedOk() (*bool, bool)`

GetClipNameAppendedOk returns a tuple with the ClipNameAppended field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClipNameAppended

`func (o *FrameStore) SetClipNameAppended(v bool)`

SetClipNameAppended sets ClipNameAppended field to given value.

### HasClipNameAppended

`func (o *FrameStore) HasClipNameAppended() bool`

HasClipNameAppended returns a boolean if a field has been set.

### GetTimecodeAppended

`func (o *FrameStore) GetTimecodeAppended() bool`

GetTimecodeAppended returns the TimecodeAppended field if non-nil, zero value otherwise.

### GetTimecodeAppendedOk

`func (o *FrameStore) GetTimecodeAppendedOk() (*bool, bool)`

GetTimecodeAppendedOk returns a tuple with the TimecodeAppended field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimecodeAppended

`func (o *FrameStore) SetTimecodeAppended(v bool)`

SetTimecodeAppended sets TimecodeAppended field to given value.

### HasTimecodeAppended

`func (o *FrameStore) HasTimecodeAppended() bool`

HasTimecodeAppended returns a boolean if a field has been set.

### GetLibraryEntry

`func (o *FrameStore) GetLibraryEntry() int32`

GetLibraryEntry returns the LibraryEntry field if non-nil, zero value otherwise.

### GetLibraryEntryOk

`func (o *FrameStore) GetLibraryEntryOk() (*int32, bool)`

GetLibraryEntryOk returns a tuple with the LibraryEntry field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLibraryEntry

`func (o *FrameStore) SetLibraryEntry(v int32)`

SetLibraryEntry sets LibraryEntry field to given value.

### HasLibraryEntry

`func (o *FrameStore) HasLibraryEntry() bool`

HasLibraryEntry returns a boolean if a field has been set.

### GetFormat

`func (o *FrameStore) GetFormat() VideoFormat`

GetFormat returns the Format field if non-nil, zero value otherwise.

### GetFormatOk

`func (o *FrameStore) GetFormatOk() (*VideoFormat, bool)`

GetFormatOk returns a tuple with the Format field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormat

`func (o *FrameStore) SetFormat(v VideoFormat)`

SetFormat sets Format field to given value.

### HasFormat

`func (o *FrameStore) HasFormat() bool`

HasFormat returns a boolean if a field has been set.

### GetConvert

`func (o *FrameStore) GetConvert() VideoConvertChoice`

GetConvert returns the Convert field if non-nil, zero value otherwise.

### GetConvertOk

`func (o *FrameStore) GetConvertOk() (*VideoConvertChoice, bool)`

GetConvertOk returns a tuple with the Convert field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetConvert

`func (o *FrameStore) SetConvert(v VideoConvertChoice)`

SetConvert sets Convert field to given value.

### HasConvert

`func (o *FrameStore) HasConvert() bool`

HasConvert returns a boolean if a field has been set.

### GetRgbRange

`func (o *FrameStore) GetRgbRange() RgbRange`

GetRgbRange returns the RgbRange field if non-nil, zero value otherwise.

### GetRgbRangeOk

`func (o *FrameStore) GetRgbRangeOk() (*RgbRange, bool)`

GetRgbRangeOk returns a tuple with the RgbRange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRgbRange

`func (o *FrameStore) SetRgbRange(v RgbRange)`

SetRgbRange sets RgbRange field to given value.

### HasRgbRange

`func (o *FrameStore) HasRgbRange() bool`

HasRgbRange returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


