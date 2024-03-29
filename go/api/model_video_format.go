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

// VideoFormat the model 'VideoFormat'
type VideoFormat string

// List of VideoFormat
const (
	VIDEOFORMAT_AUTO VideoFormat = "Auto"
	VIDEOFORMAT_UNKNOWN VideoFormat = "Unknown"
	VIDEOFORMAT__720P50 VideoFormat = "720p50"
	VIDEOFORMAT__720P59_94 VideoFormat = "720p59.94"
	VIDEOFORMAT__720P60 VideoFormat = "720p60"
	VIDEOFORMAT__1080I50 VideoFormat = "1080i50"
	VIDEOFORMAT__1080I59_94 VideoFormat = "1080i59.94"
	VIDEOFORMAT__1080I60 VideoFormat = "1080i60"
	VIDEOFORMAT__1080_PS_F23_98 VideoFormat = "1080PsF23.98"
	VIDEOFORMAT__1080_PS_F24 VideoFormat = "1080PsF24"
	VIDEOFORMAT__1080_PS_F25 VideoFormat = "1080PsF25"
	VIDEOFORMAT__1080_PS_F29_97 VideoFormat = "1080PsF29.97"
	VIDEOFORMAT__1080_PS_F30 VideoFormat = "1080PsF30"
	VIDEOFORMAT__1080P23_98 VideoFormat = "1080p23.98"
	VIDEOFORMAT__1080P24 VideoFormat = "1080p24"
	VIDEOFORMAT__1080P25 VideoFormat = "1080p25"
	VIDEOFORMAT__1080P29_97 VideoFormat = "1080p29.97"
	VIDEOFORMAT__1080P30 VideoFormat = "1080p30"
	VIDEOFORMAT__1080P50 VideoFormat = "1080p50"
	VIDEOFORMAT__1080P59_94 VideoFormat = "1080p59.94"
	VIDEOFORMAT__1080P60 VideoFormat = "1080p60"
	VIDEOFORMAT__2_KP23_98 VideoFormat = "2Kp23.98"
	VIDEOFORMAT__2_KP24 VideoFormat = "2Kp24"
	VIDEOFORMAT__2_KP25 VideoFormat = "2Kp25"
	VIDEOFORMAT__2_KP29_97 VideoFormat = "2Kp29.97"
	VIDEOFORMAT__2_KP30 VideoFormat = "2Kp30"
	VIDEOFORMAT__2_KP47_95 VideoFormat = "2Kp47.95"
	VIDEOFORMAT__2_KP48 VideoFormat = "2Kp48"
	VIDEOFORMAT__2_KP50 VideoFormat = "2Kp50"
	VIDEOFORMAT__2_KP59_94 VideoFormat = "2Kp59.94"
	VIDEOFORMAT__2_KP60 VideoFormat = "2Kp60"
	VIDEOFORMAT__2_KPS_F23_98 VideoFormat = "2KPsF23.98"
	VIDEOFORMAT__2_KPS_F24 VideoFormat = "2KPsF24"
	VIDEOFORMAT__2_KPS_F25 VideoFormat = "2KPsF25"
	VIDEOFORMAT_UHDP23_98 VideoFormat = "UHDp23.98"
	VIDEOFORMAT_UHDP24 VideoFormat = "UHDp24"
	VIDEOFORMAT_UHDP25 VideoFormat = "UHDp25"
	VIDEOFORMAT_UHDP29_97 VideoFormat = "UHDp29.97"
	VIDEOFORMAT_UHDP30 VideoFormat = "UHDp30"
	VIDEOFORMAT_UHDP50 VideoFormat = "UHDp50"
	VIDEOFORMAT_UHDP59_94 VideoFormat = "UHDp59.94"
	VIDEOFORMAT_UHDP60 VideoFormat = "UHDp60"
	VIDEOFORMAT__4_KP23_98 VideoFormat = "4Kp23.98"
	VIDEOFORMAT__4_KP24 VideoFormat = "4Kp24"
	VIDEOFORMAT__4_KP25 VideoFormat = "4Kp25"
	VIDEOFORMAT__4_KP29_97 VideoFormat = "4Kp29.97"
	VIDEOFORMAT__4_KP30 VideoFormat = "4Kp30"
	VIDEOFORMAT__4_KP47_95 VideoFormat = "4Kp47.95"
	VIDEOFORMAT__4_KP48 VideoFormat = "4Kp48"
	VIDEOFORMAT__4_KP50 VideoFormat = "4Kp50"
	VIDEOFORMAT__4_KP59_94 VideoFormat = "4Kp59.94"
	VIDEOFORMAT__4_KP60 VideoFormat = "4Kp60"
)

// All allowed values of VideoFormat enum
var AllowedVideoFormatEnumValues = []VideoFormat{
	"Auto",
	"Unknown",
	"720p50",
	"720p59.94",
	"720p60",
	"1080i50",
	"1080i59.94",
	"1080i60",
	"1080PsF23.98",
	"1080PsF24",
	"1080PsF25",
	"1080PsF29.97",
	"1080PsF30",
	"1080p23.98",
	"1080p24",
	"1080p25",
	"1080p29.97",
	"1080p30",
	"1080p50",
	"1080p59.94",
	"1080p60",
	"2Kp23.98",
	"2Kp24",
	"2Kp25",
	"2Kp29.97",
	"2Kp30",
	"2Kp47.95",
	"2Kp48",
	"2Kp50",
	"2Kp59.94",
	"2Kp60",
	"2KPsF23.98",
	"2KPsF24",
	"2KPsF25",
	"UHDp23.98",
	"UHDp24",
	"UHDp25",
	"UHDp29.97",
	"UHDp30",
	"UHDp50",
	"UHDp59.94",
	"UHDp60",
	"4Kp23.98",
	"4Kp24",
	"4Kp25",
	"4Kp29.97",
	"4Kp30",
	"4Kp47.95",
	"4Kp48",
	"4Kp50",
	"4Kp59.94",
	"4Kp60",
}

func (v *VideoFormat) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := VideoFormat(value)
	for _, existing := range AllowedVideoFormatEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid VideoFormat", value)
}

// NewVideoFormatFromValue returns a pointer to a valid VideoFormat
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewVideoFormatFromValue(v string) (*VideoFormat, error) {
	ev := VideoFormat(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for VideoFormat: valid values are %v", v, AllowedVideoFormatEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v VideoFormat) IsValid() bool {
	for _, existing := range AllowedVideoFormatEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to VideoFormat value
func (v VideoFormat) Ptr() *VideoFormat {
	return &v
}

type NullableVideoFormat struct {
	value *VideoFormat
	isSet bool
}

func (v NullableVideoFormat) Get() *VideoFormat {
	return v.value
}

func (v *NullableVideoFormat) Set(val *VideoFormat) {
	v.value = val
	v.isSet = true
}

func (v NullableVideoFormat) IsSet() bool {
	return v.isSet
}

func (v *NullableVideoFormat) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableVideoFormat(val *VideoFormat) *NullableVideoFormat {
	return &NullableVideoFormat{value: val, isSet: true}
}

func (v NullableVideoFormat) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableVideoFormat) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

