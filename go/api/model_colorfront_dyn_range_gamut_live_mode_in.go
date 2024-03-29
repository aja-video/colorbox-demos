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

// ColorfrontDynRangeGamutLiveModeIn the model 'ColorfrontDynRangeGamutLiveModeIn'
type ColorfrontDynRangeGamutLiveModeIn string

// List of ColorfrontDynRangeGamutLiveModeIn
const (
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_SDR_BT_709_100_NITS ColorfrontDynRangeGamutLiveModeIn = "SDR BT.709 100 Nits"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_SDR_EXTENDED_BT_709 ColorfrontDynRangeGamutLiveModeIn = "SDR Extended BT.709"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_PQ_BT_2020_1000_NITS ColorfrontDynRangeGamutLiveModeIn = "PQ BT.2020 1000 Nits"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_PQ_P3_D65_1000_NITS ColorfrontDynRangeGamutLiveModeIn = "PQ P3D65 1000 Nits"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_HLG_BT_2100 ColorfrontDynRangeGamutLiveModeIn = "HLG BT.2100"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_HLG_EXTENDED_BT_709 ColorfrontDynRangeGamutLiveModeIn = "HLG Extended BT.709"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_HLG_EXTENDED_BT_2100 ColorfrontDynRangeGamutLiveModeIn = "HLG Extended BT.2100"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_SONY_S_LOG3_S_GAMUT3 ColorfrontDynRangeGamutLiveModeIn = "Sony SLog3 S-Gamut3"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_SONY_S_LOG3_S_GAMUT3_CINE ColorfrontDynRangeGamutLiveModeIn = "Sony SLog3 S-Gamut3 Cine"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_SONY_S_LOG3_BT_2020 ColorfrontDynRangeGamutLiveModeIn = "Sony SLog3 BT.2020"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_ARRI_LOG_C_WIDE_GAMUT ColorfrontDynRangeGamutLiveModeIn = "ARRI Log C Wide Gamut"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_ARRI_LOG_C4_WIDE_GAMUT_4 ColorfrontDynRangeGamutLiveModeIn = "ARRI LogC4 Wide Gamut 4"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_PANASONIC_V_LOG ColorfrontDynRangeGamutLiveModeIn = "Panasonic V-Log"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_RED_LOG3_G10_WIDE_GAMUT ColorfrontDynRangeGamutLiveModeIn = "Red Log3G10 Wide Gamut"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_CANON_LOG_2 ColorfrontDynRangeGamutLiveModeIn = "Canon Log 2"
	COLORFRONTDYNRANGEGAMUTLIVEMODEIN_CANON_LOG_3 ColorfrontDynRangeGamutLiveModeIn = "Canon Log 3"
)

// All allowed values of ColorfrontDynRangeGamutLiveModeIn enum
var AllowedColorfrontDynRangeGamutLiveModeInEnumValues = []ColorfrontDynRangeGamutLiveModeIn{
	"SDR BT.709 100 Nits",
	"SDR Extended BT.709",
	"PQ BT.2020 1000 Nits",
	"PQ P3D65 1000 Nits",
	"HLG BT.2100",
	"HLG Extended BT.709",
	"HLG Extended BT.2100",
	"Sony SLog3 S-Gamut3",
	"Sony SLog3 S-Gamut3 Cine",
	"Sony SLog3 BT.2020",
	"ARRI Log C Wide Gamut",
	"ARRI LogC4 Wide Gamut 4",
	"Panasonic V-Log",
	"Red Log3G10 Wide Gamut",
	"Canon Log 2",
	"Canon Log 3",
}

func (v *ColorfrontDynRangeGamutLiveModeIn) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := ColorfrontDynRangeGamutLiveModeIn(value)
	for _, existing := range AllowedColorfrontDynRangeGamutLiveModeInEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid ColorfrontDynRangeGamutLiveModeIn", value)
}

// NewColorfrontDynRangeGamutLiveModeInFromValue returns a pointer to a valid ColorfrontDynRangeGamutLiveModeIn
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewColorfrontDynRangeGamutLiveModeInFromValue(v string) (*ColorfrontDynRangeGamutLiveModeIn, error) {
	ev := ColorfrontDynRangeGamutLiveModeIn(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for ColorfrontDynRangeGamutLiveModeIn: valid values are %v", v, AllowedColorfrontDynRangeGamutLiveModeInEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v ColorfrontDynRangeGamutLiveModeIn) IsValid() bool {
	for _, existing := range AllowedColorfrontDynRangeGamutLiveModeInEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to ColorfrontDynRangeGamutLiveModeIn value
func (v ColorfrontDynRangeGamutLiveModeIn) Ptr() *ColorfrontDynRangeGamutLiveModeIn {
	return &v
}

type NullableColorfrontDynRangeGamutLiveModeIn struct {
	value *ColorfrontDynRangeGamutLiveModeIn
	isSet bool
}

func (v NullableColorfrontDynRangeGamutLiveModeIn) Get() *ColorfrontDynRangeGamutLiveModeIn {
	return v.value
}

func (v *NullableColorfrontDynRangeGamutLiveModeIn) Set(val *ColorfrontDynRangeGamutLiveModeIn) {
	v.value = val
	v.isSet = true
}

func (v NullableColorfrontDynRangeGamutLiveModeIn) IsSet() bool {
	return v.isSet
}

func (v *NullableColorfrontDynRangeGamutLiveModeIn) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableColorfrontDynRangeGamutLiveModeIn(val *ColorfrontDynRangeGamutLiveModeIn) *NullableColorfrontDynRangeGamutLiveModeIn {
	return &NullableColorfrontDynRangeGamutLiveModeIn{value: val, isSet: true}
}

func (v NullableColorfrontDynRangeGamutLiveModeIn) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableColorfrontDynRangeGamutLiveModeIn) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

