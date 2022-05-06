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

// OrionConfig struct for OrionConfig
type OrionConfig struct {
	// true if stage is enabled else disabled (unity passthru)
	Enabled *bool `json:"enabled,omitempty"`
	Conversion *OrionConversion `json:"conversion,omitempty"`
	Mode *OrionMode `json:"mode,omitempty"`
	Method *OrionMethod `json:"method,omitempty"`
	SourceRange *OrionSourceRange `json:"sourceRange,omitempty"`
	HdrRef *float32 `json:"hdrRef,omitempty"`
	SdrRef *float32 `json:"sdrRef,omitempty"`
	HdrPeak *int32 `json:"hdrPeak,omitempty"`
	SdrEotf *OrionSdrEotf `json:"sdrEotf,omitempty"`
	PreKnee *float32 `json:"preKnee,omitempty"`
	PreAmount *float32 `json:"preAmount,omitempty"`
	PostKnee *float32 `json:"postKnee,omitempty"`
	PostAmount *float32 `json:"postAmount,omitempty"`
	Clamping *OrionClamping `json:"clamping,omitempty"`
	Implementation *OrionImplementation `json:"implementation,omitempty"`
}

// NewOrionConfig instantiates a new OrionConfig object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOrionConfig() *OrionConfig {
	this := OrionConfig{}
	var conversion OrionConversion = ORIONCONVERSION_HLG_TO_SDR
	this.Conversion = &conversion
	var mode OrionMode = ORIONMODE_DISPLAY_LIGHT
	this.Mode = &mode
	var method OrionMethod = "MAX(RGB)"
	this.Method = &method
	var sourceRange OrionSourceRange = ORIONSOURCERANGE_NARROW
	this.SourceRange = &sourceRange
	var hdrRef float32 = 75.0
	this.HdrRef = &hdrRef
	var sdrRef float32 = 100.0
	this.SdrRef = &sdrRef
	var hdrPeak int32 = 1000
	this.HdrPeak = &hdrPeak
	var sdrEotf OrionSdrEotf = ORIONSDREOTF__2_4_GAMMA
	this.SdrEotf = &sdrEotf
	var preKnee float32 = 100.0
	this.PreKnee = &preKnee
	var preAmount float32 = 0.0
	this.PreAmount = &preAmount
	var postKnee float32 = 100.0
	this.PostKnee = &postKnee
	var postAmount float32 = 0.0
	this.PostAmount = &postAmount
	var clamping OrionClamping = ORIONCLAMPING__7_TO_109_IRE
	this.Clamping = &clamping
	var implementation OrionImplementation = ORIONIMPLEMENTATION_ENGINE
	this.Implementation = &implementation
	return &this
}

// NewOrionConfigWithDefaults instantiates a new OrionConfig object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOrionConfigWithDefaults() *OrionConfig {
	this := OrionConfig{}
	var conversion OrionConversion = ORIONCONVERSION_HLG_TO_SDR
	this.Conversion = &conversion
	var mode OrionMode = ORIONMODE_DISPLAY_LIGHT
	this.Mode = &mode
	var method OrionMethod = "MAX(RGB)"
	this.Method = &method
	var sourceRange OrionSourceRange = ORIONSOURCERANGE_NARROW
	this.SourceRange = &sourceRange
	var hdrRef float32 = 75.0
	this.HdrRef = &hdrRef
	var sdrRef float32 = 100.0
	this.SdrRef = &sdrRef
	var hdrPeak int32 = 1000
	this.HdrPeak = &hdrPeak
	var sdrEotf OrionSdrEotf = ORIONSDREOTF__2_4_GAMMA
	this.SdrEotf = &sdrEotf
	var preKnee float32 = 100.0
	this.PreKnee = &preKnee
	var preAmount float32 = 0.0
	this.PreAmount = &preAmount
	var postKnee float32 = 100.0
	this.PostKnee = &postKnee
	var postAmount float32 = 0.0
	this.PostAmount = &postAmount
	var clamping OrionClamping = ORIONCLAMPING__7_TO_109_IRE
	this.Clamping = &clamping
	var implementation OrionImplementation = ORIONIMPLEMENTATION_ENGINE
	this.Implementation = &implementation
	return &this
}

// GetEnabled returns the Enabled field value if set, zero value otherwise.
func (o *OrionConfig) GetEnabled() bool {
	if o == nil || o.Enabled == nil {
		var ret bool
		return ret
	}
	return *o.Enabled
}

// GetEnabledOk returns a tuple with the Enabled field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetEnabledOk() (*bool, bool) {
	if o == nil || o.Enabled == nil {
		return nil, false
	}
	return o.Enabled, true
}



// HasEnabled returns a boolean if a field has been set.
func (o *OrionConfig) HasEnabled() bool {
	if o != nil && o.Enabled != nil {
		return true
	}

	return false
}

// SetEnabled gets a reference to the given bool and assigns it to the Enabled field.
func (o *OrionConfig) SetEnabled(v bool) {
	tmp := v
	o.Enabled = &tmp
}

// GetConversion returns the Conversion field value if set, zero value otherwise.
func (o *OrionConfig) GetConversion() OrionConversion {
	if o == nil || o.Conversion == nil {
		var ret OrionConversion
		return ret
	}
	return *o.Conversion
}

// GetConversionOk returns a tuple with the Conversion field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetConversionOk() (*OrionConversion, bool) {
	if o == nil || o.Conversion == nil {
		return nil, false
	}
	return o.Conversion, true
}



// HasConversion returns a boolean if a field has been set.
func (o *OrionConfig) HasConversion() bool {
	if o != nil && o.Conversion != nil {
		return true
	}

	return false
}

// SetConversion gets a reference to the given OrionConversion and assigns it to the Conversion field.
func (o *OrionConfig) SetConversion(v OrionConversion) {
	tmp := v
	o.Conversion = &tmp
}

// GetMode returns the Mode field value if set, zero value otherwise.
func (o *OrionConfig) GetMode() OrionMode {
	if o == nil || o.Mode == nil {
		var ret OrionMode
		return ret
	}
	return *o.Mode
}

// GetModeOk returns a tuple with the Mode field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetModeOk() (*OrionMode, bool) {
	if o == nil || o.Mode == nil {
		return nil, false
	}
	return o.Mode, true
}



// HasMode returns a boolean if a field has been set.
func (o *OrionConfig) HasMode() bool {
	if o != nil && o.Mode != nil {
		return true
	}

	return false
}

// SetMode gets a reference to the given OrionMode and assigns it to the Mode field.
func (o *OrionConfig) SetMode(v OrionMode) {
	tmp := v
	o.Mode = &tmp
}

// GetMethod returns the Method field value if set, zero value otherwise.
func (o *OrionConfig) GetMethod() OrionMethod {
	if o == nil || o.Method == nil {
		var ret OrionMethod
		return ret
	}
	return *o.Method
}

// GetMethodOk returns a tuple with the Method field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetMethodOk() (*OrionMethod, bool) {
	if o == nil || o.Method == nil {
		return nil, false
	}
	return o.Method, true
}



// HasMethod returns a boolean if a field has been set.
func (o *OrionConfig) HasMethod() bool {
	if o != nil && o.Method != nil {
		return true
	}

	return false
}

// SetMethod gets a reference to the given OrionMethod and assigns it to the Method field.
func (o *OrionConfig) SetMethod(v OrionMethod) {
	tmp := v
	o.Method = &tmp
}

// GetSourceRange returns the SourceRange field value if set, zero value otherwise.
func (o *OrionConfig) GetSourceRange() OrionSourceRange {
	if o == nil || o.SourceRange == nil {
		var ret OrionSourceRange
		return ret
	}
	return *o.SourceRange
}

// GetSourceRangeOk returns a tuple with the SourceRange field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetSourceRangeOk() (*OrionSourceRange, bool) {
	if o == nil || o.SourceRange == nil {
		return nil, false
	}
	return o.SourceRange, true
}



// HasSourceRange returns a boolean if a field has been set.
func (o *OrionConfig) HasSourceRange() bool {
	if o != nil && o.SourceRange != nil {
		return true
	}

	return false
}

// SetSourceRange gets a reference to the given OrionSourceRange and assigns it to the SourceRange field.
func (o *OrionConfig) SetSourceRange(v OrionSourceRange) {
	tmp := v
	o.SourceRange = &tmp
}

// GetHdrRef returns the HdrRef field value if set, zero value otherwise.
func (o *OrionConfig) GetHdrRef() float32 {
	if o == nil || o.HdrRef == nil {
		var ret float32
		return ret
	}
	return *o.HdrRef
}

// GetHdrRefOk returns a tuple with the HdrRef field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetHdrRefOk() (*float32, bool) {
	if o == nil || o.HdrRef == nil {
		return nil, false
	}
	return o.HdrRef, true
}

// GetHdrRefMin returns the minimum value for field HdrRef.
func (o *OrionConfig) GetHdrRefMin() float32 {
	return 1.0
}

// GetHdrRefMax returns the maximum value for field HdrRef.
func (o *OrionConfig) GetHdrRefMax() float32 {
	return 109.0
}


// HasHdrRef returns a boolean if a field has been set.
func (o *OrionConfig) HasHdrRef() bool {
	if o != nil && o.HdrRef != nil {
		return true
	}

	return false
}

// SetHdrRef gets a reference to the given float32 and assigns it to the HdrRef field.
func (o *OrionConfig) SetHdrRef(v float32) {
	tmp := v
	min := o.GetHdrRefMin()
	max := o.GetHdrRefMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.HdrRef = &tmp
}

// GetSdrRef returns the SdrRef field value if set, zero value otherwise.
func (o *OrionConfig) GetSdrRef() float32 {
	if o == nil || o.SdrRef == nil {
		var ret float32
		return ret
	}
	return *o.SdrRef
}

// GetSdrRefOk returns a tuple with the SdrRef field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetSdrRefOk() (*float32, bool) {
	if o == nil || o.SdrRef == nil {
		return nil, false
	}
	return o.SdrRef, true
}

// GetSdrRefMin returns the minimum value for field SdrRef.
func (o *OrionConfig) GetSdrRefMin() float32 {
	return 1.0
}

// GetSdrRefMax returns the maximum value for field SdrRef.
func (o *OrionConfig) GetSdrRefMax() float32 {
	return 109.0
}


// HasSdrRef returns a boolean if a field has been set.
func (o *OrionConfig) HasSdrRef() bool {
	if o != nil && o.SdrRef != nil {
		return true
	}

	return false
}

// SetSdrRef gets a reference to the given float32 and assigns it to the SdrRef field.
func (o *OrionConfig) SetSdrRef(v float32) {
	tmp := v
	min := o.GetSdrRefMin()
	max := o.GetSdrRefMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.SdrRef = &tmp
}

// GetHdrPeak returns the HdrPeak field value if set, zero value otherwise.
func (o *OrionConfig) GetHdrPeak() int32 {
	if o == nil || o.HdrPeak == nil {
		var ret int32
		return ret
	}
	return *o.HdrPeak
}

// GetHdrPeakOk returns a tuple with the HdrPeak field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetHdrPeakOk() (*int32, bool) {
	if o == nil || o.HdrPeak == nil {
		return nil, false
	}
	return o.HdrPeak, true
}

// GetHdrPeakMin returns the minimum value for field HdrPeak.
func (o *OrionConfig) GetHdrPeakMin() int32 {
	return 100
}

// GetHdrPeakMax returns the maximum value for field HdrPeak.
func (o *OrionConfig) GetHdrPeakMax() int32 {
	return 4000
}


// HasHdrPeak returns a boolean if a field has been set.
func (o *OrionConfig) HasHdrPeak() bool {
	if o != nil && o.HdrPeak != nil {
		return true
	}

	return false
}

// SetHdrPeak gets a reference to the given int32 and assigns it to the HdrPeak field.
func (o *OrionConfig) SetHdrPeak(v int32) {
	tmp := v
	min := o.GetHdrPeakMin()
	max := o.GetHdrPeakMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.HdrPeak = &tmp
}

// GetSdrEotf returns the SdrEotf field value if set, zero value otherwise.
func (o *OrionConfig) GetSdrEotf() OrionSdrEotf {
	if o == nil || o.SdrEotf == nil {
		var ret OrionSdrEotf
		return ret
	}
	return *o.SdrEotf
}

// GetSdrEotfOk returns a tuple with the SdrEotf field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetSdrEotfOk() (*OrionSdrEotf, bool) {
	if o == nil || o.SdrEotf == nil {
		return nil, false
	}
	return o.SdrEotf, true
}



// HasSdrEotf returns a boolean if a field has been set.
func (o *OrionConfig) HasSdrEotf() bool {
	if o != nil && o.SdrEotf != nil {
		return true
	}

	return false
}

// SetSdrEotf gets a reference to the given OrionSdrEotf and assigns it to the SdrEotf field.
func (o *OrionConfig) SetSdrEotf(v OrionSdrEotf) {
	tmp := v
	o.SdrEotf = &tmp
}

// GetPreKnee returns the PreKnee field value if set, zero value otherwise.
func (o *OrionConfig) GetPreKnee() float32 {
	if o == nil || o.PreKnee == nil {
		var ret float32
		return ret
	}
	return *o.PreKnee
}

// GetPreKneeOk returns a tuple with the PreKnee field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetPreKneeOk() (*float32, bool) {
	if o == nil || o.PreKnee == nil {
		return nil, false
	}
	return o.PreKnee, true
}

// GetPreKneeMin returns the minimum value for field PreKnee.
func (o *OrionConfig) GetPreKneeMin() float32 {
	return 0.0
}

// GetPreKneeMax returns the maximum value for field PreKnee.
func (o *OrionConfig) GetPreKneeMax() float32 {
	return 100.0
}


// HasPreKnee returns a boolean if a field has been set.
func (o *OrionConfig) HasPreKnee() bool {
	if o != nil && o.PreKnee != nil {
		return true
	}

	return false
}

// SetPreKnee gets a reference to the given float32 and assigns it to the PreKnee field.
func (o *OrionConfig) SetPreKnee(v float32) {
	tmp := v
	min := o.GetPreKneeMin()
	max := o.GetPreKneeMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.PreKnee = &tmp
}

// GetPreAmount returns the PreAmount field value if set, zero value otherwise.
func (o *OrionConfig) GetPreAmount() float32 {
	if o == nil || o.PreAmount == nil {
		var ret float32
		return ret
	}
	return *o.PreAmount
}

// GetPreAmountOk returns a tuple with the PreAmount field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetPreAmountOk() (*float32, bool) {
	if o == nil || o.PreAmount == nil {
		return nil, false
	}
	return o.PreAmount, true
}

// GetPreAmountMin returns the minimum value for field PreAmount.
func (o *OrionConfig) GetPreAmountMin() float32 {
	return 0.0
}

// GetPreAmountMax returns the maximum value for field PreAmount.
func (o *OrionConfig) GetPreAmountMax() float32 {
	return 1.0
}


// HasPreAmount returns a boolean if a field has been set.
func (o *OrionConfig) HasPreAmount() bool {
	if o != nil && o.PreAmount != nil {
		return true
	}

	return false
}

// SetPreAmount gets a reference to the given float32 and assigns it to the PreAmount field.
func (o *OrionConfig) SetPreAmount(v float32) {
	tmp := v
	min := o.GetPreAmountMin()
	max := o.GetPreAmountMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.PreAmount = &tmp
}

// GetPostKnee returns the PostKnee field value if set, zero value otherwise.
func (o *OrionConfig) GetPostKnee() float32 {
	if o == nil || o.PostKnee == nil {
		var ret float32
		return ret
	}
	return *o.PostKnee
}

// GetPostKneeOk returns a tuple with the PostKnee field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetPostKneeOk() (*float32, bool) {
	if o == nil || o.PostKnee == nil {
		return nil, false
	}
	return o.PostKnee, true
}

// GetPostKneeMin returns the minimum value for field PostKnee.
func (o *OrionConfig) GetPostKneeMin() float32 {
	return 0.0
}

// GetPostKneeMax returns the maximum value for field PostKnee.
func (o *OrionConfig) GetPostKneeMax() float32 {
	return 100.0
}


// HasPostKnee returns a boolean if a field has been set.
func (o *OrionConfig) HasPostKnee() bool {
	if o != nil && o.PostKnee != nil {
		return true
	}

	return false
}

// SetPostKnee gets a reference to the given float32 and assigns it to the PostKnee field.
func (o *OrionConfig) SetPostKnee(v float32) {
	tmp := v
	min := o.GetPostKneeMin()
	max := o.GetPostKneeMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.PostKnee = &tmp
}

// GetPostAmount returns the PostAmount field value if set, zero value otherwise.
func (o *OrionConfig) GetPostAmount() float32 {
	if o == nil || o.PostAmount == nil {
		var ret float32
		return ret
	}
	return *o.PostAmount
}

// GetPostAmountOk returns a tuple with the PostAmount field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetPostAmountOk() (*float32, bool) {
	if o == nil || o.PostAmount == nil {
		return nil, false
	}
	return o.PostAmount, true
}

// GetPostAmountMin returns the minimum value for field PostAmount.
func (o *OrionConfig) GetPostAmountMin() float32 {
	return 0.0
}

// GetPostAmountMax returns the maximum value for field PostAmount.
func (o *OrionConfig) GetPostAmountMax() float32 {
	return 1.0
}


// HasPostAmount returns a boolean if a field has been set.
func (o *OrionConfig) HasPostAmount() bool {
	if o != nil && o.PostAmount != nil {
		return true
	}

	return false
}

// SetPostAmount gets a reference to the given float32 and assigns it to the PostAmount field.
func (o *OrionConfig) SetPostAmount(v float32) {
	tmp := v
	min := o.GetPostAmountMin()
	max := o.GetPostAmountMax()
	if tmp < min { tmp = min }
	if tmp > max { tmp = max }
	o.PostAmount = &tmp
}

// GetClamping returns the Clamping field value if set, zero value otherwise.
func (o *OrionConfig) GetClamping() OrionClamping {
	if o == nil || o.Clamping == nil {
		var ret OrionClamping
		return ret
	}
	return *o.Clamping
}

// GetClampingOk returns a tuple with the Clamping field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetClampingOk() (*OrionClamping, bool) {
	if o == nil || o.Clamping == nil {
		return nil, false
	}
	return o.Clamping, true
}



// HasClamping returns a boolean if a field has been set.
func (o *OrionConfig) HasClamping() bool {
	if o != nil && o.Clamping != nil {
		return true
	}

	return false
}

// SetClamping gets a reference to the given OrionClamping and assigns it to the Clamping field.
func (o *OrionConfig) SetClamping(v OrionClamping) {
	tmp := v
	o.Clamping = &tmp
}

// GetImplementation returns the Implementation field value if set, zero value otherwise.
func (o *OrionConfig) GetImplementation() OrionImplementation {
	if o == nil || o.Implementation == nil {
		var ret OrionImplementation
		return ret
	}
	return *o.Implementation
}

// GetImplementationOk returns a tuple with the Implementation field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrionConfig) GetImplementationOk() (*OrionImplementation, bool) {
	if o == nil || o.Implementation == nil {
		return nil, false
	}
	return o.Implementation, true
}



// HasImplementation returns a boolean if a field has been set.
func (o *OrionConfig) HasImplementation() bool {
	if o != nil && o.Implementation != nil {
		return true
	}

	return false
}

// SetImplementation gets a reference to the given OrionImplementation and assigns it to the Implementation field.
func (o *OrionConfig) SetImplementation(v OrionImplementation) {
	tmp := v
	o.Implementation = &tmp
}

func (o OrionConfig) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Enabled != nil {
		toSerialize["enabled"] = o.Enabled
	}
	if o.Conversion != nil {
		toSerialize["conversion"] = o.Conversion
	}
	if o.Mode != nil {
		toSerialize["mode"] = o.Mode
	}
	if o.Method != nil {
		toSerialize["method"] = o.Method
	}
	if o.SourceRange != nil {
		toSerialize["sourceRange"] = o.SourceRange
	}
	if o.HdrRef != nil {
		toSerialize["hdrRef"] = o.HdrRef
	}
	if o.SdrRef != nil {
		toSerialize["sdrRef"] = o.SdrRef
	}
	if o.HdrPeak != nil {
		toSerialize["hdrPeak"] = o.HdrPeak
	}
	if o.SdrEotf != nil {
		toSerialize["sdrEotf"] = o.SdrEotf
	}
	if o.PreKnee != nil {
		toSerialize["preKnee"] = o.PreKnee
	}
	if o.PreAmount != nil {
		toSerialize["preAmount"] = o.PreAmount
	}
	if o.PostKnee != nil {
		toSerialize["postKnee"] = o.PostKnee
	}
	if o.PostAmount != nil {
		toSerialize["postAmount"] = o.PostAmount
	}
	if o.Clamping != nil {
		toSerialize["clamping"] = o.Clamping
	}
	if o.Implementation != nil {
		toSerialize["implementation"] = o.Implementation
	}
	return json.Marshal(toSerialize)
}


func (o *OrionConfig) ApplyMinMaxConstraints() bool {
	var valueChanged bool = false
	if o.HasHdrRef() {
		var fieldChanged = false
		var v float32 = o.GetHdrRef()
		var min float32 = o.GetHdrRefMin()
		var max float32 = o.GetHdrRefMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetHdrRef(v)
			valueChanged = true
		}
	}
	if o.HasSdrRef() {
		var fieldChanged = false
		var v float32 = o.GetSdrRef()
		var min float32 = o.GetSdrRefMin()
		var max float32 = o.GetSdrRefMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetSdrRef(v)
			valueChanged = true
		}
	}
	if o.HasHdrPeak() {
		var fieldChanged = false
		var v int32 = o.GetHdrPeak()
		var min int32 = o.GetHdrPeakMin()
		var max int32 = o.GetHdrPeakMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetHdrPeak(v)
			valueChanged = true
		}
	}
	if o.HasPreKnee() {
		var fieldChanged = false
		var v float32 = o.GetPreKnee()
		var min float32 = o.GetPreKneeMin()
		var max float32 = o.GetPreKneeMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetPreKnee(v)
			valueChanged = true
		}
	}
	if o.HasPreAmount() {
		var fieldChanged = false
		var v float32 = o.GetPreAmount()
		var min float32 = o.GetPreAmountMin()
		var max float32 = o.GetPreAmountMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetPreAmount(v)
			valueChanged = true
		}
	}
	if o.HasPostKnee() {
		var fieldChanged = false
		var v float32 = o.GetPostKnee()
		var min float32 = o.GetPostKneeMin()
		var max float32 = o.GetPostKneeMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetPostKnee(v)
			valueChanged = true
		}
	}
	if o.HasPostAmount() {
		var fieldChanged = false
		var v float32 = o.GetPostAmount()
		var min float32 = o.GetPostAmountMin()
		var max float32 = o.GetPostAmountMax()
		if v < min {
			v = min
			fieldChanged = true
		}
		if v > max {
			v = max
			fieldChanged = true
		}
		if fieldChanged {
			o.SetPostAmount(v)
			valueChanged = true
		}
	}
	return valueChanged
}

type NullableOrionConfig struct {
	value *OrionConfig
	isSet bool
}

func (v NullableOrionConfig) Get() *OrionConfig {
	return v.value
}

func (v *NullableOrionConfig) Set(val *OrionConfig) {
	v.value = val
	v.isSet = true
}

func (v NullableOrionConfig) IsSet() bool {
	return v.isSet
}

func (v *NullableOrionConfig) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOrionConfig(val *OrionConfig) *NullableOrionConfig {
	return &NullableOrionConfig{value: val, isSet: true}
}

func (v NullableOrionConfig) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOrionConfig) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


