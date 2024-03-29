/*
OpenAPI ColorBox

This is a REST API for the AJA ColorBox product.

The version of the OpenAPI document: 1.0.0
Contact: support@aja.com

NOTE: This code is auto generated by OpenAPI Generator (https://openapi-generator.tech).
      Do not edit this code manually.

Copyright (C) 2020-2022 AJA Video Systems Inc.  All rights reserved.
*/

package openapi

import (
	"encoding/json"
)

// OutputConfig struct for OutputConfig
type OutputConfig struct {
	ColorSpace *ColorSpace `json:"colorSpace,omitempty"`
	RgbRange *RgbRange `json:"rgbRange,omitempty"`
	BitDepth *BitDepth `json:"bitDepth,omitempty"`
	ScanMode *ScanMode `json:"scanMode,omitempty"`
	Colorimetry *Colorimetry `json:"colorimetry,omitempty"`
	Transfer *Transfer `json:"transfer,omitempty"`
	Format *VideoFormat `json:"format,omitempty"`
	SdiMode3g *SdiMode3g `json:"sdiMode3g,omitempty"`
	HdmiCrop4k2k *Crop4k2k `json:"hdmiCrop4k2k,omitempty"`
	HdmiConnection *Connection `json:"hdmiConnection,omitempty"`
}

// NewOutputConfig instantiates a new OutputConfig object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOutputConfig() *OutputConfig {
	this := OutputConfig{}
	return &this
}

// NewOutputConfigWithDefaults instantiates a new OutputConfig object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOutputConfigWithDefaults() *OutputConfig {
	this := OutputConfig{}
	return &this
}

// GetColorSpace returns the ColorSpace field value if set, zero value otherwise.
func (o *OutputConfig) GetColorSpace() ColorSpace {
	if o == nil || o.ColorSpace == nil {
		var ret ColorSpace
		return ret
	}
	return *o.ColorSpace
}

// GetColorSpaceOk returns a tuple with the ColorSpace field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OutputConfig) GetColorSpaceOk() (*ColorSpace, bool) {
	if o == nil || o.ColorSpace == nil {
		return nil, false
	}
	return o.ColorSpace, true
}



// HasColorSpace returns a boolean if a field has been set.
func (o *OutputConfig) HasColorSpace() bool {
	if o != nil && o.ColorSpace != nil {
		return true
	}

	return false
}

// SetColorSpace gets a reference to the given ColorSpace and assigns it to the ColorSpace field.
func (o *OutputConfig) SetColorSpace(v ColorSpace) {
	tmp := v
	o.ColorSpace = &tmp
}

// GetRgbRange returns the RgbRange field value if set, zero value otherwise.
func (o *OutputConfig) GetRgbRange() RgbRange {
	if o == nil || o.RgbRange == nil {
		var ret RgbRange
		return ret
	}
	return *o.RgbRange
}

// GetRgbRangeOk returns a tuple with the RgbRange field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OutputConfig) GetRgbRangeOk() (*RgbRange, bool) {
	if o == nil || o.RgbRange == nil {
		return nil, false
	}
	return o.RgbRange, true
}



// HasRgbRange returns a boolean if a field has been set.
func (o *OutputConfig) HasRgbRange() bool {
	if o != nil && o.RgbRange != nil {
		return true
	}

	return false
}

// SetRgbRange gets a reference to the given RgbRange and assigns it to the RgbRange field.
func (o *OutputConfig) SetRgbRange(v RgbRange) {
	tmp := v
	o.RgbRange = &tmp
}

// GetBitDepth returns the BitDepth field value if set, zero value otherwise.
func (o *OutputConfig) GetBitDepth() BitDepth {
	if o == nil || o.BitDepth == nil {
		var ret BitDepth
		return ret
	}
	return *o.BitDepth
}

// GetBitDepthOk returns a tuple with the BitDepth field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OutputConfig) GetBitDepthOk() (*BitDepth, bool) {
	if o == nil || o.BitDepth == nil {
		return nil, false
	}
	return o.BitDepth, true
}



// HasBitDepth returns a boolean if a field has been set.
func (o *OutputConfig) HasBitDepth() bool {
	if o != nil && o.BitDepth != nil {
		return true
	}

	return false
}

// SetBitDepth gets a reference to the given BitDepth and assigns it to the BitDepth field.
func (o *OutputConfig) SetBitDepth(v BitDepth) {
	tmp := v
	o.BitDepth = &tmp
}

// GetScanMode returns the ScanMode field value if set, zero value otherwise.
func (o *OutputConfig) GetScanMode() ScanMode {
	if o == nil || o.ScanMode == nil {
		var ret ScanMode
		return ret
	}
	return *o.ScanMode
}

// GetScanModeOk returns a tuple with the ScanMode field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OutputConfig) GetScanModeOk() (*ScanMode, bool) {
	if o == nil || o.ScanMode == nil {
		return nil, false
	}
	return o.ScanMode, true
}



// HasScanMode returns a boolean if a field has been set.
func (o *OutputConfig) HasScanMode() bool {
	if o != nil && o.ScanMode != nil {
		return true
	}

	return false
}

// SetScanMode gets a reference to the given ScanMode and assigns it to the ScanMode field.
func (o *OutputConfig) SetScanMode(v ScanMode) {
	tmp := v
	o.ScanMode = &tmp
}

// GetColorimetry returns the Colorimetry field value if set, zero value otherwise.
func (o *OutputConfig) GetColorimetry() Colorimetry {
	if o == nil || o.Colorimetry == nil {
		var ret Colorimetry
		return ret
	}
	return *o.Colorimetry
}

// GetColorimetryOk returns a tuple with the Colorimetry field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OutputConfig) GetColorimetryOk() (*Colorimetry, bool) {
	if o == nil || o.Colorimetry == nil {
		return nil, false
	}
	return o.Colorimetry, true
}



// HasColorimetry returns a boolean if a field has been set.
func (o *OutputConfig) HasColorimetry() bool {
	if o != nil && o.Colorimetry != nil {
		return true
	}

	return false
}

// SetColorimetry gets a reference to the given Colorimetry and assigns it to the Colorimetry field.
func (o *OutputConfig) SetColorimetry(v Colorimetry) {
	tmp := v
	o.Colorimetry = &tmp
}

// GetTransfer returns the Transfer field value if set, zero value otherwise.
func (o *OutputConfig) GetTransfer() Transfer {
	if o == nil || o.Transfer == nil {
		var ret Transfer
		return ret
	}
	return *o.Transfer
}

// GetTransferOk returns a tuple with the Transfer field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OutputConfig) GetTransferOk() (*Transfer, bool) {
	if o == nil || o.Transfer == nil {
		return nil, false
	}
	return o.Transfer, true
}



// HasTransfer returns a boolean if a field has been set.
func (o *OutputConfig) HasTransfer() bool {
	if o != nil && o.Transfer != nil {
		return true
	}

	return false
}

// SetTransfer gets a reference to the given Transfer and assigns it to the Transfer field.
func (o *OutputConfig) SetTransfer(v Transfer) {
	tmp := v
	o.Transfer = &tmp
}

// GetFormat returns the Format field value if set, zero value otherwise.
func (o *OutputConfig) GetFormat() VideoFormat {
	if o == nil || o.Format == nil {
		var ret VideoFormat
		return ret
	}
	return *o.Format
}

// GetFormatOk returns a tuple with the Format field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OutputConfig) GetFormatOk() (*VideoFormat, bool) {
	if o == nil || o.Format == nil {
		return nil, false
	}
	return o.Format, true
}



// HasFormat returns a boolean if a field has been set.
func (o *OutputConfig) HasFormat() bool {
	if o != nil && o.Format != nil {
		return true
	}

	return false
}

// SetFormat gets a reference to the given VideoFormat and assigns it to the Format field.
func (o *OutputConfig) SetFormat(v VideoFormat) {
	tmp := v
	o.Format = &tmp
}

// GetSdiMode3g returns the SdiMode3g field value if set, zero value otherwise.
func (o *OutputConfig) GetSdiMode3g() SdiMode3g {
	if o == nil || o.SdiMode3g == nil {
		var ret SdiMode3g
		return ret
	}
	return *o.SdiMode3g
}

// GetSdiMode3gOk returns a tuple with the SdiMode3g field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OutputConfig) GetSdiMode3gOk() (*SdiMode3g, bool) {
	if o == nil || o.SdiMode3g == nil {
		return nil, false
	}
	return o.SdiMode3g, true
}



// HasSdiMode3g returns a boolean if a field has been set.
func (o *OutputConfig) HasSdiMode3g() bool {
	if o != nil && o.SdiMode3g != nil {
		return true
	}

	return false
}

// SetSdiMode3g gets a reference to the given SdiMode3g and assigns it to the SdiMode3g field.
func (o *OutputConfig) SetSdiMode3g(v SdiMode3g) {
	tmp := v
	o.SdiMode3g = &tmp
}

// GetHdmiCrop4k2k returns the HdmiCrop4k2k field value if set, zero value otherwise.
func (o *OutputConfig) GetHdmiCrop4k2k() Crop4k2k {
	if o == nil || o.HdmiCrop4k2k == nil {
		var ret Crop4k2k
		return ret
	}
	return *o.HdmiCrop4k2k
}

// GetHdmiCrop4k2kOk returns a tuple with the HdmiCrop4k2k field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OutputConfig) GetHdmiCrop4k2kOk() (*Crop4k2k, bool) {
	if o == nil || o.HdmiCrop4k2k == nil {
		return nil, false
	}
	return o.HdmiCrop4k2k, true
}



// HasHdmiCrop4k2k returns a boolean if a field has been set.
func (o *OutputConfig) HasHdmiCrop4k2k() bool {
	if o != nil && o.HdmiCrop4k2k != nil {
		return true
	}

	return false
}

// SetHdmiCrop4k2k gets a reference to the given Crop4k2k and assigns it to the HdmiCrop4k2k field.
func (o *OutputConfig) SetHdmiCrop4k2k(v Crop4k2k) {
	tmp := v
	o.HdmiCrop4k2k = &tmp
}

// GetHdmiConnection returns the HdmiConnection field value if set, zero value otherwise.
func (o *OutputConfig) GetHdmiConnection() Connection {
	if o == nil || o.HdmiConnection == nil {
		var ret Connection
		return ret
	}
	return *o.HdmiConnection
}

// GetHdmiConnectionOk returns a tuple with the HdmiConnection field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OutputConfig) GetHdmiConnectionOk() (*Connection, bool) {
	if o == nil || o.HdmiConnection == nil {
		return nil, false
	}
	return o.HdmiConnection, true
}



// HasHdmiConnection returns a boolean if a field has been set.
func (o *OutputConfig) HasHdmiConnection() bool {
	if o != nil && o.HdmiConnection != nil {
		return true
	}

	return false
}

// SetHdmiConnection gets a reference to the given Connection and assigns it to the HdmiConnection field.
func (o *OutputConfig) SetHdmiConnection(v Connection) {
	tmp := v
	o.HdmiConnection = &tmp
}

func (o OutputConfig) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.ColorSpace != nil {
		toSerialize["colorSpace"] = o.ColorSpace
	}
	if o.RgbRange != nil {
		toSerialize["rgbRange"] = o.RgbRange
	}
	if o.BitDepth != nil {
		toSerialize["bitDepth"] = o.BitDepth
	}
	if o.ScanMode != nil {
		toSerialize["scanMode"] = o.ScanMode
	}
	if o.Colorimetry != nil {
		toSerialize["colorimetry"] = o.Colorimetry
	}
	if o.Transfer != nil {
		toSerialize["transfer"] = o.Transfer
	}
	if o.Format != nil {
		toSerialize["format"] = o.Format
	}
	if o.SdiMode3g != nil {
		toSerialize["sdiMode3g"] = o.SdiMode3g
	}
	if o.HdmiCrop4k2k != nil {
		toSerialize["hdmiCrop4k2k"] = o.HdmiCrop4k2k
	}
	if o.HdmiConnection != nil {
		toSerialize["hdmiConnection"] = o.HdmiConnection
	}
	return json.Marshal(toSerialize)
}


func (o *OutputConfig) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	return valueChanged
}

type NullableOutputConfig struct {
	value *OutputConfig
	isSet bool
}

func (v NullableOutputConfig) Get() *OutputConfig {
	return v.value
}

func (v *NullableOutputConfig) Set(val *OutputConfig) {
	v.value = val
	v.isSet = true
}

func (v NullableOutputConfig) IsSet() bool {
	return v.isSet
}

func (v *NullableOutputConfig) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOutputConfig(val *OutputConfig) *NullableOutputConfig {
	return &NullableOutputConfig{value: val, isSet: true}
}

func (v NullableOutputConfig) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOutputConfig) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


