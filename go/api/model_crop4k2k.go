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
	"fmt"
)

// Crop4k2k the model 'Crop4k2k'
type Crop4k2k string

// List of Crop4k2k
const (
	CROP4K2K_AUTO Crop4k2k = "Auto"
	CROP4K2K_ENABLED Crop4k2k = "Enabled"
	CROP4K2K_DISABLED Crop4k2k = "Disabled"
)

// All allowed values of Crop4k2k enum
var AllowedCrop4k2kEnumValues = []Crop4k2k{
	"Auto",
	"Enabled",
	"Disabled",
}

func (v *Crop4k2k) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := Crop4k2k(value)
	for _, existing := range AllowedCrop4k2kEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid Crop4k2k", value)
}

// NewCrop4k2kFromValue returns a pointer to a valid Crop4k2k
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewCrop4k2kFromValue(v string) (*Crop4k2k, error) {
	ev := Crop4k2k(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for Crop4k2k: valid values are %v", v, AllowedCrop4k2kEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v Crop4k2k) IsValid() bool {
	for _, existing := range AllowedCrop4k2kEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to Crop4k2k value
func (v Crop4k2k) Ptr() *Crop4k2k {
	return &v
}

type NullableCrop4k2k struct {
	value *Crop4k2k
	isSet bool
}

func (v NullableCrop4k2k) Get() *Crop4k2k {
	return v.value
}

func (v *NullableCrop4k2k) Set(val *Crop4k2k) {
	v.value = val
	v.isSet = true
}

func (v NullableCrop4k2k) IsSet() bool {
	return v.isSet
}

func (v *NullableCrop4k2k) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCrop4k2k(val *Crop4k2k) *NullableCrop4k2k {
	return &NullableCrop4k2k{value: val, isSet: true}
}

func (v NullableCrop4k2k) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCrop4k2k) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

