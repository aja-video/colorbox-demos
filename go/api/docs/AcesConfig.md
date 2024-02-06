# AcesConfig

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Enabled** | Pointer to **bool** | true if stage is enabled else disabled (unity passthru) | [optional] 
**Mode** | Pointer to [**AcesMode**](AcesMode.md) |  | [optional] [default to ACESMODE_AMF]
**AmfLibraryEntry** | Pointer to **int32** | library entry number, zero is unity bypass | [optional] 
**OcioSource** | Pointer to [**OcioSource**](OcioSource.md) |  | [optional] [default to OCIOSOURCE_CAMERA_REC_709]
**OcioDisplayView** | Pointer to [**OcioDisplayView**](OcioDisplayView.md) |  | [optional] [default to OCIODISPLAYVIEW_REC_1886_REC_709___DISPLAY_ACES_1_0___SDR_VIDEO]
**EnableArriWVOLogC4Decoder** | Pointer to **bool** |  | [optional] [default to false]

## Methods

### NewAcesConfig

`func NewAcesConfig() *AcesConfig`

NewAcesConfig instantiates a new AcesConfig object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAcesConfigWithDefaults

`func NewAcesConfigWithDefaults() *AcesConfig`

NewAcesConfigWithDefaults instantiates a new AcesConfig object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetEnabled

`func (o *AcesConfig) GetEnabled() bool`

GetEnabled returns the Enabled field if non-nil, zero value otherwise.

### GetEnabledOk

`func (o *AcesConfig) GetEnabledOk() (*bool, bool)`

GetEnabledOk returns a tuple with the Enabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnabled

`func (o *AcesConfig) SetEnabled(v bool)`

SetEnabled sets Enabled field to given value.

### HasEnabled

`func (o *AcesConfig) HasEnabled() bool`

HasEnabled returns a boolean if a field has been set.

### GetMode

`func (o *AcesConfig) GetMode() AcesMode`

GetMode returns the Mode field if non-nil, zero value otherwise.

### GetModeOk

`func (o *AcesConfig) GetModeOk() (*AcesMode, bool)`

GetModeOk returns a tuple with the Mode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMode

`func (o *AcesConfig) SetMode(v AcesMode)`

SetMode sets Mode field to given value.

### HasMode

`func (o *AcesConfig) HasMode() bool`

HasMode returns a boolean if a field has been set.

### GetAmfLibraryEntry

`func (o *AcesConfig) GetAmfLibraryEntry() int32`

GetAmfLibraryEntry returns the AmfLibraryEntry field if non-nil, zero value otherwise.

### GetAmfLibraryEntryOk

`func (o *AcesConfig) GetAmfLibraryEntryOk() (*int32, bool)`

GetAmfLibraryEntryOk returns a tuple with the AmfLibraryEntry field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAmfLibraryEntry

`func (o *AcesConfig) SetAmfLibraryEntry(v int32)`

SetAmfLibraryEntry sets AmfLibraryEntry field to given value.

### HasAmfLibraryEntry

`func (o *AcesConfig) HasAmfLibraryEntry() bool`

HasAmfLibraryEntry returns a boolean if a field has been set.

### GetOcioSource

`func (o *AcesConfig) GetOcioSource() OcioSource`

GetOcioSource returns the OcioSource field if non-nil, zero value otherwise.

### GetOcioSourceOk

`func (o *AcesConfig) GetOcioSourceOk() (*OcioSource, bool)`

GetOcioSourceOk returns a tuple with the OcioSource field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOcioSource

`func (o *AcesConfig) SetOcioSource(v OcioSource)`

SetOcioSource sets OcioSource field to given value.

### HasOcioSource

`func (o *AcesConfig) HasOcioSource() bool`

HasOcioSource returns a boolean if a field has been set.

### GetOcioDisplayView

`func (o *AcesConfig) GetOcioDisplayView() OcioDisplayView`

GetOcioDisplayView returns the OcioDisplayView field if non-nil, zero value otherwise.

### GetOcioDisplayViewOk

`func (o *AcesConfig) GetOcioDisplayViewOk() (*OcioDisplayView, bool)`

GetOcioDisplayViewOk returns a tuple with the OcioDisplayView field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOcioDisplayView

`func (o *AcesConfig) SetOcioDisplayView(v OcioDisplayView)`

SetOcioDisplayView sets OcioDisplayView field to given value.

### HasOcioDisplayView

`func (o *AcesConfig) HasOcioDisplayView() bool`

HasOcioDisplayView returns a boolean if a field has been set.

### GetEnableArriWVOLogC4Decoder

`func (o *AcesConfig) GetEnableArriWVOLogC4Decoder() bool`

GetEnableArriWVOLogC4Decoder returns the EnableArriWVOLogC4Decoder field if non-nil, zero value otherwise.

### GetEnableArriWVOLogC4DecoderOk

`func (o *AcesConfig) GetEnableArriWVOLogC4DecoderOk() (*bool, bool)`

GetEnableArriWVOLogC4DecoderOk returns a tuple with the EnableArriWVOLogC4Decoder field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnableArriWVOLogC4Decoder

`func (o *AcesConfig) SetEnableArriWVOLogC4Decoder(v bool)`

SetEnableArriWVOLogC4Decoder sets EnableArriWVOLogC4Decoder field to given value.

### HasEnableArriWVOLogC4Decoder

`func (o *AcesConfig) HasEnableArriWVOLogC4Decoder() bool`

HasEnableArriWVOLogC4Decoder returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


