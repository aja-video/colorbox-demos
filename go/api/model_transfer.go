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

// Transfer the model 'Transfer'
type Transfer string

// List of Transfer
const (
	TRANSFER_AUTO Transfer = "Auto"
	TRANSFER_SDR Transfer = "SDR"
	TRANSFER_HLG Transfer = "HLG"
	TRANSFER_PQ Transfer = "PQ"
)

// All allowed values of Transfer enum
var AllowedTransferEnumValues = []Transfer{
	"Auto",
	"SDR",
	"HLG",
	"PQ",
}

func (v *Transfer) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := Transfer(value)
	for _, existing := range AllowedTransferEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid Transfer", value)
}

// NewTransferFromValue returns a pointer to a valid Transfer
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewTransferFromValue(v string) (*Transfer, error) {
	ev := Transfer(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for Transfer: valid values are %v", v, AllowedTransferEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v Transfer) IsValid() bool {
	for _, existing := range AllowedTransferEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to Transfer value
func (v Transfer) Ptr() *Transfer {
	return &v
}

type NullableTransfer struct {
	value *Transfer
	isSet bool
}

func (v NullableTransfer) Get() *Transfer {
	return v.value
}

func (v *NullableTransfer) Set(val *Transfer) {
	v.value = val
	v.isSet = true
}

func (v NullableTransfer) IsSet() bool {
	return v.isSet
}

func (v *NullableTransfer) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTransfer(val *Transfer) *NullableTransfer {
	return &NullableTransfer{value: val, isSet: true}
}

func (v NullableTransfer) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTransfer) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

