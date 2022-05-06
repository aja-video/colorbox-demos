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

// PipelineRange the model 'PipelineRange'
type PipelineRange string

// List of PipelineRange
const (
	PIPELINERANGE_SMPTE_FULL PipelineRange = "SMPTEFull"
	PIPELINERANGE_SMPTE_NARROW PipelineRange = "SMPTENarrow"
	PIPELINERANGE_SMPTESDI_FULL PipelineRange = "SMPTESDIFull"
)

// All allowed values of PipelineRange enum
var AllowedPipelineRangeEnumValues = []PipelineRange{
	"SMPTEFull",
	"SMPTENarrow",
	"SMPTESDIFull",
}

func (v *PipelineRange) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := PipelineRange(value)
	for _, existing := range AllowedPipelineRangeEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid PipelineRange", value)
}

// NewPipelineRangeFromValue returns a pointer to a valid PipelineRange
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewPipelineRangeFromValue(v string) (*PipelineRange, error) {
	ev := PipelineRange(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for PipelineRange: valid values are %v", v, AllowedPipelineRangeEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v PipelineRange) IsValid() bool {
	for _, existing := range AllowedPipelineRangeEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to PipelineRange value
func (v PipelineRange) Ptr() *PipelineRange {
	return &v
}

type NullablePipelineRange struct {
	value *PipelineRange
	isSet bool
}

func (v NullablePipelineRange) Get() *PipelineRange {
	return v.value
}

func (v *NullablePipelineRange) Set(val *PipelineRange) {
	v.value = val
	v.isSet = true
}

func (v NullablePipelineRange) IsSet() bool {
	return v.isSet
}

func (v *NullablePipelineRange) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePipelineRange(val *PipelineRange) *NullablePipelineRange {
	return &NullablePipelineRange{value: val, isSet: true}
}

func (v NullablePipelineRange) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePipelineRange) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
