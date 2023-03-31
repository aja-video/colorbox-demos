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
	"fmt"
)

// OrionImplementation the model 'OrionImplementation'
type OrionImplementation string

// List of OrionImplementation
const (
	ORIONIMPLEMENTATION_ENGINE OrionImplementation = "Engine"
	ORIONIMPLEMENTATION_RENDER OrionImplementation = "Render"
)

// All allowed values of OrionImplementation enum
var AllowedOrionImplementationEnumValues = []OrionImplementation{
	"Engine",
	"Render",
}

func (v *OrionImplementation) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := OrionImplementation(value)
	for _, existing := range AllowedOrionImplementationEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid OrionImplementation", value)
}

// NewOrionImplementationFromValue returns a pointer to a valid OrionImplementation
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewOrionImplementationFromValue(v string) (*OrionImplementation, error) {
	ev := OrionImplementation(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for OrionImplementation: valid values are %v", v, AllowedOrionImplementationEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v OrionImplementation) IsValid() bool {
	for _, existing := range AllowedOrionImplementationEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to OrionImplementation value
func (v OrionImplementation) Ptr() *OrionImplementation {
	return &v
}

type NullableOrionImplementation struct {
	value *OrionImplementation
	isSet bool
}

func (v NullableOrionImplementation) Get() *OrionImplementation {
	return v.value
}

func (v *NullableOrionImplementation) Set(val *OrionImplementation) {
	v.value = val
	v.isSet = true
}

func (v NullableOrionImplementation) IsSet() bool {
	return v.isSet
}

func (v *NullableOrionImplementation) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOrionImplementation(val *OrionImplementation) *NullableOrionImplementation {
	return &NullableOrionImplementation{value: val, isSet: true}
}

func (v NullableOrionImplementation) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOrionImplementation) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

