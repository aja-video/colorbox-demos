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
	"fmt"
)

// ColorfrontDynRangeGamut the model 'ColorfrontDynRangeGamut'
type ColorfrontDynRangeGamut string

// List of ColorfrontDynRangeGamut
const (
	COLORFRONTDYNRANGEGAMUT_SDR_BT_709 ColorfrontDynRangeGamut = "SDR BT.709"
	COLORFRONTDYNRANGEGAMUT_HLG_BT_2100 ColorfrontDynRangeGamut = "HLG BT.2100"
	COLORFRONTDYNRANGEGAMUT_PQ_BT_2020 ColorfrontDynRangeGamut = "PQ BT.2020"
)

// All allowed values of ColorfrontDynRangeGamut enum
var AllowedColorfrontDynRangeGamutEnumValues = []ColorfrontDynRangeGamut{
	"SDR BT.709",
	"HLG BT.2100",
	"PQ BT.2020",
}

func (v *ColorfrontDynRangeGamut) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := ColorfrontDynRangeGamut(value)
	for _, existing := range AllowedColorfrontDynRangeGamutEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid ColorfrontDynRangeGamut", value)
}

// NewColorfrontDynRangeGamutFromValue returns a pointer to a valid ColorfrontDynRangeGamut
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewColorfrontDynRangeGamutFromValue(v string) (*ColorfrontDynRangeGamut, error) {
	ev := ColorfrontDynRangeGamut(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for ColorfrontDynRangeGamut: valid values are %v", v, AllowedColorfrontDynRangeGamutEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v ColorfrontDynRangeGamut) IsValid() bool {
	for _, existing := range AllowedColorfrontDynRangeGamutEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to ColorfrontDynRangeGamut value
func (v ColorfrontDynRangeGamut) Ptr() *ColorfrontDynRangeGamut {
	return &v
}

type NullableColorfrontDynRangeGamut struct {
	value *ColorfrontDynRangeGamut
	isSet bool
}

func (v NullableColorfrontDynRangeGamut) Get() *ColorfrontDynRangeGamut {
	return v.value
}

func (v *NullableColorfrontDynRangeGamut) Set(val *ColorfrontDynRangeGamut) {
	v.value = val
	v.isSet = true
}

func (v NullableColorfrontDynRangeGamut) IsSet() bool {
	return v.isSet
}

func (v *NullableColorfrontDynRangeGamut) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableColorfrontDynRangeGamut(val *ColorfrontDynRangeGamut) *NullableColorfrontDynRangeGamut {
	return &NullableColorfrontDynRangeGamut{value: val, isSet: true}
}

func (v NullableColorfrontDynRangeGamut) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableColorfrontDynRangeGamut) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
