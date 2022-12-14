/*
OpenAPI ColorBox

This is a REST API for the AJA ColorBox product.

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

// ProcAmp struct for ProcAmp
type ProcAmp struct {
	Black *float32 `json:"black,omitempty"`
	Gain *float32 `json:"gain,omitempty"`
	Hue *float32 `json:"hue,omitempty"`
	Sat *float32 `json:"sat,omitempty"`
	UnitsBlack *string `json:"unitsBlack,omitempty"`
	UnitsGain *string `json:"unitsGain,omitempty"`
	UnitsHue *string `json:"unitsHue,omitempty"`
	UnitsSat *string `json:"unitsSat,omitempty"`
}

// NewProcAmp instantiates a new ProcAmp object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewProcAmp() *ProcAmp {
	this := ProcAmp{}
	var black float32 = 0.0
	this.Black = &black
	var gain float32 = 1.0
	this.Gain = &gain
	var hue float32 = 0
	this.Hue = &hue
	var sat float32 = 1.0
	this.Sat = &sat
	var unitsBlack string = "IRE"
	this.UnitsBlack = &unitsBlack
	var unitsGain string = ""
	this.UnitsGain = &unitsGain
	var unitsHue string = "degrees"
	this.UnitsHue = &unitsHue
	var unitsSat string = ""
	this.UnitsSat = &unitsSat
	return &this
}

// NewProcAmpWithDefaults instantiates a new ProcAmp object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewProcAmpWithDefaults() *ProcAmp {
	this := ProcAmp{}
	var black float32 = 0.0
	this.Black = &black
	var gain float32 = 1.0
	this.Gain = &gain
	var hue float32 = 0
	this.Hue = &hue
	var sat float32 = 1.0
	this.Sat = &sat
	var unitsBlack string = "IRE"
	this.UnitsBlack = &unitsBlack
	var unitsGain string = ""
	this.UnitsGain = &unitsGain
	var unitsHue string = "degrees"
	this.UnitsHue = &unitsHue
	var unitsSat string = ""
	this.UnitsSat = &unitsSat
	return &this
}

// GetBlack returns the Black field value if set, zero value otherwise.
func (o *ProcAmp) GetBlack() float32 {
	if o == nil || o.Black == nil {
		var ret float32
		return ret
	}
	return *o.Black
}

// GetBlackOk returns a tuple with the Black field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ProcAmp) GetBlackOk() (*float32, bool) {
	if o == nil || o.Black == nil {
		return nil, false
	}
	return o.Black, true
}

// GetBlackMin returns the minimum value for field Black.
func (o *ProcAmp) GetBlackMin() float32 {
	return -20.0
}

// GetBlackMax returns the maximum value for field Black.
func (o *ProcAmp) GetBlackMax() float32 {
	return 20.0
}


// HasBlack returns a boolean if a field has been set.
func (o *ProcAmp) HasBlack() bool {
	if o != nil && o.Black != nil {
		return true
	}

	return false
}

// SetBlack gets a reference to the given float32 and assigns it to the Black field.
func (o *ProcAmp) SetBlack(v float32) {
	tmp := v
	min := o.GetBlackMin()
	max := o.GetBlackMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.Black = &tmp
}

// GetGain returns the Gain field value if set, zero value otherwise.
func (o *ProcAmp) GetGain() float32 {
	if o == nil || o.Gain == nil {
		var ret float32
		return ret
	}
	return *o.Gain
}

// GetGainOk returns a tuple with the Gain field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ProcAmp) GetGainOk() (*float32, bool) {
	if o == nil || o.Gain == nil {
		return nil, false
	}
	return o.Gain, true
}

// GetGainMin returns the minimum value for field Gain.
func (o *ProcAmp) GetGainMin() float32 {
	return 0
}

// GetGainMax returns the maximum value for field Gain.
func (o *ProcAmp) GetGainMax() float32 {
	return 1.5
}


// HasGain returns a boolean if a field has been set.
func (o *ProcAmp) HasGain() bool {
	if o != nil && o.Gain != nil {
		return true
	}

	return false
}

// SetGain gets a reference to the given float32 and assigns it to the Gain field.
func (o *ProcAmp) SetGain(v float32) {
	tmp := v
	min := o.GetGainMin()
	max := o.GetGainMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.Gain = &tmp
}

// GetHue returns the Hue field value if set, zero value otherwise.
func (o *ProcAmp) GetHue() float32 {
	if o == nil || o.Hue == nil {
		var ret float32
		return ret
	}
	return *o.Hue
}

// GetHueOk returns a tuple with the Hue field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ProcAmp) GetHueOk() (*float32, bool) {
	if o == nil || o.Hue == nil {
		return nil, false
	}
	return o.Hue, true
}

// GetHueMin returns the minimum value for field Hue.
func (o *ProcAmp) GetHueMin() float32 {
	return -179
}

// GetHueMax returns the maximum value for field Hue.
func (o *ProcAmp) GetHueMax() float32 {
	return 180
}


// HasHue returns a boolean if a field has been set.
func (o *ProcAmp) HasHue() bool {
	if o != nil && o.Hue != nil {
		return true
	}

	return false
}

// SetHue gets a reference to the given float32 and assigns it to the Hue field.
func (o *ProcAmp) SetHue(v float32) {
	tmp := v
	min := o.GetHueMin()
	max := o.GetHueMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.Hue = &tmp
}

// GetSat returns the Sat field value if set, zero value otherwise.
func (o *ProcAmp) GetSat() float32 {
	if o == nil || o.Sat == nil {
		var ret float32
		return ret
	}
	return *o.Sat
}

// GetSatOk returns a tuple with the Sat field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ProcAmp) GetSatOk() (*float32, bool) {
	if o == nil || o.Sat == nil {
		return nil, false
	}
	return o.Sat, true
}

// GetSatMin returns the minimum value for field Sat.
func (o *ProcAmp) GetSatMin() float32 {
	return 0.0
}

// GetSatMax returns the maximum value for field Sat.
func (o *ProcAmp) GetSatMax() float32 {
	return 1.5
}


// HasSat returns a boolean if a field has been set.
func (o *ProcAmp) HasSat() bool {
	if o != nil && o.Sat != nil {
		return true
	}

	return false
}

// SetSat gets a reference to the given float32 and assigns it to the Sat field.
func (o *ProcAmp) SetSat(v float32) {
	tmp := v
	min := o.GetSatMin()
	max := o.GetSatMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.Sat = &tmp
}

// GetUnitsBlack returns the UnitsBlack field value if set, zero value otherwise.
func (o *ProcAmp) GetUnitsBlack() string {
	if o == nil || o.UnitsBlack == nil {
		var ret string
		return ret
	}
	return *o.UnitsBlack
}

// GetUnitsBlackOk returns a tuple with the UnitsBlack field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ProcAmp) GetUnitsBlackOk() (*string, bool) {
	if o == nil || o.UnitsBlack == nil {
		return nil, false
	}
	return o.UnitsBlack, true
}



// HasUnitsBlack returns a boolean if a field has been set.
func (o *ProcAmp) HasUnitsBlack() bool {
	if o != nil && o.UnitsBlack != nil {
		return true
	}

	return false
}

// SetUnitsBlack gets a reference to the given string and assigns it to the UnitsBlack field.
func (o *ProcAmp) SetUnitsBlack(v string) {
	tmp := v
	o.UnitsBlack = &tmp
}

// GetUnitsGain returns the UnitsGain field value if set, zero value otherwise.
func (o *ProcAmp) GetUnitsGain() string {
	if o == nil || o.UnitsGain == nil {
		var ret string
		return ret
	}
	return *o.UnitsGain
}

// GetUnitsGainOk returns a tuple with the UnitsGain field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ProcAmp) GetUnitsGainOk() (*string, bool) {
	if o == nil || o.UnitsGain == nil {
		return nil, false
	}
	return o.UnitsGain, true
}



// HasUnitsGain returns a boolean if a field has been set.
func (o *ProcAmp) HasUnitsGain() bool {
	if o != nil && o.UnitsGain != nil {
		return true
	}

	return false
}

// SetUnitsGain gets a reference to the given string and assigns it to the UnitsGain field.
func (o *ProcAmp) SetUnitsGain(v string) {
	tmp := v
	o.UnitsGain = &tmp
}

// GetUnitsHue returns the UnitsHue field value if set, zero value otherwise.
func (o *ProcAmp) GetUnitsHue() string {
	if o == nil || o.UnitsHue == nil {
		var ret string
		return ret
	}
	return *o.UnitsHue
}

// GetUnitsHueOk returns a tuple with the UnitsHue field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ProcAmp) GetUnitsHueOk() (*string, bool) {
	if o == nil || o.UnitsHue == nil {
		return nil, false
	}
	return o.UnitsHue, true
}



// HasUnitsHue returns a boolean if a field has been set.
func (o *ProcAmp) HasUnitsHue() bool {
	if o != nil && o.UnitsHue != nil {
		return true
	}

	return false
}

// SetUnitsHue gets a reference to the given string and assigns it to the UnitsHue field.
func (o *ProcAmp) SetUnitsHue(v string) {
	tmp := v
	o.UnitsHue = &tmp
}

// GetUnitsSat returns the UnitsSat field value if set, zero value otherwise.
func (o *ProcAmp) GetUnitsSat() string {
	if o == nil || o.UnitsSat == nil {
		var ret string
		return ret
	}
	return *o.UnitsSat
}

// GetUnitsSatOk returns a tuple with the UnitsSat field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ProcAmp) GetUnitsSatOk() (*string, bool) {
	if o == nil || o.UnitsSat == nil {
		return nil, false
	}
	return o.UnitsSat, true
}



// HasUnitsSat returns a boolean if a field has been set.
func (o *ProcAmp) HasUnitsSat() bool {
	if o != nil && o.UnitsSat != nil {
		return true
	}

	return false
}

// SetUnitsSat gets a reference to the given string and assigns it to the UnitsSat field.
func (o *ProcAmp) SetUnitsSat(v string) {
	tmp := v
	o.UnitsSat = &tmp
}

func (o ProcAmp) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Black != nil {
		toSerialize["black"] = o.Black
	}
	if o.Gain != nil {
		toSerialize["gain"] = o.Gain
	}
	if o.Hue != nil {
		toSerialize["hue"] = o.Hue
	}
	if o.Sat != nil {
		toSerialize["sat"] = o.Sat
	}
	if o.UnitsBlack != nil {
		toSerialize["unitsBlack"] = o.UnitsBlack
	}
	if o.UnitsGain != nil {
		toSerialize["unitsGain"] = o.UnitsGain
	}
	if o.UnitsHue != nil {
		toSerialize["unitsHue"] = o.UnitsHue
	}
	if o.UnitsSat != nil {
		toSerialize["unitsSat"] = o.UnitsSat
	}
	return json.Marshal(toSerialize)
}


func (o *ProcAmp) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	if o.HasBlack() {
		var fieldChanged = false
		var v float32 = o.GetBlack()
		var min float32 = o.GetBlackMin()
		var max float32 = o.GetBlackMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetBlack(v)
			valueChanged = true
		}
	}
	if o.HasGain() {
		var fieldChanged = false
		var v float32 = o.GetGain()
		var min float32 = o.GetGainMin()
		var max float32 = o.GetGainMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetGain(v)
			valueChanged = true
		}
	}
	if o.HasHue() {
		var fieldChanged = false
		var v float32 = o.GetHue()
		var min float32 = o.GetHueMin()
		var max float32 = o.GetHueMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetHue(v)
			valueChanged = true
		}
	}
	if o.HasSat() {
		var fieldChanged = false
		var v float32 = o.GetSat()
		var min float32 = o.GetSatMin()
		var max float32 = o.GetSatMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetSat(v)
			valueChanged = true
		}
	}
	if o.HasUnitsBlack() {
		var fieldChanged = false
		var v string = o.GetUnitsBlack()
		if fieldChanged {
			o.SetUnitsBlack(v)
			valueChanged = true
		}
	}
	if o.HasUnitsGain() {
		var fieldChanged = false
		var v string = o.GetUnitsGain()
		if fieldChanged {
			o.SetUnitsGain(v)
			valueChanged = true
		}
	}
	if o.HasUnitsHue() {
		var fieldChanged = false
		var v string = o.GetUnitsHue()
		if fieldChanged {
			o.SetUnitsHue(v)
			valueChanged = true
		}
	}
	if o.HasUnitsSat() {
		var fieldChanged = false
		var v string = o.GetUnitsSat()
		if fieldChanged {
			o.SetUnitsSat(v)
			valueChanged = true
		}
	}
	return valueChanged
}

type NullableProcAmp struct {
	value *ProcAmp
	isSet bool
}

func (v NullableProcAmp) Get() *ProcAmp {
	return v.value
}

func (v *NullableProcAmp) Set(val *ProcAmp) {
	v.value = val
	v.isSet = true
}

func (v NullableProcAmp) IsSet() bool {
	return v.isSet
}

func (v *NullableProcAmp) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableProcAmp(val *ProcAmp) *NullableProcAmp {
	return &NullableProcAmp{value: val, isSet: true}
}

func (v NullableProcAmp) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableProcAmp) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


