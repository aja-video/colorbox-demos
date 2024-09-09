# AcesConfig

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Enabled** | Pointer to **bool** | true if stage is enabled else disabled (unity passthru) | [optional] 
**AmfLibraryEntry** | Pointer to **int32** | library entry number, zero is unity bypass | [optional] 
**AcesIdt** | Pointer to [**AcesIdt**](AcesIdt.md) |  | [optional] [default to ACESIDT_ARRI_LOG_C3__EI800]
**AcesOdt** | Pointer to [**AcesOdt**](AcesOdt.md) |  | [optional] [default to ACESODT__1886_REC_709___DISPLAY_ACES_1_0___SDR_VIDEO]
**AcesIdtOverride** | Pointer to **bool** |  | [optional] [default to false]
**AcesOdtOverride** | Pointer to **bool** |  | [optional] [default to false]
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

### GetAcesIdt

`func (o *AcesConfig) GetAcesIdt() AcesIdt`

GetAcesIdt returns the AcesIdt field if non-nil, zero value otherwise.

### GetAcesIdtOk

`func (o *AcesConfig) GetAcesIdtOk() (*AcesIdt, bool)`

GetAcesIdtOk returns a tuple with the AcesIdt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAcesIdt

`func (o *AcesConfig) SetAcesIdt(v AcesIdt)`

SetAcesIdt sets AcesIdt field to given value.

### HasAcesIdt

`func (o *AcesConfig) HasAcesIdt() bool`

HasAcesIdt returns a boolean if a field has been set.

### GetAcesOdt

`func (o *AcesConfig) GetAcesOdt() AcesOdt`

GetAcesOdt returns the AcesOdt field if non-nil, zero value otherwise.

### GetAcesOdtOk

`func (o *AcesConfig) GetAcesOdtOk() (*AcesOdt, bool)`

GetAcesOdtOk returns a tuple with the AcesOdt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAcesOdt

`func (o *AcesConfig) SetAcesOdt(v AcesOdt)`

SetAcesOdt sets AcesOdt field to given value.

### HasAcesOdt

`func (o *AcesConfig) HasAcesOdt() bool`

HasAcesOdt returns a boolean if a field has been set.

### GetAcesIdtOverride

`func (o *AcesConfig) GetAcesIdtOverride() bool`

GetAcesIdtOverride returns the AcesIdtOverride field if non-nil, zero value otherwise.

### GetAcesIdtOverrideOk

`func (o *AcesConfig) GetAcesIdtOverrideOk() (*bool, bool)`

GetAcesIdtOverrideOk returns a tuple with the AcesIdtOverride field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAcesIdtOverride

`func (o *AcesConfig) SetAcesIdtOverride(v bool)`

SetAcesIdtOverride sets AcesIdtOverride field to given value.

### HasAcesIdtOverride

`func (o *AcesConfig) HasAcesIdtOverride() bool`

HasAcesIdtOverride returns a boolean if a field has been set.

### GetAcesOdtOverride

`func (o *AcesConfig) GetAcesOdtOverride() bool`

GetAcesOdtOverride returns the AcesOdtOverride field if non-nil, zero value otherwise.

### GetAcesOdtOverrideOk

`func (o *AcesConfig) GetAcesOdtOverrideOk() (*bool, bool)`

GetAcesOdtOverrideOk returns a tuple with the AcesOdtOverride field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAcesOdtOverride

`func (o *AcesConfig) SetAcesOdtOverride(v bool)`

SetAcesOdtOverride sets AcesOdtOverride field to given value.

### HasAcesOdtOverride

`func (o *AcesConfig) HasAcesOdtOverride() bool`

HasAcesOdtOverride returns a boolean if a field has been set.

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


