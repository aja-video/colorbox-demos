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

// SystemPasswordResponse struct for SystemPasswordResponse
type SystemPasswordResponse struct {
	Successful *bool `json:"successful,omitempty"`
	Message *string `json:"message,omitempty"`
}

// NewSystemPasswordResponse instantiates a new SystemPasswordResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSystemPasswordResponse() *SystemPasswordResponse {
	this := SystemPasswordResponse{}
	return &this
}

// NewSystemPasswordResponseWithDefaults instantiates a new SystemPasswordResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSystemPasswordResponseWithDefaults() *SystemPasswordResponse {
	this := SystemPasswordResponse{}
	return &this
}

// GetSuccessful returns the Successful field value if set, zero value otherwise.
func (o *SystemPasswordResponse) GetSuccessful() bool {
	if o == nil || o.Successful == nil {
		var ret bool
		return ret
	}
	return *o.Successful
}

// GetSuccessfulOk returns a tuple with the Successful field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemPasswordResponse) GetSuccessfulOk() (*bool, bool) {
	if o == nil || o.Successful == nil {
		return nil, false
	}
	return o.Successful, true
}



// HasSuccessful returns a boolean if a field has been set.
func (o *SystemPasswordResponse) HasSuccessful() bool {
	if o != nil && o.Successful != nil {
		return true
	}

	return false
}

// SetSuccessful gets a reference to the given bool and assigns it to the Successful field.
func (o *SystemPasswordResponse) SetSuccessful(v bool) {
	tmp := v
	o.Successful = &tmp
}

// GetMessage returns the Message field value if set, zero value otherwise.
func (o *SystemPasswordResponse) GetMessage() string {
	if o == nil || o.Message == nil {
		var ret string
		return ret
	}
	return *o.Message
}

// GetMessageOk returns a tuple with the Message field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemPasswordResponse) GetMessageOk() (*string, bool) {
	if o == nil || o.Message == nil {
		return nil, false
	}
	return o.Message, true
}



// HasMessage returns a boolean if a field has been set.
func (o *SystemPasswordResponse) HasMessage() bool {
	if o != nil && o.Message != nil {
		return true
	}

	return false
}

// SetMessage gets a reference to the given string and assigns it to the Message field.
func (o *SystemPasswordResponse) SetMessage(v string) {
	tmp := v
	o.Message = &tmp
}

func (o SystemPasswordResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Successful != nil {
		toSerialize["successful"] = o.Successful
	}
	if o.Message != nil {
		toSerialize["message"] = o.Message
	}
	return json.Marshal(toSerialize)
}


func (o *SystemPasswordResponse) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	if o.HasMessage() {
		var fieldChanged = false
		var v string = o.GetMessage()
		if fieldChanged {
			o.SetMessage(v)
			valueChanged = true
		}
	}
	return valueChanged
}

type NullableSystemPasswordResponse struct {
	value *SystemPasswordResponse
	isSet bool
}

func (v NullableSystemPasswordResponse) Get() *SystemPasswordResponse {
	return v.value
}

func (v *NullableSystemPasswordResponse) Set(val *SystemPasswordResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableSystemPasswordResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableSystemPasswordResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSystemPasswordResponse(val *SystemPasswordResponse) *NullableSystemPasswordResponse {
	return &NullableSystemPasswordResponse{value: val, isSet: true}
}

func (v NullableSystemPasswordResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSystemPasswordResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


