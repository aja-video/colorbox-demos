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

// FileTypeChoice the model 'FileTypeChoice'
type FileTypeChoice string

// List of FileTypeChoice
const (
	FILETYPECHOICE_TIFF FileTypeChoice = "TIFF"
	FILETYPECHOICE_PNG FileTypeChoice = "PNG"
	FILETYPECHOICE_JPEG FileTypeChoice = "JPEG"
)

// All allowed values of FileTypeChoice enum
var AllowedFileTypeChoiceEnumValues = []FileTypeChoice{
	"TIFF",
	"PNG",
	"JPEG",
}

func (v *FileTypeChoice) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := FileTypeChoice(value)
	for _, existing := range AllowedFileTypeChoiceEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid FileTypeChoice", value)
}

// NewFileTypeChoiceFromValue returns a pointer to a valid FileTypeChoice
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewFileTypeChoiceFromValue(v string) (*FileTypeChoice, error) {
	ev := FileTypeChoice(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for FileTypeChoice: valid values are %v", v, AllowedFileTypeChoiceEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v FileTypeChoice) IsValid() bool {
	for _, existing := range AllowedFileTypeChoiceEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to FileTypeChoice value
func (v FileTypeChoice) Ptr() *FileTypeChoice {
	return &v
}

type NullableFileTypeChoice struct {
	value *FileTypeChoice
	isSet bool
}

func (v NullableFileTypeChoice) Get() *FileTypeChoice {
	return v.value
}

func (v *NullableFileTypeChoice) Set(val *FileTypeChoice) {
	v.value = val
	v.isSet = true
}

func (v NullableFileTypeChoice) IsSet() bool {
	return v.isSet
}

func (v *NullableFileTypeChoice) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableFileTypeChoice(val *FileTypeChoice) *NullableFileTypeChoice {
	return &NullableFileTypeChoice{value: val, isSet: true}
}

func (v NullableFileTypeChoice) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableFileTypeChoice) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

