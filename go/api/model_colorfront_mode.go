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

// ColorfrontMode the model 'ColorfrontMode'
type ColorfrontMode string

// List of ColorfrontMode
const (
	COLORFRONTMODE_TV ColorfrontMode = "TV"
	COLORFRONTMODE_LIVE ColorfrontMode = "Live"
)

// All allowed values of ColorfrontMode enum
var AllowedColorfrontModeEnumValues = []ColorfrontMode{
	"TV",
	"Live",
}

func (v *ColorfrontMode) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := ColorfrontMode(value)
	for _, existing := range AllowedColorfrontModeEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid ColorfrontMode", value)
}

// NewColorfrontModeFromValue returns a pointer to a valid ColorfrontMode
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewColorfrontModeFromValue(v string) (*ColorfrontMode, error) {
	ev := ColorfrontMode(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for ColorfrontMode: valid values are %v", v, AllowedColorfrontModeEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v ColorfrontMode) IsValid() bool {
	for _, existing := range AllowedColorfrontModeEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to ColorfrontMode value
func (v ColorfrontMode) Ptr() *ColorfrontMode {
	return &v
}

type NullableColorfrontMode struct {
	value *ColorfrontMode
	isSet bool
}

func (v NullableColorfrontMode) Get() *ColorfrontMode {
	return v.value
}

func (v *NullableColorfrontMode) Set(val *ColorfrontMode) {
	v.value = val
	v.isSet = true
}

func (v NullableColorfrontMode) IsSet() bool {
	return v.isSet
}

func (v *NullableColorfrontMode) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableColorfrontMode(val *ColorfrontMode) *NullableColorfrontMode {
	return &NullableColorfrontMode{value: val, isSet: true}
}

func (v NullableColorfrontMode) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableColorfrontMode) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
