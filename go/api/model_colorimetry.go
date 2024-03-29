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

// Colorimetry the model 'Colorimetry'
type Colorimetry string

// List of Colorimetry
const (
	COLORIMETRY_AUTO Colorimetry = "Auto"
	COLORIMETRY_BT_709 Colorimetry = "BT.709"
	COLORIMETRY_BT_2020 Colorimetry = "BT.2020"
)

// All allowed values of Colorimetry enum
var AllowedColorimetryEnumValues = []Colorimetry{
	"Auto",
	"BT.709",
	"BT.2020",
}

func (v *Colorimetry) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := Colorimetry(value)
	for _, existing := range AllowedColorimetryEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid Colorimetry", value)
}

// NewColorimetryFromValue returns a pointer to a valid Colorimetry
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewColorimetryFromValue(v string) (*Colorimetry, error) {
	ev := Colorimetry(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for Colorimetry: valid values are %v", v, AllowedColorimetryEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v Colorimetry) IsValid() bool {
	for _, existing := range AllowedColorimetryEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to Colorimetry value
func (v Colorimetry) Ptr() *Colorimetry {
	return &v
}

type NullableColorimetry struct {
	value *Colorimetry
	isSet bool
}

func (v NullableColorimetry) Get() *Colorimetry {
	return v.value
}

func (v *NullableColorimetry) Set(val *Colorimetry) {
	v.value = val
	v.isSet = true
}

func (v NullableColorimetry) IsSet() bool {
	return v.isSet
}

func (v *NullableColorimetry) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableColorimetry(val *Colorimetry) *NullableColorimetry {
	return &NullableColorimetry{value: val, isSet: true}
}

func (v NullableColorimetry) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableColorimetry) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

