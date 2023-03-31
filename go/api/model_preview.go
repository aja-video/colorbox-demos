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
)

// Preview struct for Preview
type Preview struct {
	// Image data
	Image *string `json:"image,omitempty"`
	// Type of image data i.e. \"jpg\"
	ImageType *string `json:"imageType,omitempty"`
	AncData *string `json:"ancData,omitempty"`
	UserData1 *string `json:"userData1,omitempty"`
	UserData2 *string `json:"userData2,omitempty"`
}

// NewPreview instantiates a new Preview object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPreview() *Preview {
	this := Preview{}
	return &this
}

// NewPreviewWithDefaults instantiates a new Preview object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPreviewWithDefaults() *Preview {
	this := Preview{}
	return &this
}

// GetImage returns the Image field value if set, zero value otherwise.
func (o *Preview) GetImage() string {
	if o == nil || o.Image == nil {
		var ret string
		return ret
	}
	return *o.Image
}

// GetImageOk returns a tuple with the Image field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Preview) GetImageOk() (*string, bool) {
	if o == nil || o.Image == nil {
		return nil, false
	}
	return o.Image, true
}



// HasImage returns a boolean if a field has been set.
func (o *Preview) HasImage() bool {
	if o != nil && o.Image != nil {
		return true
	}

	return false
}

// SetImage gets a reference to the given string and assigns it to the Image field.
func (o *Preview) SetImage(v string) {
	tmp := v
	o.Image = &tmp
}

// GetImageType returns the ImageType field value if set, zero value otherwise.
func (o *Preview) GetImageType() string {
	if o == nil || o.ImageType == nil {
		var ret string
		return ret
	}
	return *o.ImageType
}

// GetImageTypeOk returns a tuple with the ImageType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Preview) GetImageTypeOk() (*string, bool) {
	if o == nil || o.ImageType == nil {
		return nil, false
	}
	return o.ImageType, true
}



// HasImageType returns a boolean if a field has been set.
func (o *Preview) HasImageType() bool {
	if o != nil && o.ImageType != nil {
		return true
	}

	return false
}

// SetImageType gets a reference to the given string and assigns it to the ImageType field.
func (o *Preview) SetImageType(v string) {
	tmp := v
	o.ImageType = &tmp
}

// GetAncData returns the AncData field value if set, zero value otherwise.
func (o *Preview) GetAncData() string {
	if o == nil || o.AncData == nil {
		var ret string
		return ret
	}
	return *o.AncData
}

// GetAncDataOk returns a tuple with the AncData field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Preview) GetAncDataOk() (*string, bool) {
	if o == nil || o.AncData == nil {
		return nil, false
	}
	return o.AncData, true
}



// HasAncData returns a boolean if a field has been set.
func (o *Preview) HasAncData() bool {
	if o != nil && o.AncData != nil {
		return true
	}

	return false
}

// SetAncData gets a reference to the given string and assigns it to the AncData field.
func (o *Preview) SetAncData(v string) {
	tmp := v
	o.AncData = &tmp
}

// GetUserData1 returns the UserData1 field value if set, zero value otherwise.
func (o *Preview) GetUserData1() string {
	if o == nil || o.UserData1 == nil {
		var ret string
		return ret
	}
	return *o.UserData1
}

// GetUserData1Ok returns a tuple with the UserData1 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Preview) GetUserData1Ok() (*string, bool) {
	if o == nil || o.UserData1 == nil {
		return nil, false
	}
	return o.UserData1, true
}



// HasUserData1 returns a boolean if a field has been set.
func (o *Preview) HasUserData1() bool {
	if o != nil && o.UserData1 != nil {
		return true
	}

	return false
}

// SetUserData1 gets a reference to the given string and assigns it to the UserData1 field.
func (o *Preview) SetUserData1(v string) {
	tmp := v
	o.UserData1 = &tmp
}

// GetUserData2 returns the UserData2 field value if set, zero value otherwise.
func (o *Preview) GetUserData2() string {
	if o == nil || o.UserData2 == nil {
		var ret string
		return ret
	}
	return *o.UserData2
}

// GetUserData2Ok returns a tuple with the UserData2 field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Preview) GetUserData2Ok() (*string, bool) {
	if o == nil || o.UserData2 == nil {
		return nil, false
	}
	return o.UserData2, true
}



// HasUserData2 returns a boolean if a field has been set.
func (o *Preview) HasUserData2() bool {
	if o != nil && o.UserData2 != nil {
		return true
	}

	return false
}

// SetUserData2 gets a reference to the given string and assigns it to the UserData2 field.
func (o *Preview) SetUserData2(v string) {
	tmp := v
	o.UserData2 = &tmp
}

func (o Preview) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Image != nil {
		toSerialize["image"] = o.Image
	}
	if o.ImageType != nil {
		toSerialize["imageType"] = o.ImageType
	}
	if o.AncData != nil {
		toSerialize["ancData"] = o.AncData
	}
	if o.UserData1 != nil {
		toSerialize["userData1"] = o.UserData1
	}
	if o.UserData2 != nil {
		toSerialize["userData2"] = o.UserData2
	}
	return json.Marshal(toSerialize)
}


func (o *Preview) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	if o.HasImageType() {
		var fieldChanged = false
		var v string = o.GetImageType()
		if fieldChanged {
			o.SetImageType(v)
			valueChanged = true
		}
	}
	if o.HasUserData1() {
		var fieldChanged = false
		var v string = o.GetUserData1()
		if fieldChanged {
			o.SetUserData1(v)
			valueChanged = true
		}
	}
	if o.HasUserData2() {
		var fieldChanged = false
		var v string = o.GetUserData2()
		if fieldChanged {
			o.SetUserData2(v)
			valueChanged = true
		}
	}
	return valueChanged
}

type NullablePreview struct {
	value *Preview
	isSet bool
}

func (v NullablePreview) Get() *Preview {
	return v.value
}

func (v *NullablePreview) Set(val *Preview) {
	v.value = val
	v.isSet = true
}

func (v NullablePreview) IsSet() bool {
	return v.isSet
}

func (v *NullablePreview) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePreview(val *Preview) *NullablePreview {
	return &NullablePreview{value: val, isSet: true}
}

func (v NullablePreview) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePreview) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


