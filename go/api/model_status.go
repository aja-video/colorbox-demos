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

// Status struct for Status
type Status struct {
	DeviceDieTemp *StatusInfo `json:"deviceDieTemp,omitempty"`
	SystemDate *string `json:"systemDate,omitempty"`
	SystemTime *string `json:"systemTime,omitempty"`
	SystemUptime *string `json:"systemUptime,omitempty"`
	SystemOsName *string `json:"systemOsName,omitempty"`
	SystemSerialNumber *string `json:"systemSerialNumber,omitempty"`
	SystemCatalogNumber *string `json:"systemCatalogNumber,omitempty"`
	SystemAppSwVersion *string `json:"systemAppSwVersion,omitempty"`
	SystemSupportInfo *string `json:"systemSupportInfo,omitempty"`
	EulaAccepted *bool `json:"eulaAccepted,omitempty"`
	LicenseActive *bool `json:"licenseActive,omitempty"`
	BbcLutsLicensed *bool `json:"bbcLutsLicensed,omitempty"`
	OrionEngineLicensed *bool `json:"orionEngineLicensed,omitempty"`
	ColorfrontEngineLicensed *bool `json:"colorfrontEngineLicensed,omitempty"`
	ShutdownTime *int32 `json:"shutdownTime,omitempty"`
	ColorfrontTransformVersion *string `json:"colorfrontTransformVersion,omitempty"`
	ColorfrontEngineVersion *string `json:"colorfrontEngineVersion,omitempty"`
	OrionVersion *string `json:"orionVersion,omitempty"`
	BbcLutVersion *string `json:"bbcLutVersion,omitempty"`
	NbcuLutVersion *string `json:"nbcuLutVersion,omitempty"`
	CpuBusy *bool `json:"cpuBusy,omitempty"`
}

// NewStatus instantiates a new Status object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewStatus() *Status {
	this := Status{}
	return &this
}

// NewStatusWithDefaults instantiates a new Status object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewStatusWithDefaults() *Status {
	this := Status{}
	return &this
}

// GetDeviceDieTemp returns the DeviceDieTemp field value if set, zero value otherwise.
func (o *Status) GetDeviceDieTemp() StatusInfo {
	if o == nil || o.DeviceDieTemp == nil {
		var ret StatusInfo
		return ret
	}
	return *o.DeviceDieTemp
}

// GetDeviceDieTempOk returns a tuple with the DeviceDieTemp field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetDeviceDieTempOk() (*StatusInfo, bool) {
	if o == nil || o.DeviceDieTemp == nil {
		return nil, false
	}
	return o.DeviceDieTemp, true
}



// HasDeviceDieTemp returns a boolean if a field has been set.
func (o *Status) HasDeviceDieTemp() bool {
	if o != nil && o.DeviceDieTemp != nil {
		return true
	}

	return false
}

// SetDeviceDieTemp gets a reference to the given StatusInfo and assigns it to the DeviceDieTemp field.
func (o *Status) SetDeviceDieTemp(v StatusInfo) {
	tmp := v
	o.DeviceDieTemp = &tmp
}

// GetSystemDate returns the SystemDate field value if set, zero value otherwise.
func (o *Status) GetSystemDate() string {
	if o == nil || o.SystemDate == nil {
		var ret string
		return ret
	}
	return *o.SystemDate
}

// GetSystemDateOk returns a tuple with the SystemDate field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetSystemDateOk() (*string, bool) {
	if o == nil || o.SystemDate == nil {
		return nil, false
	}
	return o.SystemDate, true
}



// HasSystemDate returns a boolean if a field has been set.
func (o *Status) HasSystemDate() bool {
	if o != nil && o.SystemDate != nil {
		return true
	}

	return false
}

// SetSystemDate gets a reference to the given string and assigns it to the SystemDate field.
func (o *Status) SetSystemDate(v string) {
	tmp := v
	o.SystemDate = &tmp
}

// GetSystemTime returns the SystemTime field value if set, zero value otherwise.
func (o *Status) GetSystemTime() string {
	if o == nil || o.SystemTime == nil {
		var ret string
		return ret
	}
	return *o.SystemTime
}

// GetSystemTimeOk returns a tuple with the SystemTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetSystemTimeOk() (*string, bool) {
	if o == nil || o.SystemTime == nil {
		return nil, false
	}
	return o.SystemTime, true
}



// HasSystemTime returns a boolean if a field has been set.
func (o *Status) HasSystemTime() bool {
	if o != nil && o.SystemTime != nil {
		return true
	}

	return false
}

// SetSystemTime gets a reference to the given string and assigns it to the SystemTime field.
func (o *Status) SetSystemTime(v string) {
	tmp := v
	o.SystemTime = &tmp
}

// GetSystemUptime returns the SystemUptime field value if set, zero value otherwise.
func (o *Status) GetSystemUptime() string {
	if o == nil || o.SystemUptime == nil {
		var ret string
		return ret
	}
	return *o.SystemUptime
}

// GetSystemUptimeOk returns a tuple with the SystemUptime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetSystemUptimeOk() (*string, bool) {
	if o == nil || o.SystemUptime == nil {
		return nil, false
	}
	return o.SystemUptime, true
}



// HasSystemUptime returns a boolean if a field has been set.
func (o *Status) HasSystemUptime() bool {
	if o != nil && o.SystemUptime != nil {
		return true
	}

	return false
}

// SetSystemUptime gets a reference to the given string and assigns it to the SystemUptime field.
func (o *Status) SetSystemUptime(v string) {
	tmp := v
	o.SystemUptime = &tmp
}

// GetSystemOsName returns the SystemOsName field value if set, zero value otherwise.
func (o *Status) GetSystemOsName() string {
	if o == nil || o.SystemOsName == nil {
		var ret string
		return ret
	}
	return *o.SystemOsName
}

// GetSystemOsNameOk returns a tuple with the SystemOsName field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetSystemOsNameOk() (*string, bool) {
	if o == nil || o.SystemOsName == nil {
		return nil, false
	}
	return o.SystemOsName, true
}



// HasSystemOsName returns a boolean if a field has been set.
func (o *Status) HasSystemOsName() bool {
	if o != nil && o.SystemOsName != nil {
		return true
	}

	return false
}

// SetSystemOsName gets a reference to the given string and assigns it to the SystemOsName field.
func (o *Status) SetSystemOsName(v string) {
	tmp := v
	o.SystemOsName = &tmp
}

// GetSystemSerialNumber returns the SystemSerialNumber field value if set, zero value otherwise.
func (o *Status) GetSystemSerialNumber() string {
	if o == nil || o.SystemSerialNumber == nil {
		var ret string
		return ret
	}
	return *o.SystemSerialNumber
}

// GetSystemSerialNumberOk returns a tuple with the SystemSerialNumber field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetSystemSerialNumberOk() (*string, bool) {
	if o == nil || o.SystemSerialNumber == nil {
		return nil, false
	}
	return o.SystemSerialNumber, true
}



// HasSystemSerialNumber returns a boolean if a field has been set.
func (o *Status) HasSystemSerialNumber() bool {
	if o != nil && o.SystemSerialNumber != nil {
		return true
	}

	return false
}

// SetSystemSerialNumber gets a reference to the given string and assigns it to the SystemSerialNumber field.
func (o *Status) SetSystemSerialNumber(v string) {
	tmp := v
	o.SystemSerialNumber = &tmp
}

// GetSystemCatalogNumber returns the SystemCatalogNumber field value if set, zero value otherwise.
func (o *Status) GetSystemCatalogNumber() string {
	if o == nil || o.SystemCatalogNumber == nil {
		var ret string
		return ret
	}
	return *o.SystemCatalogNumber
}

// GetSystemCatalogNumberOk returns a tuple with the SystemCatalogNumber field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetSystemCatalogNumberOk() (*string, bool) {
	if o == nil || o.SystemCatalogNumber == nil {
		return nil, false
	}
	return o.SystemCatalogNumber, true
}



// HasSystemCatalogNumber returns a boolean if a field has been set.
func (o *Status) HasSystemCatalogNumber() bool {
	if o != nil && o.SystemCatalogNumber != nil {
		return true
	}

	return false
}

// SetSystemCatalogNumber gets a reference to the given string and assigns it to the SystemCatalogNumber field.
func (o *Status) SetSystemCatalogNumber(v string) {
	tmp := v
	o.SystemCatalogNumber = &tmp
}

// GetSystemAppSwVersion returns the SystemAppSwVersion field value if set, zero value otherwise.
func (o *Status) GetSystemAppSwVersion() string {
	if o == nil || o.SystemAppSwVersion == nil {
		var ret string
		return ret
	}
	return *o.SystemAppSwVersion
}

// GetSystemAppSwVersionOk returns a tuple with the SystemAppSwVersion field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetSystemAppSwVersionOk() (*string, bool) {
	if o == nil || o.SystemAppSwVersion == nil {
		return nil, false
	}
	return o.SystemAppSwVersion, true
}



// HasSystemAppSwVersion returns a boolean if a field has been set.
func (o *Status) HasSystemAppSwVersion() bool {
	if o != nil && o.SystemAppSwVersion != nil {
		return true
	}

	return false
}

// SetSystemAppSwVersion gets a reference to the given string and assigns it to the SystemAppSwVersion field.
func (o *Status) SetSystemAppSwVersion(v string) {
	tmp := v
	o.SystemAppSwVersion = &tmp
}

// GetSystemSupportInfo returns the SystemSupportInfo field value if set, zero value otherwise.
func (o *Status) GetSystemSupportInfo() string {
	if o == nil || o.SystemSupportInfo == nil {
		var ret string
		return ret
	}
	return *o.SystemSupportInfo
}

// GetSystemSupportInfoOk returns a tuple with the SystemSupportInfo field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetSystemSupportInfoOk() (*string, bool) {
	if o == nil || o.SystemSupportInfo == nil {
		return nil, false
	}
	return o.SystemSupportInfo, true
}



// HasSystemSupportInfo returns a boolean if a field has been set.
func (o *Status) HasSystemSupportInfo() bool {
	if o != nil && o.SystemSupportInfo != nil {
		return true
	}

	return false
}

// SetSystemSupportInfo gets a reference to the given string and assigns it to the SystemSupportInfo field.
func (o *Status) SetSystemSupportInfo(v string) {
	tmp := v
	o.SystemSupportInfo = &tmp
}

// GetEulaAccepted returns the EulaAccepted field value if set, zero value otherwise.
func (o *Status) GetEulaAccepted() bool {
	if o == nil || o.EulaAccepted == nil {
		var ret bool
		return ret
	}
	return *o.EulaAccepted
}

// GetEulaAcceptedOk returns a tuple with the EulaAccepted field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetEulaAcceptedOk() (*bool, bool) {
	if o == nil || o.EulaAccepted == nil {
		return nil, false
	}
	return o.EulaAccepted, true
}



// HasEulaAccepted returns a boolean if a field has been set.
func (o *Status) HasEulaAccepted() bool {
	if o != nil && o.EulaAccepted != nil {
		return true
	}

	return false
}

// SetEulaAccepted gets a reference to the given bool and assigns it to the EulaAccepted field.
func (o *Status) SetEulaAccepted(v bool) {
	tmp := v
	o.EulaAccepted = &tmp
}

// GetLicenseActive returns the LicenseActive field value if set, zero value otherwise.
func (o *Status) GetLicenseActive() bool {
	if o == nil || o.LicenseActive == nil {
		var ret bool
		return ret
	}
	return *o.LicenseActive
}

// GetLicenseActiveOk returns a tuple with the LicenseActive field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetLicenseActiveOk() (*bool, bool) {
	if o == nil || o.LicenseActive == nil {
		return nil, false
	}
	return o.LicenseActive, true
}



// HasLicenseActive returns a boolean if a field has been set.
func (o *Status) HasLicenseActive() bool {
	if o != nil && o.LicenseActive != nil {
		return true
	}

	return false
}

// SetLicenseActive gets a reference to the given bool and assigns it to the LicenseActive field.
func (o *Status) SetLicenseActive(v bool) {
	tmp := v
	o.LicenseActive = &tmp
}

// GetBbcLutsLicensed returns the BbcLutsLicensed field value if set, zero value otherwise.
func (o *Status) GetBbcLutsLicensed() bool {
	if o == nil || o.BbcLutsLicensed == nil {
		var ret bool
		return ret
	}
	return *o.BbcLutsLicensed
}

// GetBbcLutsLicensedOk returns a tuple with the BbcLutsLicensed field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetBbcLutsLicensedOk() (*bool, bool) {
	if o == nil || o.BbcLutsLicensed == nil {
		return nil, false
	}
	return o.BbcLutsLicensed, true
}



// HasBbcLutsLicensed returns a boolean if a field has been set.
func (o *Status) HasBbcLutsLicensed() bool {
	if o != nil && o.BbcLutsLicensed != nil {
		return true
	}

	return false
}

// SetBbcLutsLicensed gets a reference to the given bool and assigns it to the BbcLutsLicensed field.
func (o *Status) SetBbcLutsLicensed(v bool) {
	tmp := v
	o.BbcLutsLicensed = &tmp
}

// GetOrionEngineLicensed returns the OrionEngineLicensed field value if set, zero value otherwise.
func (o *Status) GetOrionEngineLicensed() bool {
	if o == nil || o.OrionEngineLicensed == nil {
		var ret bool
		return ret
	}
	return *o.OrionEngineLicensed
}

// GetOrionEngineLicensedOk returns a tuple with the OrionEngineLicensed field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetOrionEngineLicensedOk() (*bool, bool) {
	if o == nil || o.OrionEngineLicensed == nil {
		return nil, false
	}
	return o.OrionEngineLicensed, true
}



// HasOrionEngineLicensed returns a boolean if a field has been set.
func (o *Status) HasOrionEngineLicensed() bool {
	if o != nil && o.OrionEngineLicensed != nil {
		return true
	}

	return false
}

// SetOrionEngineLicensed gets a reference to the given bool and assigns it to the OrionEngineLicensed field.
func (o *Status) SetOrionEngineLicensed(v bool) {
	tmp := v
	o.OrionEngineLicensed = &tmp
}

// GetColorfrontEngineLicensed returns the ColorfrontEngineLicensed field value if set, zero value otherwise.
func (o *Status) GetColorfrontEngineLicensed() bool {
	if o == nil || o.ColorfrontEngineLicensed == nil {
		var ret bool
		return ret
	}
	return *o.ColorfrontEngineLicensed
}

// GetColorfrontEngineLicensedOk returns a tuple with the ColorfrontEngineLicensed field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetColorfrontEngineLicensedOk() (*bool, bool) {
	if o == nil || o.ColorfrontEngineLicensed == nil {
		return nil, false
	}
	return o.ColorfrontEngineLicensed, true
}



// HasColorfrontEngineLicensed returns a boolean if a field has been set.
func (o *Status) HasColorfrontEngineLicensed() bool {
	if o != nil && o.ColorfrontEngineLicensed != nil {
		return true
	}

	return false
}

// SetColorfrontEngineLicensed gets a reference to the given bool and assigns it to the ColorfrontEngineLicensed field.
func (o *Status) SetColorfrontEngineLicensed(v bool) {
	tmp := v
	o.ColorfrontEngineLicensed = &tmp
}

// GetShutdownTime returns the ShutdownTime field value if set, zero value otherwise.
func (o *Status) GetShutdownTime() int32 {
	if o == nil || o.ShutdownTime == nil {
		var ret int32
		return ret
	}
	return *o.ShutdownTime
}

// GetShutdownTimeOk returns a tuple with the ShutdownTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetShutdownTimeOk() (*int32, bool) {
	if o == nil || o.ShutdownTime == nil {
		return nil, false
	}
	return o.ShutdownTime, true
}



// HasShutdownTime returns a boolean if a field has been set.
func (o *Status) HasShutdownTime() bool {
	if o != nil && o.ShutdownTime != nil {
		return true
	}

	return false
}

// SetShutdownTime gets a reference to the given int32 and assigns it to the ShutdownTime field.
func (o *Status) SetShutdownTime(v int32) {
	tmp := v
	o.ShutdownTime = &tmp
}

// GetColorfrontTransformVersion returns the ColorfrontTransformVersion field value if set, zero value otherwise.
func (o *Status) GetColorfrontTransformVersion() string {
	if o == nil || o.ColorfrontTransformVersion == nil {
		var ret string
		return ret
	}
	return *o.ColorfrontTransformVersion
}

// GetColorfrontTransformVersionOk returns a tuple with the ColorfrontTransformVersion field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetColorfrontTransformVersionOk() (*string, bool) {
	if o == nil || o.ColorfrontTransformVersion == nil {
		return nil, false
	}
	return o.ColorfrontTransformVersion, true
}



// HasColorfrontTransformVersion returns a boolean if a field has been set.
func (o *Status) HasColorfrontTransformVersion() bool {
	if o != nil && o.ColorfrontTransformVersion != nil {
		return true
	}

	return false
}

// SetColorfrontTransformVersion gets a reference to the given string and assigns it to the ColorfrontTransformVersion field.
func (o *Status) SetColorfrontTransformVersion(v string) {
	tmp := v
	o.ColorfrontTransformVersion = &tmp
}

// GetColorfrontEngineVersion returns the ColorfrontEngineVersion field value if set, zero value otherwise.
func (o *Status) GetColorfrontEngineVersion() string {
	if o == nil || o.ColorfrontEngineVersion == nil {
		var ret string
		return ret
	}
	return *o.ColorfrontEngineVersion
}

// GetColorfrontEngineVersionOk returns a tuple with the ColorfrontEngineVersion field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetColorfrontEngineVersionOk() (*string, bool) {
	if o == nil || o.ColorfrontEngineVersion == nil {
		return nil, false
	}
	return o.ColorfrontEngineVersion, true
}



// HasColorfrontEngineVersion returns a boolean if a field has been set.
func (o *Status) HasColorfrontEngineVersion() bool {
	if o != nil && o.ColorfrontEngineVersion != nil {
		return true
	}

	return false
}

// SetColorfrontEngineVersion gets a reference to the given string and assigns it to the ColorfrontEngineVersion field.
func (o *Status) SetColorfrontEngineVersion(v string) {
	tmp := v
	o.ColorfrontEngineVersion = &tmp
}

// GetOrionVersion returns the OrionVersion field value if set, zero value otherwise.
func (o *Status) GetOrionVersion() string {
	if o == nil || o.OrionVersion == nil {
		var ret string
		return ret
	}
	return *o.OrionVersion
}

// GetOrionVersionOk returns a tuple with the OrionVersion field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetOrionVersionOk() (*string, bool) {
	if o == nil || o.OrionVersion == nil {
		return nil, false
	}
	return o.OrionVersion, true
}



// HasOrionVersion returns a boolean if a field has been set.
func (o *Status) HasOrionVersion() bool {
	if o != nil && o.OrionVersion != nil {
		return true
	}

	return false
}

// SetOrionVersion gets a reference to the given string and assigns it to the OrionVersion field.
func (o *Status) SetOrionVersion(v string) {
	tmp := v
	o.OrionVersion = &tmp
}

// GetBbcLutVersion returns the BbcLutVersion field value if set, zero value otherwise.
func (o *Status) GetBbcLutVersion() string {
	if o == nil || o.BbcLutVersion == nil {
		var ret string
		return ret
	}
	return *o.BbcLutVersion
}

// GetBbcLutVersionOk returns a tuple with the BbcLutVersion field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetBbcLutVersionOk() (*string, bool) {
	if o == nil || o.BbcLutVersion == nil {
		return nil, false
	}
	return o.BbcLutVersion, true
}



// HasBbcLutVersion returns a boolean if a field has been set.
func (o *Status) HasBbcLutVersion() bool {
	if o != nil && o.BbcLutVersion != nil {
		return true
	}

	return false
}

// SetBbcLutVersion gets a reference to the given string and assigns it to the BbcLutVersion field.
func (o *Status) SetBbcLutVersion(v string) {
	tmp := v
	o.BbcLutVersion = &tmp
}

// GetNbcuLutVersion returns the NbcuLutVersion field value if set, zero value otherwise.
func (o *Status) GetNbcuLutVersion() string {
	if o == nil || o.NbcuLutVersion == nil {
		var ret string
		return ret
	}
	return *o.NbcuLutVersion
}

// GetNbcuLutVersionOk returns a tuple with the NbcuLutVersion field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetNbcuLutVersionOk() (*string, bool) {
	if o == nil || o.NbcuLutVersion == nil {
		return nil, false
	}
	return o.NbcuLutVersion, true
}



// HasNbcuLutVersion returns a boolean if a field has been set.
func (o *Status) HasNbcuLutVersion() bool {
	if o != nil && o.NbcuLutVersion != nil {
		return true
	}

	return false
}

// SetNbcuLutVersion gets a reference to the given string and assigns it to the NbcuLutVersion field.
func (o *Status) SetNbcuLutVersion(v string) {
	tmp := v
	o.NbcuLutVersion = &tmp
}

// GetCpuBusy returns the CpuBusy field value if set, zero value otherwise.
func (o *Status) GetCpuBusy() bool {
	if o == nil || o.CpuBusy == nil {
		var ret bool
		return ret
	}
	return *o.CpuBusy
}

// GetCpuBusyOk returns a tuple with the CpuBusy field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Status) GetCpuBusyOk() (*bool, bool) {
	if o == nil || o.CpuBusy == nil {
		return nil, false
	}
	return o.CpuBusy, true
}



// HasCpuBusy returns a boolean if a field has been set.
func (o *Status) HasCpuBusy() bool {
	if o != nil && o.CpuBusy != nil {
		return true
	}

	return false
}

// SetCpuBusy gets a reference to the given bool and assigns it to the CpuBusy field.
func (o *Status) SetCpuBusy(v bool) {
	tmp := v
	o.CpuBusy = &tmp
}

func (o Status) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.DeviceDieTemp != nil {
		toSerialize["deviceDieTemp"] = o.DeviceDieTemp
	}
	if o.SystemDate != nil {
		toSerialize["systemDate"] = o.SystemDate
	}
	if o.SystemTime != nil {
		toSerialize["systemTime"] = o.SystemTime
	}
	if o.SystemUptime != nil {
		toSerialize["systemUptime"] = o.SystemUptime
	}
	if o.SystemOsName != nil {
		toSerialize["systemOsName"] = o.SystemOsName
	}
	if o.SystemSerialNumber != nil {
		toSerialize["systemSerialNumber"] = o.SystemSerialNumber
	}
	if o.SystemCatalogNumber != nil {
		toSerialize["systemCatalogNumber"] = o.SystemCatalogNumber
	}
	if o.SystemAppSwVersion != nil {
		toSerialize["systemAppSwVersion"] = o.SystemAppSwVersion
	}
	if o.SystemSupportInfo != nil {
		toSerialize["systemSupportInfo"] = o.SystemSupportInfo
	}
	if o.EulaAccepted != nil {
		toSerialize["eulaAccepted"] = o.EulaAccepted
	}
	if o.LicenseActive != nil {
		toSerialize["licenseActive"] = o.LicenseActive
	}
	if o.BbcLutsLicensed != nil {
		toSerialize["bbcLutsLicensed"] = o.BbcLutsLicensed
	}
	if o.OrionEngineLicensed != nil {
		toSerialize["orionEngineLicensed"] = o.OrionEngineLicensed
	}
	if o.ColorfrontEngineLicensed != nil {
		toSerialize["colorfrontEngineLicensed"] = o.ColorfrontEngineLicensed
	}
	if o.ShutdownTime != nil {
		toSerialize["shutdownTime"] = o.ShutdownTime
	}
	if o.ColorfrontTransformVersion != nil {
		toSerialize["colorfrontTransformVersion"] = o.ColorfrontTransformVersion
	}
	if o.ColorfrontEngineVersion != nil {
		toSerialize["colorfrontEngineVersion"] = o.ColorfrontEngineVersion
	}
	if o.OrionVersion != nil {
		toSerialize["orionVersion"] = o.OrionVersion
	}
	if o.BbcLutVersion != nil {
		toSerialize["bbcLutVersion"] = o.BbcLutVersion
	}
	if o.NbcuLutVersion != nil {
		toSerialize["nbcuLutVersion"] = o.NbcuLutVersion
	}
	if o.CpuBusy != nil {
		toSerialize["cpuBusy"] = o.CpuBusy
	}
	return json.Marshal(toSerialize)
}


func (o *Status) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	if o.HasSystemDate() {
		var fieldChanged = false
		var v string = o.GetSystemDate()
		if fieldChanged {
			o.SetSystemDate(v)
			valueChanged = true
		}
	}
	if o.HasSystemTime() {
		var fieldChanged = false
		var v string = o.GetSystemTime()
		if fieldChanged {
			o.SetSystemTime(v)
			valueChanged = true
		}
	}
	if o.HasSystemUptime() {
		var fieldChanged = false
		var v string = o.GetSystemUptime()
		if fieldChanged {
			o.SetSystemUptime(v)
			valueChanged = true
		}
	}
	if o.HasSystemOsName() {
		var fieldChanged = false
		var v string = o.GetSystemOsName()
		if fieldChanged {
			o.SetSystemOsName(v)
			valueChanged = true
		}
	}
	if o.HasSystemSerialNumber() {
		var fieldChanged = false
		var v string = o.GetSystemSerialNumber()
		if fieldChanged {
			o.SetSystemSerialNumber(v)
			valueChanged = true
		}
	}
	if o.HasSystemCatalogNumber() {
		var fieldChanged = false
		var v string = o.GetSystemCatalogNumber()
		if fieldChanged {
			o.SetSystemCatalogNumber(v)
			valueChanged = true
		}
	}
	if o.HasSystemAppSwVersion() {
		var fieldChanged = false
		var v string = o.GetSystemAppSwVersion()
		if fieldChanged {
			o.SetSystemAppSwVersion(v)
			valueChanged = true
		}
	}
	if o.HasSystemSupportInfo() {
		var fieldChanged = false
		var v string = o.GetSystemSupportInfo()
		if fieldChanged {
			o.SetSystemSupportInfo(v)
			valueChanged = true
		}
	}
	if o.HasShutdownTime() {
		var fieldChanged = false
		var v int32 = o.GetShutdownTime()
		if fieldChanged {
			o.SetShutdownTime(v)
			valueChanged = true
		}
	}
	if o.HasColorfrontTransformVersion() {
		var fieldChanged = false
		var v string = o.GetColorfrontTransformVersion()
		if fieldChanged {
			o.SetColorfrontTransformVersion(v)
			valueChanged = true
		}
	}
	if o.HasColorfrontEngineVersion() {
		var fieldChanged = false
		var v string = o.GetColorfrontEngineVersion()
		if fieldChanged {
			o.SetColorfrontEngineVersion(v)
			valueChanged = true
		}
	}
	if o.HasOrionVersion() {
		var fieldChanged = false
		var v string = o.GetOrionVersion()
		if fieldChanged {
			o.SetOrionVersion(v)
			valueChanged = true
		}
	}
	if o.HasBbcLutVersion() {
		var fieldChanged = false
		var v string = o.GetBbcLutVersion()
		if fieldChanged {
			o.SetBbcLutVersion(v)
			valueChanged = true
		}
	}
	if o.HasNbcuLutVersion() {
		var fieldChanged = false
		var v string = o.GetNbcuLutVersion()
		if fieldChanged {
			o.SetNbcuLutVersion(v)
			valueChanged = true
		}
	}
	return valueChanged
}

type NullableStatus struct {
	value *Status
	isSet bool
}

func (v NullableStatus) Get() *Status {
	return v.value
}

func (v *NullableStatus) Set(val *Status) {
	v.value = val
	v.isSet = true
}

func (v NullableStatus) IsSet() bool {
	return v.isSet
}

func (v *NullableStatus) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableStatus(val *Status) *NullableStatus {
	return &NullableStatus{value: val, isSet: true}
}

func (v NullableStatus) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableStatus) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


