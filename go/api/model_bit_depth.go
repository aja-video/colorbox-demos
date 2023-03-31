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

// BitDepth the model 'BitDepth'
type BitDepth string

// List of BitDepth
const (
	BITDEPTH_AUTO BitDepth = "Auto"
	BITDEPTH__10_BIT BitDepth = "10 Bit"
	BITDEPTH__12_BIT BitDepth = "12 Bit"
)

// All allowed values of BitDepth enum
var AllowedBitDepthEnumValues = []BitDepth{
	"Auto",
	"10 Bit",
	"12 Bit",
}

func (v *BitDepth) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := BitDepth(value)
	for _, existing := range AllowedBitDepthEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid BitDepth", value)
}

// NewBitDepthFromValue returns a pointer to a valid BitDepth
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewBitDepthFromValue(v string) (*BitDepth, error) {
	ev := BitDepth(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for BitDepth: valid values are %v", v, AllowedBitDepthEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v BitDepth) IsValid() bool {
	for _, existing := range AllowedBitDepthEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to BitDepth value
func (v BitDepth) Ptr() *BitDepth {
	return &v
}

type NullableBitDepth struct {
	value *BitDepth
	isSet bool
}

func (v NullableBitDepth) Get() *BitDepth {
	return v.value
}

func (v *NullableBitDepth) Set(val *BitDepth) {
	v.value = val
	v.isSet = true
}

func (v NullableBitDepth) IsSet() bool {
	return v.isSet
}

func (v *NullableBitDepth) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableBitDepth(val *BitDepth) *NullableBitDepth {
	return &NullableBitDepth{value: val, isSet: true}
}

func (v NullableBitDepth) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableBitDepth) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

