/*
OpenAPI ColorBox

This is a REST API for the AJA ColorBox product.

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

// NetDevice struct for NetDevice
type NetDevice struct {
	Config *NetConfig `json:"config,omitempty"`
	Status *NetStatus `json:"status,omitempty"`
	ActiveParams *NetParams `json:"activeParams,omitempty"`
	StagedParams *NetParams `json:"stagedParams,omitempty"`
}

// NewNetDevice instantiates a new NetDevice object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewNetDevice() *NetDevice {
	this := NetDevice{}
	return &this
}

// NewNetDeviceWithDefaults instantiates a new NetDevice object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewNetDeviceWithDefaults() *NetDevice {
	this := NetDevice{}
	return &this
}

// GetConfig returns the Config field value if set, zero value otherwise.
func (o *NetDevice) GetConfig() NetConfig {
	if o == nil || o.Config == nil {
		var ret NetConfig
		return ret
	}
	return *o.Config
}

// GetConfigOk returns a tuple with the Config field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *NetDevice) GetConfigOk() (*NetConfig, bool) {
	if o == nil || o.Config == nil {
		return nil, false
	}
	return o.Config, true
}



// HasConfig returns a boolean if a field has been set.
func (o *NetDevice) HasConfig() bool {
	if o != nil && o.Config != nil {
		return true
	}

	return false
}

// SetConfig gets a reference to the given NetConfig and assigns it to the Config field.
func (o *NetDevice) SetConfig(v NetConfig) {
	tmp := v
	o.Config = &tmp
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *NetDevice) GetStatus() NetStatus {
	if o == nil || o.Status == nil {
		var ret NetStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *NetDevice) GetStatusOk() (*NetStatus, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}



// HasStatus returns a boolean if a field has been set.
func (o *NetDevice) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given NetStatus and assigns it to the Status field.
func (o *NetDevice) SetStatus(v NetStatus) {
	tmp := v
	o.Status = &tmp
}

// GetActiveParams returns the ActiveParams field value if set, zero value otherwise.
func (o *NetDevice) GetActiveParams() NetParams {
	if o == nil || o.ActiveParams == nil {
		var ret NetParams
		return ret
	}
	return *o.ActiveParams
}

// GetActiveParamsOk returns a tuple with the ActiveParams field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *NetDevice) GetActiveParamsOk() (*NetParams, bool) {
	if o == nil || o.ActiveParams == nil {
		return nil, false
	}
	return o.ActiveParams, true
}



// HasActiveParams returns a boolean if a field has been set.
func (o *NetDevice) HasActiveParams() bool {
	if o != nil && o.ActiveParams != nil {
		return true
	}

	return false
}

// SetActiveParams gets a reference to the given NetParams and assigns it to the ActiveParams field.
func (o *NetDevice) SetActiveParams(v NetParams) {
	tmp := v
	o.ActiveParams = &tmp
}

// GetStagedParams returns the StagedParams field value if set, zero value otherwise.
func (o *NetDevice) GetStagedParams() NetParams {
	if o == nil || o.StagedParams == nil {
		var ret NetParams
		return ret
	}
	return *o.StagedParams
}

// GetStagedParamsOk returns a tuple with the StagedParams field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *NetDevice) GetStagedParamsOk() (*NetParams, bool) {
	if o == nil || o.StagedParams == nil {
		return nil, false
	}
	return o.StagedParams, true
}



// HasStagedParams returns a boolean if a field has been set.
func (o *NetDevice) HasStagedParams() bool {
	if o != nil && o.StagedParams != nil {
		return true
	}

	return false
}

// SetStagedParams gets a reference to the given NetParams and assigns it to the StagedParams field.
func (o *NetDevice) SetStagedParams(v NetParams) {
	tmp := v
	o.StagedParams = &tmp
}

func (o NetDevice) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Config != nil {
		toSerialize["config"] = o.Config
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	if o.ActiveParams != nil {
		toSerialize["activeParams"] = o.ActiveParams
	}
	if o.StagedParams != nil {
		toSerialize["stagedParams"] = o.StagedParams
	}
	return json.Marshal(toSerialize)
}


func (o *NetDevice) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	return valueChanged
}

type NullableNetDevice struct {
	value *NetDevice
	isSet bool
}

func (v NullableNetDevice) Get() *NetDevice {
	return v.value
}

func (v *NullableNetDevice) Set(val *NetDevice) {
	v.value = val
	v.isSet = true
}

func (v NullableNetDevice) IsSet() bool {
	return v.isSet
}

func (v *NullableNetDevice) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableNetDevice(val *NetDevice) *NullableNetDevice {
	return &NullableNetDevice{value: val, isSet: true}
}

func (v NullableNetDevice) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableNetDevice) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


