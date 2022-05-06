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

// DHCPState the model 'DHCPState'
type DHCPState string

// List of DHCPState
const (
	DHCPSTATE_DISABLED DHCPState = "Disabled"
	DHCPSTATE_DISCOVER DHCPState = "Discover"
	DHCPSTATE_REQUEST DHCPState = "Request"
	DHCPSTATE_BOUND DHCPState = "Bound"
)

// All allowed values of DHCPState enum
var AllowedDHCPStateEnumValues = []DHCPState{
	"Disabled",
	"Discover",
	"Request",
	"Bound",
}

func (v *DHCPState) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := DHCPState(value)
	for _, existing := range AllowedDHCPStateEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid DHCPState", value)
}

// NewDHCPStateFromValue returns a pointer to a valid DHCPState
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewDHCPStateFromValue(v string) (*DHCPState, error) {
	ev := DHCPState(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for DHCPState: valid values are %v", v, AllowedDHCPStateEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v DHCPState) IsValid() bool {
	for _, existing := range AllowedDHCPStateEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to DHCPState value
func (v DHCPState) Ptr() *DHCPState {
	return &v
}

type NullableDHCPState struct {
	value *DHCPState
	isSet bool
}

func (v NullableDHCPState) Get() *DHCPState {
	return v.value
}

func (v *NullableDHCPState) Set(val *DHCPState) {
	v.value = val
	v.isSet = true
}

func (v NullableDHCPState) IsSet() bool {
	return v.isSet
}

func (v *NullableDHCPState) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableDHCPState(val *DHCPState) *NullableDHCPState {
	return &NullableDHCPState{value: val, isSet: true}
}

func (v NullableDHCPState) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableDHCPState) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
