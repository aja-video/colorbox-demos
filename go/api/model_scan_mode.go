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

// ScanMode the model 'ScanMode'
type ScanMode string

// List of ScanMode
const (
	SCANMODE_AUTO ScanMode = "Auto"
	SCANMODE_PROGRESSIVE ScanMode = "Progressive"
	SCANMODE_INTERLACED ScanMode = "Interlaced"
	SCANMODE_PS_F ScanMode = "PsF"
)

// All allowed values of ScanMode enum
var AllowedScanModeEnumValues = []ScanMode{
	"Auto",
	"Progressive",
	"Interlaced",
	"PsF",
}

func (v *ScanMode) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := ScanMode(value)
	for _, existing := range AllowedScanModeEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid ScanMode", value)
}

// NewScanModeFromValue returns a pointer to a valid ScanMode
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewScanModeFromValue(v string) (*ScanMode, error) {
	ev := ScanMode(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for ScanMode: valid values are %v", v, AllowedScanModeEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v ScanMode) IsValid() bool {
	for _, existing := range AllowedScanModeEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to ScanMode value
func (v ScanMode) Ptr() *ScanMode {
	return &v
}

type NullableScanMode struct {
	value *ScanMode
	isSet bool
}

func (v NullableScanMode) Get() *ScanMode {
	return v.value
}

func (v *NullableScanMode) Set(val *ScanMode) {
	v.value = val
	v.isSet = true
}

func (v NullableScanMode) IsSet() bool {
	return v.isSet
}

func (v *NullableScanMode) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableScanMode(val *ScanMode) *NullableScanMode {
	return &NullableScanMode{value: val, isSet: true}
}

func (v NullableScanMode) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableScanMode) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

