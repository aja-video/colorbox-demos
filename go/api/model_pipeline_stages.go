/*
OpenAPI Soji

This is a REST API for the AJA Soji product.

The version of the OpenAPI document: 1.0.0
Contact: support@aja.com

NOTE: This code is auto generated by OpenAPI Generator (https://openapi-generator.tech).
      Do not edit this code manually.

Copyright (C) 2020-2022 AJA Video Systems, Inc.  All rights reserved.
*/

package openapi

import (
	"encoding/json"
)

// PipelineStages struct for PipelineStages
type PipelineStages struct {
	Lut1d1 *Stage `json:"lut1d_1,omitempty"`
	M3x32 *Stage `json:"m3x3_2,omitempty"`
	Lut1d2 *Stage `json:"lut1d_2,omitempty"`
	Lut3d1 *Stage `json:"lut3d_1,omitempty"`
	Lut1d3 *Stage `json:"lut1d_3,omitempty"`
	M3x33 *Stage `json:"m3x3_3,omitempty"`
	Lut1d4 *Stage `json:"lut1d_4,omitempty"`
	PipelineRange *PipelineRange `json:"pipelineRange,omitempty"`
}

// NewPipelineStages instantiates a new PipelineStages object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPipelineStages() *PipelineStages {
	this := PipelineStages{}
	var pipelineRange PipelineRange = PIPELINERANGE_SMPTE_FULL
	this.PipelineRange = &pipelineRange
	return &this
}

// NewPipelineStagesWithDefaults instantiates a new PipelineStages object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPipelineStagesWithDefaults() *PipelineStages {
	this := PipelineStages{}
	var pipelineRange PipelineRange = PIPELINERANGE_SMPTE_FULL
	this.PipelineRange = &pipelineRange
	return &this
}

// GetLut1d1 returns the Lut1d1 field value if set, zero value otherwise.
func (o *PipelineStages) GetLut1d1() Stage {
	if o == nil || o.Lut1d1 == nil {
		var ret Stage
		return ret
	}
	return *o.Lut1d1
}

// GetLut1d1Ok returns a tuple with the Lut1d1 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PipelineStages) GetLut1d1Ok() (*Stage, bool) {
	if o == nil || o.Lut1d1 == nil {
		return nil, false
	}
	return o.Lut1d1, true
}



// HasLut1d1 returns a boolean if a field has been set.
func (o *PipelineStages) HasLut1d1() bool {
	if o != nil && o.Lut1d1 != nil {
		return true
	}

	return false
}

// SetLut1d1 gets a reference to the given Stage and assigns it to the Lut1d1 field.
func (o *PipelineStages) SetLut1d1(v Stage) {
	tmp := v
	o.Lut1d1 = &tmp
}

// GetM3x32 returns the M3x32 field value if set, zero value otherwise.
func (o *PipelineStages) GetM3x32() Stage {
	if o == nil || o.M3x32 == nil {
		var ret Stage
		return ret
	}
	return *o.M3x32
}

// GetM3x32Ok returns a tuple with the M3x32 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PipelineStages) GetM3x32Ok() (*Stage, bool) {
	if o == nil || o.M3x32 == nil {
		return nil, false
	}
	return o.M3x32, true
}



// HasM3x32 returns a boolean if a field has been set.
func (o *PipelineStages) HasM3x32() bool {
	if o != nil && o.M3x32 != nil {
		return true
	}

	return false
}

// SetM3x32 gets a reference to the given Stage and assigns it to the M3x32 field.
func (o *PipelineStages) SetM3x32(v Stage) {
	tmp := v
	o.M3x32 = &tmp
}

// GetLut1d2 returns the Lut1d2 field value if set, zero value otherwise.
func (o *PipelineStages) GetLut1d2() Stage {
	if o == nil || o.Lut1d2 == nil {
		var ret Stage
		return ret
	}
	return *o.Lut1d2
}

// GetLut1d2Ok returns a tuple with the Lut1d2 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PipelineStages) GetLut1d2Ok() (*Stage, bool) {
	if o == nil || o.Lut1d2 == nil {
		return nil, false
	}
	return o.Lut1d2, true
}



// HasLut1d2 returns a boolean if a field has been set.
func (o *PipelineStages) HasLut1d2() bool {
	if o != nil && o.Lut1d2 != nil {
		return true
	}

	return false
}

// SetLut1d2 gets a reference to the given Stage and assigns it to the Lut1d2 field.
func (o *PipelineStages) SetLut1d2(v Stage) {
	tmp := v
	o.Lut1d2 = &tmp
}

// GetLut3d1 returns the Lut3d1 field value if set, zero value otherwise.
func (o *PipelineStages) GetLut3d1() Stage {
	if o == nil || o.Lut3d1 == nil {
		var ret Stage
		return ret
	}
	return *o.Lut3d1
}

// GetLut3d1Ok returns a tuple with the Lut3d1 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PipelineStages) GetLut3d1Ok() (*Stage, bool) {
	if o == nil || o.Lut3d1 == nil {
		return nil, false
	}
	return o.Lut3d1, true
}



// HasLut3d1 returns a boolean if a field has been set.
func (o *PipelineStages) HasLut3d1() bool {
	if o != nil && o.Lut3d1 != nil {
		return true
	}

	return false
}

// SetLut3d1 gets a reference to the given Stage and assigns it to the Lut3d1 field.
func (o *PipelineStages) SetLut3d1(v Stage) {
	tmp := v
	o.Lut3d1 = &tmp
}

// GetLut1d3 returns the Lut1d3 field value if set, zero value otherwise.
func (o *PipelineStages) GetLut1d3() Stage {
	if o == nil || o.Lut1d3 == nil {
		var ret Stage
		return ret
	}
	return *o.Lut1d3
}

// GetLut1d3Ok returns a tuple with the Lut1d3 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PipelineStages) GetLut1d3Ok() (*Stage, bool) {
	if o == nil || o.Lut1d3 == nil {
		return nil, false
	}
	return o.Lut1d3, true
}



// HasLut1d3 returns a boolean if a field has been set.
func (o *PipelineStages) HasLut1d3() bool {
	if o != nil && o.Lut1d3 != nil {
		return true
	}

	return false
}

// SetLut1d3 gets a reference to the given Stage and assigns it to the Lut1d3 field.
func (o *PipelineStages) SetLut1d3(v Stage) {
	tmp := v
	o.Lut1d3 = &tmp
}

// GetM3x33 returns the M3x33 field value if set, zero value otherwise.
func (o *PipelineStages) GetM3x33() Stage {
	if o == nil || o.M3x33 == nil {
		var ret Stage
		return ret
	}
	return *o.M3x33
}

// GetM3x33Ok returns a tuple with the M3x33 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PipelineStages) GetM3x33Ok() (*Stage, bool) {
	if o == nil || o.M3x33 == nil {
		return nil, false
	}
	return o.M3x33, true
}



// HasM3x33 returns a boolean if a field has been set.
func (o *PipelineStages) HasM3x33() bool {
	if o != nil && o.M3x33 != nil {
		return true
	}

	return false
}

// SetM3x33 gets a reference to the given Stage and assigns it to the M3x33 field.
func (o *PipelineStages) SetM3x33(v Stage) {
	tmp := v
	o.M3x33 = &tmp
}

// GetLut1d4 returns the Lut1d4 field value if set, zero value otherwise.
func (o *PipelineStages) GetLut1d4() Stage {
	if o == nil || o.Lut1d4 == nil {
		var ret Stage
		return ret
	}
	return *o.Lut1d4
}

// GetLut1d4Ok returns a tuple with the Lut1d4 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PipelineStages) GetLut1d4Ok() (*Stage, bool) {
	if o == nil || o.Lut1d4 == nil {
		return nil, false
	}
	return o.Lut1d4, true
}



// HasLut1d4 returns a boolean if a field has been set.
func (o *PipelineStages) HasLut1d4() bool {
	if o != nil && o.Lut1d4 != nil {
		return true
	}

	return false
}

// SetLut1d4 gets a reference to the given Stage and assigns it to the Lut1d4 field.
func (o *PipelineStages) SetLut1d4(v Stage) {
	tmp := v
	o.Lut1d4 = &tmp
}

// GetPipelineRange returns the PipelineRange field value if set, zero value otherwise.
func (o *PipelineStages) GetPipelineRange() PipelineRange {
	if o == nil || o.PipelineRange == nil {
		var ret PipelineRange
		return ret
	}
	return *o.PipelineRange
}

// GetPipelineRangeOk returns a tuple with the PipelineRange field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PipelineStages) GetPipelineRangeOk() (*PipelineRange, bool) {
	if o == nil || o.PipelineRange == nil {
		return nil, false
	}
	return o.PipelineRange, true
}



// HasPipelineRange returns a boolean if a field has been set.
func (o *PipelineStages) HasPipelineRange() bool {
	if o != nil && o.PipelineRange != nil {
		return true
	}

	return false
}

// SetPipelineRange gets a reference to the given PipelineRange and assigns it to the PipelineRange field.
func (o *PipelineStages) SetPipelineRange(v PipelineRange) {
	tmp := v
	o.PipelineRange = &tmp
}

func (o PipelineStages) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Lut1d1 != nil {
		toSerialize["lut1d_1"] = o.Lut1d1
	}
	if o.M3x32 != nil {
		toSerialize["m3x3_2"] = o.M3x32
	}
	if o.Lut1d2 != nil {
		toSerialize["lut1d_2"] = o.Lut1d2
	}
	if o.Lut3d1 != nil {
		toSerialize["lut3d_1"] = o.Lut3d1
	}
	if o.Lut1d3 != nil {
		toSerialize["lut1d_3"] = o.Lut1d3
	}
	if o.M3x33 != nil {
		toSerialize["m3x3_3"] = o.M3x33
	}
	if o.Lut1d4 != nil {
		toSerialize["lut1d_4"] = o.Lut1d4
	}
	if o.PipelineRange != nil {
		toSerialize["pipelineRange"] = o.PipelineRange
	}
	return json.Marshal(toSerialize)
}


func (o *PipelineStages) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	return valueChanged
}

type NullablePipelineStages struct {
	value *PipelineStages
	isSet bool
}

func (v NullablePipelineStages) Get() *PipelineStages {
	return v.value
}

func (v *NullablePipelineStages) Set(val *PipelineStages) {
	v.value = val
	v.isSet = true
}

func (v NullablePipelineStages) IsSet() bool {
	return v.isSet
}

func (v *NullablePipelineStages) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePipelineStages(val *PipelineStages) *NullablePipelineStages {
	return &NullablePipelineStages{value: val, isSet: true}
}

func (v NullablePipelineStages) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePipelineStages) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

