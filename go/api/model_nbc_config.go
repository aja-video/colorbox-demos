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

// NbcConfig struct for NbcConfig
type NbcConfig struct {
	Lut1d1 *Stage `json:"lut1d_1,omitempty"`
	M3x32 *Stage `json:"m3x3_2,omitempty"`
	Lut3d1 *Stage `json:"lut3d_1,omitempty"`
}

// NewNbcConfig instantiates a new NbcConfig object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewNbcConfig() *NbcConfig {
	this := NbcConfig{}
	return &this
}

// NewNbcConfigWithDefaults instantiates a new NbcConfig object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewNbcConfigWithDefaults() *NbcConfig {
	this := NbcConfig{}
	return &this
}

// GetLut1d1 returns the Lut1d1 field value if set, zero value otherwise.
func (o *NbcConfig) GetLut1d1() Stage {
	if o == nil || o.Lut1d1 == nil {
		var ret Stage
		return ret
	}
	return *o.Lut1d1
}

// GetLut1d1Ok returns a tuple with the Lut1d1 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *NbcConfig) GetLut1d1Ok() (*Stage, bool) {
	if o == nil || o.Lut1d1 == nil {
		return nil, false
	}
	return o.Lut1d1, true
}



// HasLut1d1 returns a boolean if a field has been set.
func (o *NbcConfig) HasLut1d1() bool {
	if o != nil && o.Lut1d1 != nil {
		return true
	}

	return false
}

// SetLut1d1 gets a reference to the given Stage and assigns it to the Lut1d1 field.
func (o *NbcConfig) SetLut1d1(v Stage) {
	tmp := v
	o.Lut1d1 = &tmp
}

// GetM3x32 returns the M3x32 field value if set, zero value otherwise.
func (o *NbcConfig) GetM3x32() Stage {
	if o == nil || o.M3x32 == nil {
		var ret Stage
		return ret
	}
	return *o.M3x32
}

// GetM3x32Ok returns a tuple with the M3x32 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *NbcConfig) GetM3x32Ok() (*Stage, bool) {
	if o == nil || o.M3x32 == nil {
		return nil, false
	}
	return o.M3x32, true
}



// HasM3x32 returns a boolean if a field has been set.
func (o *NbcConfig) HasM3x32() bool {
	if o != nil && o.M3x32 != nil {
		return true
	}

	return false
}

// SetM3x32 gets a reference to the given Stage and assigns it to the M3x32 field.
func (o *NbcConfig) SetM3x32(v Stage) {
	tmp := v
	o.M3x32 = &tmp
}

// GetLut3d1 returns the Lut3d1 field value if set, zero value otherwise.
func (o *NbcConfig) GetLut3d1() Stage {
	if o == nil || o.Lut3d1 == nil {
		var ret Stage
		return ret
	}
	return *o.Lut3d1
}

// GetLut3d1Ok returns a tuple with the Lut3d1 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *NbcConfig) GetLut3d1Ok() (*Stage, bool) {
	if o == nil || o.Lut3d1 == nil {
		return nil, false
	}
	return o.Lut3d1, true
}



// HasLut3d1 returns a boolean if a field has been set.
func (o *NbcConfig) HasLut3d1() bool {
	if o != nil && o.Lut3d1 != nil {
		return true
	}

	return false
}

// SetLut3d1 gets a reference to the given Stage and assigns it to the Lut3d1 field.
func (o *NbcConfig) SetLut3d1(v Stage) {
	tmp := v
	o.Lut3d1 = &tmp
}

func (o NbcConfig) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Lut1d1 != nil {
		toSerialize["lut1d_1"] = o.Lut1d1
	}
	if o.M3x32 != nil {
		toSerialize["m3x3_2"] = o.M3x32
	}
	if o.Lut3d1 != nil {
		toSerialize["lut3d_1"] = o.Lut3d1
	}
	return json.Marshal(toSerialize)
}


func (o *NbcConfig) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	return valueChanged
}

type NullableNbcConfig struct {
	value *NbcConfig
	isSet bool
}

func (v NullableNbcConfig) Get() *NbcConfig {
	return v.value
}

func (v *NullableNbcConfig) Set(val *NbcConfig) {
	v.value = val
	v.isSet = true
}

func (v NullableNbcConfig) IsSet() bool {
	return v.isSet
}

func (v *NullableNbcConfig) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableNbcConfig(val *NbcConfig) *NullableNbcConfig {
	return &NullableNbcConfig{value: val, isSet: true}
}

func (v NullableNbcConfig) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableNbcConfig) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


