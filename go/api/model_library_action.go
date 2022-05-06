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

// LibraryAction the model 'LibraryAction'
type LibraryAction string

// List of LibraryAction
const (
	LIBRARYACTION_IDLE LibraryAction = "Idle"
	LIBRARYACTION_DELETE_ENTRY LibraryAction = "DeleteEntry"
	LIBRARYACTION_STORE_ENTRY LibraryAction = "StoreEntry"
	LIBRARYACTION_RECALL_ENTRY LibraryAction = "RecallEntry"
	LIBRARYACTION_SET_USER_NAME LibraryAction = "SetUserName"
	LIBRARYACTION_CAPTURE LibraryAction = "Capture"
	LIBRARYACTION_RESCAN LibraryAction = "Rescan"
)

// All allowed values of LibraryAction enum
var AllowedLibraryActionEnumValues = []LibraryAction{
	"Idle",
	"DeleteEntry",
	"StoreEntry",
	"RecallEntry",
	"SetUserName",
	"Capture",
	"Rescan",
}

func (v *LibraryAction) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := LibraryAction(value)
	for _, existing := range AllowedLibraryActionEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid LibraryAction", value)
}

// NewLibraryActionFromValue returns a pointer to a valid LibraryAction
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewLibraryActionFromValue(v string) (*LibraryAction, error) {
	ev := LibraryAction(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for LibraryAction: valid values are %v", v, AllowedLibraryActionEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v LibraryAction) IsValid() bool {
	for _, existing := range AllowedLibraryActionEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to LibraryAction value
func (v LibraryAction) Ptr() *LibraryAction {
	return &v
}

type NullableLibraryAction struct {
	value *LibraryAction
	isSet bool
}

func (v NullableLibraryAction) Get() *LibraryAction {
	return v.value
}

func (v *NullableLibraryAction) Set(val *LibraryAction) {
	v.value = val
	v.isSet = true
}

func (v NullableLibraryAction) IsSet() bool {
	return v.isSet
}

func (v *NullableLibraryAction) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableLibraryAction(val *LibraryAction) *NullableLibraryAction {
	return &NullableLibraryAction{value: val, isSet: true}
}

func (v NullableLibraryAction) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableLibraryAction) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

