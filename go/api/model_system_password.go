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

// SystemPassword struct for SystemPassword
type SystemPassword struct {
	CurrentPassword *string `json:"currentPassword,omitempty"`
	NewPassword *string `json:"newPassword,omitempty"`
}

// NewSystemPassword instantiates a new SystemPassword object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSystemPassword() *SystemPassword {
	this := SystemPassword{}
	return &this
}

// NewSystemPasswordWithDefaults instantiates a new SystemPassword object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSystemPasswordWithDefaults() *SystemPassword {
	this := SystemPassword{}
	return &this
}

// GetCurrentPassword returns the CurrentPassword field value if set, zero value otherwise.
func (o *SystemPassword) GetCurrentPassword() string {
	if o == nil || o.CurrentPassword == nil {
		var ret string
		return ret
	}
	return *o.CurrentPassword
}

// GetCurrentPasswordOk returns a tuple with the CurrentPassword field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemPassword) GetCurrentPasswordOk() (*string, bool) {
	if o == nil || o.CurrentPassword == nil {
		return nil, false
	}
	return o.CurrentPassword, true
}



// HasCurrentPassword returns a boolean if a field has been set.
func (o *SystemPassword) HasCurrentPassword() bool {
	if o != nil && o.CurrentPassword != nil {
		return true
	}

	return false
}

// SetCurrentPassword gets a reference to the given string and assigns it to the CurrentPassword field.
func (o *SystemPassword) SetCurrentPassword(v string) {
	tmp := v
	o.CurrentPassword = &tmp
}

// GetNewPassword returns the NewPassword field value if set, zero value otherwise.
func (o *SystemPassword) GetNewPassword() string {
	if o == nil || o.NewPassword == nil {
		var ret string
		return ret
	}
	return *o.NewPassword
}

// GetNewPasswordOk returns a tuple with the NewPassword field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemPassword) GetNewPasswordOk() (*string, bool) {
	if o == nil || o.NewPassword == nil {
		return nil, false
	}
	return o.NewPassword, true
}



// HasNewPassword returns a boolean if a field has been set.
func (o *SystemPassword) HasNewPassword() bool {
	if o != nil && o.NewPassword != nil {
		return true
	}

	return false
}

// SetNewPassword gets a reference to the given string and assigns it to the NewPassword field.
func (o *SystemPassword) SetNewPassword(v string) {
	tmp := v
	o.NewPassword = &tmp
}

func (o SystemPassword) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.CurrentPassword != nil {
		toSerialize["currentPassword"] = o.CurrentPassword
	}
	if o.NewPassword != nil {
		toSerialize["newPassword"] = o.NewPassword
	}
	return json.Marshal(toSerialize)
}


func (o *SystemPassword) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	if o.HasCurrentPassword() {
		var fieldChanged = false
		var v string = o.GetCurrentPassword()
		if fieldChanged {
			o.SetCurrentPassword(v)
			valueChanged = true
		}
	}
	if o.HasNewPassword() {
		var fieldChanged = false
		var v string = o.GetNewPassword()
		if fieldChanged {
			o.SetNewPassword(v)
			valueChanged = true
		}
	}
	return valueChanged
}

type NullableSystemPassword struct {
	value *SystemPassword
	isSet bool
}

func (v NullableSystemPassword) Get() *SystemPassword {
	return v.value
}

func (v *NullableSystemPassword) Set(val *SystemPassword) {
	v.value = val
	v.isSet = true
}

func (v NullableSystemPassword) IsSet() bool {
	return v.isSet
}

func (v *NullableSystemPassword) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSystemPassword(val *SystemPassword) *NullableSystemPassword {
	return &NullableSystemPassword{value: val, isSet: true}
}

func (v NullableSystemPassword) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSystemPassword) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


