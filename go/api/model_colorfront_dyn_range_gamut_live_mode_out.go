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

// ColorfrontDynRangeGamutLiveModeOut the model 'ColorfrontDynRangeGamutLiveModeOut'
type ColorfrontDynRangeGamutLiveModeOut string

// List of ColorfrontDynRangeGamutLiveModeOut
const (
	COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_SDR_BT_709_100_NITS ColorfrontDynRangeGamutLiveModeOut = "SDR BT.709 100 Nits"
	COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_SDR_EXTENDED_BT_709 ColorfrontDynRangeGamutLiveModeOut = "SDR Extended BT.709"
	COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_PQ_BT_2020_1000_NITS ColorfrontDynRangeGamutLiveModeOut = "PQ BT.2020 1000 Nits"
	COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_PQ_P3_D65_1000_NITS ColorfrontDynRangeGamutLiveModeOut = "PQ P3D65 1000 Nits"
	COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_HLG_BT_2100 ColorfrontDynRangeGamutLiveModeOut = "HLG BT.2100"
	COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_HLG_EXTENDED_BT_709 ColorfrontDynRangeGamutLiveModeOut = "HLG Extended BT.709"
	COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_HLG_EXTENDED_BT_2100 ColorfrontDynRangeGamutLiveModeOut = "HLG Extended BT.2100"
	COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_SONY_S_LOG3_S_GAMUT3 ColorfrontDynRangeGamutLiveModeOut = "Sony SLog3 S-Gamut3"
	COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_SONY_S_LOG3_BT_2020 ColorfrontDynRangeGamutLiveModeOut = "Sony SLog3 BT.2020"
	COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_ARRI_LOG_C_WIDE_GAMUT ColorfrontDynRangeGamutLiveModeOut = "ARRI Log C Wide Gamut"
	COLORFRONTDYNRANGEGAMUTLIVEMODEOUT_ARRI_LOG_C4_WIDE_GAMUT_4 ColorfrontDynRangeGamutLiveModeOut = "ARRI LogC4 Wide Gamut 4"
)

// All allowed values of ColorfrontDynRangeGamutLiveModeOut enum
var AllowedColorfrontDynRangeGamutLiveModeOutEnumValues = []ColorfrontDynRangeGamutLiveModeOut{
	"SDR BT.709 100 Nits",
	"SDR Extended BT.709",
	"PQ BT.2020 1000 Nits",
	"PQ P3D65 1000 Nits",
	"HLG BT.2100",
	"HLG Extended BT.709",
	"HLG Extended BT.2100",
	"Sony SLog3 S-Gamut3",
	"Sony SLog3 BT.2020",
	"ARRI Log C Wide Gamut",
	"ARRI LogC4 Wide Gamut 4",
}

func (v *ColorfrontDynRangeGamutLiveModeOut) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := ColorfrontDynRangeGamutLiveModeOut(value)
	for _, existing := range AllowedColorfrontDynRangeGamutLiveModeOutEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid ColorfrontDynRangeGamutLiveModeOut", value)
}

// NewColorfrontDynRangeGamutLiveModeOutFromValue returns a pointer to a valid ColorfrontDynRangeGamutLiveModeOut
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewColorfrontDynRangeGamutLiveModeOutFromValue(v string) (*ColorfrontDynRangeGamutLiveModeOut, error) {
	ev := ColorfrontDynRangeGamutLiveModeOut(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for ColorfrontDynRangeGamutLiveModeOut: valid values are %v", v, AllowedColorfrontDynRangeGamutLiveModeOutEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v ColorfrontDynRangeGamutLiveModeOut) IsValid() bool {
	for _, existing := range AllowedColorfrontDynRangeGamutLiveModeOutEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to ColorfrontDynRangeGamutLiveModeOut value
func (v ColorfrontDynRangeGamutLiveModeOut) Ptr() *ColorfrontDynRangeGamutLiveModeOut {
	return &v
}

type NullableColorfrontDynRangeGamutLiveModeOut struct {
	value *ColorfrontDynRangeGamutLiveModeOut
	isSet bool
}

func (v NullableColorfrontDynRangeGamutLiveModeOut) Get() *ColorfrontDynRangeGamutLiveModeOut {
	return v.value
}

func (v *NullableColorfrontDynRangeGamutLiveModeOut) Set(val *ColorfrontDynRangeGamutLiveModeOut) {
	v.value = val
	v.isSet = true
}

func (v NullableColorfrontDynRangeGamutLiveModeOut) IsSet() bool {
	return v.isSet
}

func (v *NullableColorfrontDynRangeGamutLiveModeOut) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableColorfrontDynRangeGamutLiveModeOut(val *ColorfrontDynRangeGamutLiveModeOut) *NullableColorfrontDynRangeGamutLiveModeOut {
	return &NullableColorfrontDynRangeGamutLiveModeOut{value: val, isSet: true}
}

func (v NullableColorfrontDynRangeGamutLiveModeOut) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableColorfrontDynRangeGamutLiveModeOut) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

