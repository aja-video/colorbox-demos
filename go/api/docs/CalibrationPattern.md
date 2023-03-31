# CalibrationPattern

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**BgColor** | Pointer to [**PatternColor**](PatternColor.md) |  | [optional] 
**FgColor** | Pointer to [**PatternColor**](PatternColor.md) |  | [optional] 
**FgRect** | Pointer to [**PatternRect**](PatternRect.md) |  | [optional] 
**Stamp** | Pointer to **string** | For internal use only | [optional] 

## Methods

### NewCalibrationPattern

`func NewCalibrationPattern() *CalibrationPattern`

NewCalibrationPattern instantiates a new CalibrationPattern object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCalibrationPatternWithDefaults

`func NewCalibrationPatternWithDefaults() *CalibrationPattern`

NewCalibrationPatternWithDefaults instantiates a new CalibrationPattern object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetBgColor

`func (o *CalibrationPattern) GetBgColor() PatternColor`

GetBgColor returns the BgColor field if non-nil, zero value otherwise.

### GetBgColorOk

`func (o *CalibrationPattern) GetBgColorOk() (*PatternColor, bool)`

GetBgColorOk returns a tuple with the BgColor field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBgColor

`func (o *CalibrationPattern) SetBgColor(v PatternColor)`

SetBgColor sets BgColor field to given value.

### HasBgColor

`func (o *CalibrationPattern) HasBgColor() bool`

HasBgColor returns a boolean if a field has been set.

### GetFgColor

`func (o *CalibrationPattern) GetFgColor() PatternColor`

GetFgColor returns the FgColor field if non-nil, zero value otherwise.

### GetFgColorOk

`func (o *CalibrationPattern) GetFgColorOk() (*PatternColor, bool)`

GetFgColorOk returns a tuple with the FgColor field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFgColor

`func (o *CalibrationPattern) SetFgColor(v PatternColor)`

SetFgColor sets FgColor field to given value.

### HasFgColor

`func (o *CalibrationPattern) HasFgColor() bool`

HasFgColor returns a boolean if a field has been set.

### GetFgRect

`func (o *CalibrationPattern) GetFgRect() PatternRect`

GetFgRect returns the FgRect field if non-nil, zero value otherwise.

### GetFgRectOk

`func (o *CalibrationPattern) GetFgRectOk() (*PatternRect, bool)`

GetFgRectOk returns a tuple with the FgRect field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFgRect

`func (o *CalibrationPattern) SetFgRect(v PatternRect)`

SetFgRect sets FgRect field to given value.

### HasFgRect

`func (o *CalibrationPattern) HasFgRect() bool`

HasFgRect returns a boolean if a field has been set.

### GetStamp

`func (o *CalibrationPattern) GetStamp() string`

GetStamp returns the Stamp field if non-nil, zero value otherwise.

### GetStampOk

`func (o *CalibrationPattern) GetStampOk() (*string, bool)`

GetStampOk returns a tuple with the Stamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStamp

`func (o *CalibrationPattern) SetStamp(v string)`

SetStamp sets Stamp field to given value.

### HasStamp

`func (o *CalibrationPattern) HasStamp() bool`

HasStamp returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


