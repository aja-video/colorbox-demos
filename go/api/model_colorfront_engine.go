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

// ColorfrontEngine the model 'ColorfrontEngine'
type ColorfrontEngine string

// List of ColorfrontEngine
const (
	COLORFRONTENGINE_DEFAULT ColorfrontEngine = "Default"
	COLORFRONTENGINE_ADJUST ColorfrontEngine = "Adjust"
)

// All allowed values of ColorfrontEngine enum
var AllowedColorfrontEngineEnumValues = []ColorfrontEngine{
	"Default",
	"Adjust",
}

func (v *ColorfrontEngine) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := ColorfrontEngine(value)
	for _, existing := range AllowedColorfrontEngineEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid ColorfrontEngine", value)
}

// NewColorfrontEngineFromValue returns a pointer to a valid ColorfrontEngine
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewColorfrontEngineFromValue(v string) (*ColorfrontEngine, error) {
	ev := ColorfrontEngine(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for ColorfrontEngine: valid values are %v", v, AllowedColorfrontEngineEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v ColorfrontEngine) IsValid() bool {
	for _, existing := range AllowedColorfrontEngineEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to ColorfrontEngine value
func (v ColorfrontEngine) Ptr() *ColorfrontEngine {
	return &v
}

type NullableColorfrontEngine struct {
	value *ColorfrontEngine
	isSet bool
}

func (v NullableColorfrontEngine) Get() *ColorfrontEngine {
	return v.value
}

func (v *NullableColorfrontEngine) Set(val *ColorfrontEngine) {
	v.value = val
	v.isSet = true
}

func (v NullableColorfrontEngine) IsSet() bool {
	return v.isSet
}

func (v *NullableColorfrontEngine) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableColorfrontEngine(val *ColorfrontEngine) *NullableColorfrontEngine {
	return &NullableColorfrontEngine{value: val, isSet: true}
}

func (v NullableColorfrontEngine) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableColorfrontEngine) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

