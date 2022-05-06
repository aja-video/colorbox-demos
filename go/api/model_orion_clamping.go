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

// OrionClamping the model 'OrionClamping'
type OrionClamping string

// List of OrionClamping
const (
	ORIONCLAMPING_UNCLAMPED OrionClamping = "Unclamped"
	ORIONCLAMPING_CLIP_SUB_BLACKS OrionClamping = "Clip SubBlacks"
	ORIONCLAMPING__7_TO_109_IRE OrionClamping = "-7 to 109 IRE"
	ORIONCLAMPING__5_TO_105_IRE OrionClamping = "-5 to 105 IRE"
	ORIONCLAMPING__0_TO_100_IRE OrionClamping = "0 to 100 IRE"
)

// All allowed values of OrionClamping enum
var AllowedOrionClampingEnumValues = []OrionClamping{
	"Unclamped",
	"Clip SubBlacks",
	"-7 to 109 IRE",
	"-5 to 105 IRE",
	"0 to 100 IRE",
}

func (v *OrionClamping) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := OrionClamping(value)
	for _, existing := range AllowedOrionClampingEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid OrionClamping", value)
}

// NewOrionClampingFromValue returns a pointer to a valid OrionClamping
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewOrionClampingFromValue(v string) (*OrionClamping, error) {
	ev := OrionClamping(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for OrionClamping: valid values are %v", v, AllowedOrionClampingEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v OrionClamping) IsValid() bool {
	for _, existing := range AllowedOrionClampingEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to OrionClamping value
func (v OrionClamping) Ptr() *OrionClamping {
	return &v
}

type NullableOrionClamping struct {
	value *OrionClamping
	isSet bool
}

func (v NullableOrionClamping) Get() *OrionClamping {
	return v.value
}

func (v *NullableOrionClamping) Set(val *OrionClamping) {
	v.value = val
	v.isSet = true
}

func (v NullableOrionClamping) IsSet() bool {
	return v.isSet
}

func (v *NullableOrionClamping) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOrionClamping(val *OrionClamping) *NullableOrionClamping {
	return &NullableOrionClamping{value: val, isSet: true}
}

func (v NullableOrionClamping) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOrionClamping) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
