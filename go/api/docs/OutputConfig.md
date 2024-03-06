# OutputConfig

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ColorSpace** | Pointer to [**ColorSpace**](ColorSpace.md) |  | [optional] 
**RgbRange** | Pointer to [**RgbRange**](RgbRange.md) |  | [optional] 
**BitDepth** | Pointer to [**BitDepth**](BitDepth.md) |  | [optional] 
**ScanMode** | Pointer to [**ScanMode**](ScanMode.md) |  | [optional] 
**Colorimetry** | Pointer to [**Colorimetry**](Colorimetry.md) |  | [optional] 
**Transfer** | Pointer to [**Transfer**](Transfer.md) |  | [optional] 
**Format** | Pointer to [**VideoFormat**](VideoFormat.md) |  | [optional] 
**SdiFormat** | Pointer to [**VideoFormat**](VideoFormat.md) |  | [optional] 
**SdiDownConvert** | Pointer to [**DownConvert**](DownConvert.md) |  | [optional] [default to DOWNCONVERT_FOLLOW_INPUT]
**SdiMode3g** | Pointer to [**SdiMode3g**](SdiMode3g.md) |  | [optional] 
**HdmiFormat** | Pointer to [**VideoFormat**](VideoFormat.md) |  | [optional] 
**HdmiConnection** | Pointer to [**Connection**](Connection.md) |  | [optional] 
**HdmiCrop4k2k** | Pointer to [**Crop4k2k**](Crop4k2k.md) |  | [optional] [default to CROP4K2K_AUTO]
**HdmiDownConvert** | Pointer to [**DownConvert**](DownConvert.md) |  | [optional] [default to DOWNCONVERT_FOLLOW_INPUT]
**HdmiColorSpace** | Pointer to [**ColorSpace**](ColorSpace.md) |  | [optional] 
**HdmiBitDepth** | Pointer to [**BitDepth**](BitDepth.md) |  | [optional] 

## Methods

### NewOutputConfig

`func NewOutputConfig() *OutputConfig`

NewOutputConfig instantiates a new OutputConfig object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOutputConfigWithDefaults

`func NewOutputConfigWithDefaults() *OutputConfig`

NewOutputConfigWithDefaults instantiates a new OutputConfig object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetColorSpace

`func (o *OutputConfig) GetColorSpace() ColorSpace`

GetColorSpace returns the ColorSpace field if non-nil, zero value otherwise.

### GetColorSpaceOk

`func (o *OutputConfig) GetColorSpaceOk() (*ColorSpace, bool)`

GetColorSpaceOk returns a tuple with the ColorSpace field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetColorSpace

`func (o *OutputConfig) SetColorSpace(v ColorSpace)`

SetColorSpace sets ColorSpace field to given value.

### HasColorSpace

`func (o *OutputConfig) HasColorSpace() bool`

HasColorSpace returns a boolean if a field has been set.

### GetRgbRange

`func (o *OutputConfig) GetRgbRange() RgbRange`

GetRgbRange returns the RgbRange field if non-nil, zero value otherwise.

### GetRgbRangeOk

`func (o *OutputConfig) GetRgbRangeOk() (*RgbRange, bool)`

GetRgbRangeOk returns a tuple with the RgbRange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRgbRange

`func (o *OutputConfig) SetRgbRange(v RgbRange)`

SetRgbRange sets RgbRange field to given value.

### HasRgbRange

`func (o *OutputConfig) HasRgbRange() bool`

HasRgbRange returns a boolean if a field has been set.

### GetBitDepth

`func (o *OutputConfig) GetBitDepth() BitDepth`

GetBitDepth returns the BitDepth field if non-nil, zero value otherwise.

### GetBitDepthOk

`func (o *OutputConfig) GetBitDepthOk() (*BitDepth, bool)`

GetBitDepthOk returns a tuple with the BitDepth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBitDepth

`func (o *OutputConfig) SetBitDepth(v BitDepth)`

SetBitDepth sets BitDepth field to given value.

### HasBitDepth

`func (o *OutputConfig) HasBitDepth() bool`

HasBitDepth returns a boolean if a field has been set.

### GetScanMode

`func (o *OutputConfig) GetScanMode() ScanMode`

GetScanMode returns the ScanMode field if non-nil, zero value otherwise.

### GetScanModeOk

`func (o *OutputConfig) GetScanModeOk() (*ScanMode, bool)`

GetScanModeOk returns a tuple with the ScanMode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetScanMode

`func (o *OutputConfig) SetScanMode(v ScanMode)`

SetScanMode sets ScanMode field to given value.

### HasScanMode

`func (o *OutputConfig) HasScanMode() bool`

HasScanMode returns a boolean if a field has been set.

### GetColorimetry

`func (o *OutputConfig) GetColorimetry() Colorimetry`

GetColorimetry returns the Colorimetry field if non-nil, zero value otherwise.

### GetColorimetryOk

`func (o *OutputConfig) GetColorimetryOk() (*Colorimetry, bool)`

GetColorimetryOk returns a tuple with the Colorimetry field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetColorimetry

`func (o *OutputConfig) SetColorimetry(v Colorimetry)`

SetColorimetry sets Colorimetry field to given value.

### HasColorimetry

`func (o *OutputConfig) HasColorimetry() bool`

HasColorimetry returns a boolean if a field has been set.

### GetTransfer

`func (o *OutputConfig) GetTransfer() Transfer`

GetTransfer returns the Transfer field if non-nil, zero value otherwise.

### GetTransferOk

`func (o *OutputConfig) GetTransferOk() (*Transfer, bool)`

GetTransferOk returns a tuple with the Transfer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransfer

`func (o *OutputConfig) SetTransfer(v Transfer)`

SetTransfer sets Transfer field to given value.

### HasTransfer

`func (o *OutputConfig) HasTransfer() bool`

HasTransfer returns a boolean if a field has been set.

### GetFormat

`func (o *OutputConfig) GetFormat() VideoFormat`

GetFormat returns the Format field if non-nil, zero value otherwise.

### GetFormatOk

`func (o *OutputConfig) GetFormatOk() (*VideoFormat, bool)`

GetFormatOk returns a tuple with the Format field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFormat

`func (o *OutputConfig) SetFormat(v VideoFormat)`

SetFormat sets Format field to given value.

### HasFormat

`func (o *OutputConfig) HasFormat() bool`

HasFormat returns a boolean if a field has been set.

### GetSdiFormat

`func (o *OutputConfig) GetSdiFormat() VideoFormat`

GetSdiFormat returns the SdiFormat field if non-nil, zero value otherwise.

### GetSdiFormatOk

`func (o *OutputConfig) GetSdiFormatOk() (*VideoFormat, bool)`

GetSdiFormatOk returns a tuple with the SdiFormat field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSdiFormat

`func (o *OutputConfig) SetSdiFormat(v VideoFormat)`

SetSdiFormat sets SdiFormat field to given value.

### HasSdiFormat

`func (o *OutputConfig) HasSdiFormat() bool`

HasSdiFormat returns a boolean if a field has been set.

### GetSdiDownConvert

`func (o *OutputConfig) GetSdiDownConvert() DownConvert`

GetSdiDownConvert returns the SdiDownConvert field if non-nil, zero value otherwise.

### GetSdiDownConvertOk

`func (o *OutputConfig) GetSdiDownConvertOk() (*DownConvert, bool)`

GetSdiDownConvertOk returns a tuple with the SdiDownConvert field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSdiDownConvert

`func (o *OutputConfig) SetSdiDownConvert(v DownConvert)`

SetSdiDownConvert sets SdiDownConvert field to given value.

### HasSdiDownConvert

`func (o *OutputConfig) HasSdiDownConvert() bool`

HasSdiDownConvert returns a boolean if a field has been set.

### GetSdiMode3g

`func (o *OutputConfig) GetSdiMode3g() SdiMode3g`

GetSdiMode3g returns the SdiMode3g field if non-nil, zero value otherwise.

### GetSdiMode3gOk

`func (o *OutputConfig) GetSdiMode3gOk() (*SdiMode3g, bool)`

GetSdiMode3gOk returns a tuple with the SdiMode3g field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSdiMode3g

`func (o *OutputConfig) SetSdiMode3g(v SdiMode3g)`

SetSdiMode3g sets SdiMode3g field to given value.

### HasSdiMode3g

`func (o *OutputConfig) HasSdiMode3g() bool`

HasSdiMode3g returns a boolean if a field has been set.

### GetHdmiFormat

`func (o *OutputConfig) GetHdmiFormat() VideoFormat`

GetHdmiFormat returns the HdmiFormat field if non-nil, zero value otherwise.

### GetHdmiFormatOk

`func (o *OutputConfig) GetHdmiFormatOk() (*VideoFormat, bool)`

GetHdmiFormatOk returns a tuple with the HdmiFormat field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdmiFormat

`func (o *OutputConfig) SetHdmiFormat(v VideoFormat)`

SetHdmiFormat sets HdmiFormat field to given value.

### HasHdmiFormat

`func (o *OutputConfig) HasHdmiFormat() bool`

HasHdmiFormat returns a boolean if a field has been set.

### GetHdmiConnection

`func (o *OutputConfig) GetHdmiConnection() Connection`

GetHdmiConnection returns the HdmiConnection field if non-nil, zero value otherwise.

### GetHdmiConnectionOk

`func (o *OutputConfig) GetHdmiConnectionOk() (*Connection, bool)`

GetHdmiConnectionOk returns a tuple with the HdmiConnection field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdmiConnection

`func (o *OutputConfig) SetHdmiConnection(v Connection)`

SetHdmiConnection sets HdmiConnection field to given value.

### HasHdmiConnection

`func (o *OutputConfig) HasHdmiConnection() bool`

HasHdmiConnection returns a boolean if a field has been set.

### GetHdmiCrop4k2k

`func (o *OutputConfig) GetHdmiCrop4k2k() Crop4k2k`

GetHdmiCrop4k2k returns the HdmiCrop4k2k field if non-nil, zero value otherwise.

### GetHdmiCrop4k2kOk

`func (o *OutputConfig) GetHdmiCrop4k2kOk() (*Crop4k2k, bool)`

GetHdmiCrop4k2kOk returns a tuple with the HdmiCrop4k2k field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdmiCrop4k2k

`func (o *OutputConfig) SetHdmiCrop4k2k(v Crop4k2k)`

SetHdmiCrop4k2k sets HdmiCrop4k2k field to given value.

### HasHdmiCrop4k2k

`func (o *OutputConfig) HasHdmiCrop4k2k() bool`

HasHdmiCrop4k2k returns a boolean if a field has been set.

### GetHdmiDownConvert

`func (o *OutputConfig) GetHdmiDownConvert() DownConvert`

GetHdmiDownConvert returns the HdmiDownConvert field if non-nil, zero value otherwise.

### GetHdmiDownConvertOk

`func (o *OutputConfig) GetHdmiDownConvertOk() (*DownConvert, bool)`

GetHdmiDownConvertOk returns a tuple with the HdmiDownConvert field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdmiDownConvert

`func (o *OutputConfig) SetHdmiDownConvert(v DownConvert)`

SetHdmiDownConvert sets HdmiDownConvert field to given value.

### HasHdmiDownConvert

`func (o *OutputConfig) HasHdmiDownConvert() bool`

HasHdmiDownConvert returns a boolean if a field has been set.

### GetHdmiColorSpace

`func (o *OutputConfig) GetHdmiColorSpace() ColorSpace`

GetHdmiColorSpace returns the HdmiColorSpace field if non-nil, zero value otherwise.

### GetHdmiColorSpaceOk

`func (o *OutputConfig) GetHdmiColorSpaceOk() (*ColorSpace, bool)`

GetHdmiColorSpaceOk returns a tuple with the HdmiColorSpace field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdmiColorSpace

`func (o *OutputConfig) SetHdmiColorSpace(v ColorSpace)`

SetHdmiColorSpace sets HdmiColorSpace field to given value.

### HasHdmiColorSpace

`func (o *OutputConfig) HasHdmiColorSpace() bool`

HasHdmiColorSpace returns a boolean if a field has been set.

### GetHdmiBitDepth

`func (o *OutputConfig) GetHdmiBitDepth() BitDepth`

GetHdmiBitDepth returns the HdmiBitDepth field if non-nil, zero value otherwise.

### GetHdmiBitDepthOk

`func (o *OutputConfig) GetHdmiBitDepthOk() (*BitDepth, bool)`

GetHdmiBitDepthOk returns a tuple with the HdmiBitDepth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdmiBitDepth

`func (o *OutputConfig) SetHdmiBitDepth(v BitDepth)`

SetHdmiBitDepth sets HdmiBitDepth field to given value.

### HasHdmiBitDepth

`func (o *OutputConfig) HasHdmiBitDepth() bool`

HasHdmiBitDepth returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


