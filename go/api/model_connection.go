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

// Connection the model 'Connection'
type Connection string

// List of Connection
const (
	CONNECTION_AUTO Connection = "Auto"
	CONNECTION_HDMI Connection = "HDMI"
	CONNECTION_DVI Connection = "DVI"
)

// All allowed values of Connection enum
var AllowedConnectionEnumValues = []Connection{
	"Auto",
	"HDMI",
	"DVI",
}

func (v *Connection) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := Connection(value)
	for _, existing := range AllowedConnectionEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid Connection", value)
}

// NewConnectionFromValue returns a pointer to a valid Connection
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewConnectionFromValue(v string) (*Connection, error) {
	ev := Connection(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for Connection: valid values are %v", v, AllowedConnectionEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v Connection) IsValid() bool {
	for _, existing := range AllowedConnectionEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to Connection value
func (v Connection) Ptr() *Connection {
	return &v
}

type NullableConnection struct {
	value *Connection
	isSet bool
}

func (v NullableConnection) Get() *Connection {
	return v.value
}

func (v *NullableConnection) Set(val *Connection) {
	v.value = val
	v.isSet = true
}

func (v NullableConnection) IsSet() bool {
	return v.isSet
}

func (v *NullableConnection) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableConnection(val *Connection) *NullableConnection {
	return &NullableConnection{value: val, isSet: true}
}

func (v NullableConnection) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableConnection) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

