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

// SystemConfig struct for SystemConfig
type SystemConfig struct {
	HostName *string `json:"hostName,omitempty"`
	SystemOrganizationName *string `json:"systemOrganizationName,omitempty"`
	SsdpEnable *bool `json:"ssdpEnable,omitempty"`
	Identify *bool `json:"identify,omitempty"`
	UpdateRequest *bool `json:"updateRequest,omitempty"`
	Reboot *bool `json:"reboot,omitempty"`
	FactoryPreset *bool `json:"factoryPreset,omitempty"`
	FactoryReset *bool `json:"factoryReset,omitempty"`
	TransformMode *TransformMode `json:"transformMode,omitempty"`
	PreviewAncEnable *bool `json:"previewAncEnable,omitempty"`
	AuthenticationEnable *bool `json:"authenticationEnable,omitempty"`
	FanSpeed *float32 `json:"fanSpeed,omitempty"`
}

// NewSystemConfig instantiates a new SystemConfig object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSystemConfig() *SystemConfig {
	this := SystemConfig{}
	var transformMode TransformMode = TRANSFORMMODE_LUT
	this.TransformMode = &transformMode
	var previewAncEnable bool = false
	this.PreviewAncEnable = &previewAncEnable
	var authenticationEnable bool = false
	this.AuthenticationEnable = &authenticationEnable
	var fanSpeed float32 = 0
	this.FanSpeed = &fanSpeed
	return &this
}

// NewSystemConfigWithDefaults instantiates a new SystemConfig object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSystemConfigWithDefaults() *SystemConfig {
	this := SystemConfig{}
	var transformMode TransformMode = TRANSFORMMODE_LUT
	this.TransformMode = &transformMode
	var previewAncEnable bool = false
	this.PreviewAncEnable = &previewAncEnable
	var authenticationEnable bool = false
	this.AuthenticationEnable = &authenticationEnable
	var fanSpeed float32 = 0
	this.FanSpeed = &fanSpeed
	return &this
}

// GetHostName returns the HostName field value if set, zero value otherwise.
func (o *SystemConfig) GetHostName() string {
	if o == nil || o.HostName == nil {
		var ret string
		return ret
	}
	return *o.HostName
}

// GetHostNameOk returns a tuple with the HostName field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetHostNameOk() (*string, bool) {
	if o == nil || o.HostName == nil {
		return nil, false
	}
	return o.HostName, true
}



// HasHostName returns a boolean if a field has been set.
func (o *SystemConfig) HasHostName() bool {
	if o != nil && o.HostName != nil {
		return true
	}

	return false
}

// SetHostName gets a reference to the given string and assigns it to the HostName field.
func (o *SystemConfig) SetHostName(v string) {
	tmp := v
	o.HostName = &tmp
}

// GetSystemOrganizationName returns the SystemOrganizationName field value if set, zero value otherwise.
func (o *SystemConfig) GetSystemOrganizationName() string {
	if o == nil || o.SystemOrganizationName == nil {
		var ret string
		return ret
	}
	return *o.SystemOrganizationName
}

// GetSystemOrganizationNameOk returns a tuple with the SystemOrganizationName field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetSystemOrganizationNameOk() (*string, bool) {
	if o == nil || o.SystemOrganizationName == nil {
		return nil, false
	}
	return o.SystemOrganizationName, true
}



// HasSystemOrganizationName returns a boolean if a field has been set.
func (o *SystemConfig) HasSystemOrganizationName() bool {
	if o != nil && o.SystemOrganizationName != nil {
		return true
	}

	return false
}

// SetSystemOrganizationName gets a reference to the given string and assigns it to the SystemOrganizationName field.
func (o *SystemConfig) SetSystemOrganizationName(v string) {
	tmp := v
	o.SystemOrganizationName = &tmp
}

// GetSsdpEnable returns the SsdpEnable field value if set, zero value otherwise.
func (o *SystemConfig) GetSsdpEnable() bool {
	if o == nil || o.SsdpEnable == nil {
		var ret bool
		return ret
	}
	return *o.SsdpEnable
}

// GetSsdpEnableOk returns a tuple with the SsdpEnable field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetSsdpEnableOk() (*bool, bool) {
	if o == nil || o.SsdpEnable == nil {
		return nil, false
	}
	return o.SsdpEnable, true
}



// HasSsdpEnable returns a boolean if a field has been set.
func (o *SystemConfig) HasSsdpEnable() bool {
	if o != nil && o.SsdpEnable != nil {
		return true
	}

	return false
}

// SetSsdpEnable gets a reference to the given bool and assigns it to the SsdpEnable field.
func (o *SystemConfig) SetSsdpEnable(v bool) {
	tmp := v
	o.SsdpEnable = &tmp
}

// GetIdentify returns the Identify field value if set, zero value otherwise.
func (o *SystemConfig) GetIdentify() bool {
	if o == nil || o.Identify == nil {
		var ret bool
		return ret
	}
	return *o.Identify
}

// GetIdentifyOk returns a tuple with the Identify field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetIdentifyOk() (*bool, bool) {
	if o == nil || o.Identify == nil {
		return nil, false
	}
	return o.Identify, true
}



// HasIdentify returns a boolean if a field has been set.
func (o *SystemConfig) HasIdentify() bool {
	if o != nil && o.Identify != nil {
		return true
	}

	return false
}

// SetIdentify gets a reference to the given bool and assigns it to the Identify field.
func (o *SystemConfig) SetIdentify(v bool) {
	tmp := v
	o.Identify = &tmp
}

// GetUpdateRequest returns the UpdateRequest field value if set, zero value otherwise.
func (o *SystemConfig) GetUpdateRequest() bool {
	if o == nil || o.UpdateRequest == nil {
		var ret bool
		return ret
	}
	return *o.UpdateRequest
}

// GetUpdateRequestOk returns a tuple with the UpdateRequest field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetUpdateRequestOk() (*bool, bool) {
	if o == nil || o.UpdateRequest == nil {
		return nil, false
	}
	return o.UpdateRequest, true
}



// HasUpdateRequest returns a boolean if a field has been set.
func (o *SystemConfig) HasUpdateRequest() bool {
	if o != nil && o.UpdateRequest != nil {
		return true
	}

	return false
}

// SetUpdateRequest gets a reference to the given bool and assigns it to the UpdateRequest field.
func (o *SystemConfig) SetUpdateRequest(v bool) {
	tmp := v
	o.UpdateRequest = &tmp
}

// GetReboot returns the Reboot field value if set, zero value otherwise.
func (o *SystemConfig) GetReboot() bool {
	if o == nil || o.Reboot == nil {
		var ret bool
		return ret
	}
	return *o.Reboot
}

// GetRebootOk returns a tuple with the Reboot field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetRebootOk() (*bool, bool) {
	if o == nil || o.Reboot == nil {
		return nil, false
	}
	return o.Reboot, true
}



// HasReboot returns a boolean if a field has been set.
func (o *SystemConfig) HasReboot() bool {
	if o != nil && o.Reboot != nil {
		return true
	}

	return false
}

// SetReboot gets a reference to the given bool and assigns it to the Reboot field.
func (o *SystemConfig) SetReboot(v bool) {
	tmp := v
	o.Reboot = &tmp
}

// GetFactoryPreset returns the FactoryPreset field value if set, zero value otherwise.
func (o *SystemConfig) GetFactoryPreset() bool {
	if o == nil || o.FactoryPreset == nil {
		var ret bool
		return ret
	}
	return *o.FactoryPreset
}

// GetFactoryPresetOk returns a tuple with the FactoryPreset field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetFactoryPresetOk() (*bool, bool) {
	if o == nil || o.FactoryPreset == nil {
		return nil, false
	}
	return o.FactoryPreset, true
}



// HasFactoryPreset returns a boolean if a field has been set.
func (o *SystemConfig) HasFactoryPreset() bool {
	if o != nil && o.FactoryPreset != nil {
		return true
	}

	return false
}

// SetFactoryPreset gets a reference to the given bool and assigns it to the FactoryPreset field.
func (o *SystemConfig) SetFactoryPreset(v bool) {
	tmp := v
	o.FactoryPreset = &tmp
}

// GetFactoryReset returns the FactoryReset field value if set, zero value otherwise.
func (o *SystemConfig) GetFactoryReset() bool {
	if o == nil || o.FactoryReset == nil {
		var ret bool
		return ret
	}
	return *o.FactoryReset
}

// GetFactoryResetOk returns a tuple with the FactoryReset field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetFactoryResetOk() (*bool, bool) {
	if o == nil || o.FactoryReset == nil {
		return nil, false
	}
	return o.FactoryReset, true
}



// HasFactoryReset returns a boolean if a field has been set.
func (o *SystemConfig) HasFactoryReset() bool {
	if o != nil && o.FactoryReset != nil {
		return true
	}

	return false
}

// SetFactoryReset gets a reference to the given bool and assigns it to the FactoryReset field.
func (o *SystemConfig) SetFactoryReset(v bool) {
	tmp := v
	o.FactoryReset = &tmp
}

// GetTransformMode returns the TransformMode field value if set, zero value otherwise.
func (o *SystemConfig) GetTransformMode() TransformMode {
	if o == nil || o.TransformMode == nil {
		var ret TransformMode
		return ret
	}
	return *o.TransformMode
}

// GetTransformModeOk returns a tuple with the TransformMode field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetTransformModeOk() (*TransformMode, bool) {
	if o == nil || o.TransformMode == nil {
		return nil, false
	}
	return o.TransformMode, true
}



// HasTransformMode returns a boolean if a field has been set.
func (o *SystemConfig) HasTransformMode() bool {
	if o != nil && o.TransformMode != nil {
		return true
	}

	return false
}

// SetTransformMode gets a reference to the given TransformMode and assigns it to the TransformMode field.
func (o *SystemConfig) SetTransformMode(v TransformMode) {
	tmp := v
	o.TransformMode = &tmp
}

// GetPreviewAncEnable returns the PreviewAncEnable field value if set, zero value otherwise.
func (o *SystemConfig) GetPreviewAncEnable() bool {
	if o == nil || o.PreviewAncEnable == nil {
		var ret bool
		return ret
	}
	return *o.PreviewAncEnable
}

// GetPreviewAncEnableOk returns a tuple with the PreviewAncEnable field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetPreviewAncEnableOk() (*bool, bool) {
	if o == nil || o.PreviewAncEnable == nil {
		return nil, false
	}
	return o.PreviewAncEnable, true
}



// HasPreviewAncEnable returns a boolean if a field has been set.
func (o *SystemConfig) HasPreviewAncEnable() bool {
	if o != nil && o.PreviewAncEnable != nil {
		return true
	}

	return false
}

// SetPreviewAncEnable gets a reference to the given bool and assigns it to the PreviewAncEnable field.
func (o *SystemConfig) SetPreviewAncEnable(v bool) {
	tmp := v
	o.PreviewAncEnable = &tmp
}

// GetAuthenticationEnable returns the AuthenticationEnable field value if set, zero value otherwise.
func (o *SystemConfig) GetAuthenticationEnable() bool {
	if o == nil || o.AuthenticationEnable == nil {
		var ret bool
		return ret
	}
	return *o.AuthenticationEnable
}

// GetAuthenticationEnableOk returns a tuple with the AuthenticationEnable field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetAuthenticationEnableOk() (*bool, bool) {
	if o == nil || o.AuthenticationEnable == nil {
		return nil, false
	}
	return o.AuthenticationEnable, true
}



// HasAuthenticationEnable returns a boolean if a field has been set.
func (o *SystemConfig) HasAuthenticationEnable() bool {
	if o != nil && o.AuthenticationEnable != nil {
		return true
	}

	return false
}

// SetAuthenticationEnable gets a reference to the given bool and assigns it to the AuthenticationEnable field.
func (o *SystemConfig) SetAuthenticationEnable(v bool) {
	tmp := v
	o.AuthenticationEnable = &tmp
}

// GetFanSpeed returns the FanSpeed field value if set, zero value otherwise.
func (o *SystemConfig) GetFanSpeed() float32 {
	if o == nil || o.FanSpeed == nil {
		var ret float32
		return ret
	}
	return *o.FanSpeed
}

// GetFanSpeedOk returns a tuple with the FanSpeed field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SystemConfig) GetFanSpeedOk() (*float32, bool) {
	if o == nil || o.FanSpeed == nil {
		return nil, false
	}
	return o.FanSpeed, true
}

// GetFanSpeedMin returns the minimum value for field FanSpeed.
func (o *SystemConfig) GetFanSpeedMin() float32 {
	return 0
}

// GetFanSpeedMax returns the maximum value for field FanSpeed.
func (o *SystemConfig) GetFanSpeedMax() float32 {
	return 255
}


// HasFanSpeed returns a boolean if a field has been set.
func (o *SystemConfig) HasFanSpeed() bool {
	if o != nil && o.FanSpeed != nil {
		return true
	}

	return false
}

// SetFanSpeed gets a reference to the given float32 and assigns it to the FanSpeed field.
func (o *SystemConfig) SetFanSpeed(v float32) {
	tmp := v
	min := o.GetFanSpeedMin()
	max := o.GetFanSpeedMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.FanSpeed = &tmp
}

func (o SystemConfig) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.HostName != nil {
		toSerialize["hostName"] = o.HostName
	}
	if o.SystemOrganizationName != nil {
		toSerialize["systemOrganizationName"] = o.SystemOrganizationName
	}
	if o.SsdpEnable != nil {
		toSerialize["ssdpEnable"] = o.SsdpEnable
	}
	if o.Identify != nil {
		toSerialize["identify"] = o.Identify
	}
	if o.UpdateRequest != nil {
		toSerialize["updateRequest"] = o.UpdateRequest
	}
	if o.Reboot != nil {
		toSerialize["reboot"] = o.Reboot
	}
	if o.FactoryPreset != nil {
		toSerialize["factoryPreset"] = o.FactoryPreset
	}
	if o.FactoryReset != nil {
		toSerialize["factoryReset"] = o.FactoryReset
	}
	if o.TransformMode != nil {
		toSerialize["transformMode"] = o.TransformMode
	}
	if o.PreviewAncEnable != nil {
		toSerialize["previewAncEnable"] = o.PreviewAncEnable
	}
	if o.AuthenticationEnable != nil {
		toSerialize["authenticationEnable"] = o.AuthenticationEnable
	}
	if o.FanSpeed != nil {
		toSerialize["fanSpeed"] = o.FanSpeed
	}
	return json.Marshal(toSerialize)
}


func (o *SystemConfig) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	if o.HasHostName() {
		var fieldChanged = false
		var v string = o.GetHostName()
		if fieldChanged {
			o.SetHostName(v)
			valueChanged = true
		}
	}
	if o.HasSystemOrganizationName() {
		var fieldChanged = false
		var v string = o.GetSystemOrganizationName()
		if fieldChanged {
			o.SetSystemOrganizationName(v)
			valueChanged = true
		}
	}
	if o.HasFanSpeed() {
		var fieldChanged = false
		var v float32 = o.GetFanSpeed()
		var min float32 = o.GetFanSpeedMin()
		var max float32 = o.GetFanSpeedMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetFanSpeed(v)
			valueChanged = true
		}
	}
	return valueChanged
}

type NullableSystemConfig struct {
	value *SystemConfig
	isSet bool
}

func (v NullableSystemConfig) Get() *SystemConfig {
	return v.value
}

func (v *NullableSystemConfig) Set(val *SystemConfig) {
	v.value = val
	v.isSet = true
}

func (v NullableSystemConfig) IsSet() bool {
	return v.isSet
}

func (v *NullableSystemConfig) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSystemConfig(val *SystemConfig) *NullableSystemConfig {
	return &NullableSystemConfig{value: val, isSet: true}
}

func (v NullableSystemConfig) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSystemConfig) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

