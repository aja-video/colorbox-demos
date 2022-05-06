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

// Stage struct for Stage
type Stage struct {
	// true if stage is enabled else disabled (unity passthru)
	Enabled *bool `json:"enabled,omitempty"`
	// true if stage can be dynamically adjusted
	Dynamic *bool `json:"dynamic,omitempty"`
	// library entry number, zero is unity bypass
	LibraryEntry *int32 `json:"libraryEntry,omitempty"`
	ColorCorrector *ColorCorrector `json:"colorCorrector,omitempty"`
	ProcAmp *ProcAmp `json:"procAmp,omitempty"`
}

// NewStage instantiates a new Stage object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewStage() *Stage {
	this := Stage{}
	return &this
}

// NewStageWithDefaults instantiates a new Stage object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewStageWithDefaults() *Stage {
	this := Stage{}
	return &this
}

// GetEnabled returns the Enabled field value if set, zero value otherwise.
func (o *Stage) GetEnabled() bool {
	if o == nil || o.Enabled == nil {
		var ret bool
		return ret
	}
	return *o.Enabled
}

// GetEnabledOk returns a tuple with the Enabled field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Stage) GetEnabledOk() (*bool, bool) {
	if o == nil || o.Enabled == nil {
		return nil, false
	}
	return o.Enabled, true
}



// HasEnabled returns a boolean if a field has been set.
func (o *Stage) HasEnabled() bool {
	if o != nil && o.Enabled != nil {
		return true
	}

	return false
}

// SetEnabled gets a reference to the given bool and assigns it to the Enabled field.
func (o *Stage) SetEnabled(v bool) {
	tmp := v
	o.Enabled = &tmp
}

// GetDynamic returns the Dynamic field value if set, zero value otherwise.
func (o *Stage) GetDynamic() bool {
	if o == nil || o.Dynamic == nil {
		var ret bool
		return ret
	}
	return *o.Dynamic
}

// GetDynamicOk returns a tuple with the Dynamic field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Stage) GetDynamicOk() (*bool, bool) {
	if o == nil || o.Dynamic == nil {
		return nil, false
	}
	return o.Dynamic, true
}



// HasDynamic returns a boolean if a field has been set.
func (o *Stage) HasDynamic() bool {
	if o != nil && o.Dynamic != nil {
		return true
	}

	return false
}

// SetDynamic gets a reference to the given bool and assigns it to the Dynamic field.
func (o *Stage) SetDynamic(v bool) {
	tmp := v
	o.Dynamic = &tmp
}

// GetLibraryEntry returns the LibraryEntry field value if set, zero value otherwise.
func (o *Stage) GetLibraryEntry() int32 {
	if o == nil || o.LibraryEntry == nil {
		var ret int32
		return ret
	}
	return *o.LibraryEntry
}

// GetLibraryEntryOk returns a tuple with the LibraryEntry field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Stage) GetLibraryEntryOk() (*int32, bool) {
	if o == nil || o.LibraryEntry == nil {
		return nil, false
	}
	return o.LibraryEntry, true
}



// HasLibraryEntry returns a boolean if a field has been set.
func (o *Stage) HasLibraryEntry() bool {
	if o != nil && o.LibraryEntry != nil {
		return true
	}

	return false
}

// SetLibraryEntry gets a reference to the given int32 and assigns it to the LibraryEntry field.
func (o *Stage) SetLibraryEntry(v int32) {
	tmp := v
	o.LibraryEntry = &tmp
}

// GetColorCorrector returns the ColorCorrector field value if set, zero value otherwise.
func (o *Stage) GetColorCorrector() ColorCorrector {
	if o == nil || o.ColorCorrector == nil {
		var ret ColorCorrector
		return ret
	}
	return *o.ColorCorrector
}

// GetColorCorrectorOk returns a tuple with the ColorCorrector field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Stage) GetColorCorrectorOk() (*ColorCorrector, bool) {
	if o == nil || o.ColorCorrector == nil {
		return nil, false
	}
	return o.ColorCorrector, true
}



// HasColorCorrector returns a boolean if a field has been set.
func (o *Stage) HasColorCorrector() bool {
	if o != nil && o.ColorCorrector != nil {
		return true
	}

	return false
}

// SetColorCorrector gets a reference to the given ColorCorrector and assigns it to the ColorCorrector field.
func (o *Stage) SetColorCorrector(v ColorCorrector) {
	tmp := v
	o.ColorCorrector = &tmp
}

// GetProcAmp returns the ProcAmp field value if set, zero value otherwise.
func (o *Stage) GetProcAmp() ProcAmp {
	if o == nil || o.ProcAmp == nil {
		var ret ProcAmp
		return ret
	}
	return *o.ProcAmp
}

// GetProcAmpOk returns a tuple with the ProcAmp field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Stage) GetProcAmpOk() (*ProcAmp, bool) {
	if o == nil || o.ProcAmp == nil {
		return nil, false
	}
	return o.ProcAmp, true
}



// HasProcAmp returns a boolean if a field has been set.
func (o *Stage) HasProcAmp() bool {
	if o != nil && o.ProcAmp != nil {
		return true
	}

	return false
}

// SetProcAmp gets a reference to the given ProcAmp and assigns it to the ProcAmp field.
func (o *Stage) SetProcAmp(v ProcAmp) {
	tmp := v
	o.ProcAmp = &tmp
}

func (o Stage) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Enabled != nil {
		toSerialize["enabled"] = o.Enabled
	}
	if o.Dynamic != nil {
		toSerialize["dynamic"] = o.Dynamic
	}
	if o.LibraryEntry != nil {
		toSerialize["libraryEntry"] = o.LibraryEntry
	}
	if o.ColorCorrector != nil {
		toSerialize["colorCorrector"] = o.ColorCorrector
	}
	if o.ProcAmp != nil {
		toSerialize["procAmp"] = o.ProcAmp
	}
	return json.Marshal(toSerialize)
}


func (o *Stage) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	if o.HasLibraryEntry() {
		var fieldChanged = false
		var v int32 = o.GetLibraryEntry()
		if fieldChanged {
			o.SetLibraryEntry(v)
			valueChanged = true
		}
	}
	return valueChanged
}

type NullableStage struct {
	value *Stage
	isSet bool
}

func (v NullableStage) Get() *Stage {
	return v.value
}

func (v *NullableStage) Set(val *Stage) {
	v.value = val
	v.isSet = true
}

func (v NullableStage) IsSet() bool {
	return v.isSet
}

func (v *NullableStage) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableStage(val *Stage) *NullableStage {
	return &NullableStage{value: val, isSet: true}
}

func (v NullableStage) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableStage) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


