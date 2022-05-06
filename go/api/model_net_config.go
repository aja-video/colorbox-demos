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
)

// NetConfig struct for NetConfig
type NetConfig struct {
	IpConfig *IpConfig `json:"ipConfig,omitempty"`
	IpChangeCommit *int32 `json:"ipChangeCommit,omitempty"`
}

// NewNetConfig instantiates a new NetConfig object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewNetConfig() *NetConfig {
	this := NetConfig{}
	var ipConfig IpConfig = IPCONFIG_DHCP
	this.IpConfig = &ipConfig
	var ipChangeCommit int32 = 0
	this.IpChangeCommit = &ipChangeCommit
	return &this
}

// NewNetConfigWithDefaults instantiates a new NetConfig object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewNetConfigWithDefaults() *NetConfig {
	this := NetConfig{}
	var ipConfig IpConfig = IPCONFIG_DHCP
	this.IpConfig = &ipConfig
	var ipChangeCommit int32 = 0
	this.IpChangeCommit = &ipChangeCommit
	return &this
}

// GetIpConfig returns the IpConfig field value if set, zero value otherwise.
func (o *NetConfig) GetIpConfig() IpConfig {
	if o == nil || o.IpConfig == nil {
		var ret IpConfig
		return ret
	}
	return *o.IpConfig
}

// GetIpConfigOk returns a tuple with the IpConfig field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *NetConfig) GetIpConfigOk() (*IpConfig, bool) {
	if o == nil || o.IpConfig == nil {
		return nil, false
	}
	return o.IpConfig, true
}



// HasIpConfig returns a boolean if a field has been set.
func (o *NetConfig) HasIpConfig() bool {
	if o != nil && o.IpConfig != nil {
		return true
	}

	return false
}

// SetIpConfig gets a reference to the given IpConfig and assigns it to the IpConfig field.
func (o *NetConfig) SetIpConfig(v IpConfig) {
	tmp := v
	o.IpConfig = &tmp
}

// GetIpChangeCommit returns the IpChangeCommit field value if set, zero value otherwise.
func (o *NetConfig) GetIpChangeCommit() int32 {
	if o == nil || o.IpChangeCommit == nil {
		var ret int32
		return ret
	}
	return *o.IpChangeCommit
}

// GetIpChangeCommitOk returns a tuple with the IpChangeCommit field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *NetConfig) GetIpChangeCommitOk() (*int32, bool) {
	if o == nil || o.IpChangeCommit == nil {
		return nil, false
	}
	return o.IpChangeCommit, true
}



// HasIpChangeCommit returns a boolean if a field has been set.
func (o *NetConfig) HasIpChangeCommit() bool {
	if o != nil && o.IpChangeCommit != nil {
		return true
	}

	return false
}

// SetIpChangeCommit gets a reference to the given int32 and assigns it to the IpChangeCommit field.
func (o *NetConfig) SetIpChangeCommit(v int32) {
	tmp := v
	o.IpChangeCommit = &tmp
}

func (o NetConfig) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.IpConfig != nil {
		toSerialize["ipConfig"] = o.IpConfig
	}
	if o.IpChangeCommit != nil {
		toSerialize["ipChangeCommit"] = o.IpChangeCommit
	}
	return json.Marshal(toSerialize)
}


func (o *NetConfig) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	if o.HasIpChangeCommit() {
		var fieldChanged = false
		var v int32 = o.GetIpChangeCommit()
		if fieldChanged {
			o.SetIpChangeCommit(v)
			valueChanged = true
		}
	}
	return valueChanged
}

type NullableNetConfig struct {
	value *NetConfig
	isSet bool
}

func (v NullableNetConfig) Get() *NetConfig {
	return v.value
}

func (v *NullableNetConfig) Set(val *NetConfig) {
	v.value = val
	v.isSet = true
}

func (v NullableNetConfig) IsSet() bool {
	return v.isSet
}

func (v *NullableNetConfig) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableNetConfig(val *NetConfig) *NullableNetConfig {
	return &NullableNetConfig{value: val, isSet: true}
}

func (v NullableNetConfig) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableNetConfig) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

