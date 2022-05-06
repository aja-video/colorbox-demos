# Status

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**DeviceDieTemp** | Pointer to [**StatusInfo**](StatusInfo.md) |  | [optional] 
**SystemDate** | Pointer to **string** |  | [optional] 
**SystemTime** | Pointer to **string** |  | [optional] 
**SystemUptime** | Pointer to **string** |  | [optional] 
**SystemOsName** | Pointer to **string** |  | [optional] 
**SystemSerialNumber** | Pointer to **string** |  | [optional] 
**SystemCatalogNumber** | Pointer to **string** |  | [optional] 
**SystemAppSwVersion** | Pointer to **string** |  | [optional] 
**SystemSupportInfo** | Pointer to **string** |  | [optional] 
**EulaAccepted** | Pointer to **bool** |  | [optional] 
**LicenseActive** | Pointer to **bool** |  | [optional] 
**BbcLutsLicensed** | Pointer to **bool** |  | [optional] 
**OrionEngineLicensed** | Pointer to **bool** |  | [optional] 
**ColorfrontEngineLicensed** | Pointer to **bool** |  | [optional] 
**ShutdownTime** | Pointer to **int32** |  | [optional] 
**ColorfrontTransformVersion** | Pointer to **string** |  | [optional] 
**ColorfrontEngineVersion** | Pointer to **string** |  | [optional] 
**OrionVersion** | Pointer to **string** |  | [optional] 
**BbcLutVersion** | Pointer to **string** |  | [optional] 
**NbcuLutVersion** | Pointer to **string** |  | [optional] 
**CpuBusy** | Pointer to **bool** |  | [optional] 

## Methods

### NewStatus

`func NewStatus() *Status`

NewStatus instantiates a new Status object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStatusWithDefaults

`func NewStatusWithDefaults() *Status`

NewStatusWithDefaults instantiates a new Status object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDeviceDieTemp

`func (o *Status) GetDeviceDieTemp() StatusInfo`

GetDeviceDieTemp returns the DeviceDieTemp field if non-nil, zero value otherwise.

### GetDeviceDieTempOk

`func (o *Status) GetDeviceDieTempOk() (*StatusInfo, bool)`

GetDeviceDieTempOk returns a tuple with the DeviceDieTemp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDeviceDieTemp

`func (o *Status) SetDeviceDieTemp(v StatusInfo)`

SetDeviceDieTemp sets DeviceDieTemp field to given value.

### HasDeviceDieTemp

`func (o *Status) HasDeviceDieTemp() bool`

HasDeviceDieTemp returns a boolean if a field has been set.

### GetSystemDate

`func (o *Status) GetSystemDate() string`

GetSystemDate returns the SystemDate field if non-nil, zero value otherwise.

### GetSystemDateOk

`func (o *Status) GetSystemDateOk() (*string, bool)`

GetSystemDateOk returns a tuple with the SystemDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemDate

`func (o *Status) SetSystemDate(v string)`

SetSystemDate sets SystemDate field to given value.

### HasSystemDate

`func (o *Status) HasSystemDate() bool`

HasSystemDate returns a boolean if a field has been set.

### GetSystemTime

`func (o *Status) GetSystemTime() string`

GetSystemTime returns the SystemTime field if non-nil, zero value otherwise.

### GetSystemTimeOk

`func (o *Status) GetSystemTimeOk() (*string, bool)`

GetSystemTimeOk returns a tuple with the SystemTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemTime

`func (o *Status) SetSystemTime(v string)`

SetSystemTime sets SystemTime field to given value.

### HasSystemTime

`func (o *Status) HasSystemTime() bool`

HasSystemTime returns a boolean if a field has been set.

### GetSystemUptime

`func (o *Status) GetSystemUptime() string`

GetSystemUptime returns the SystemUptime field if non-nil, zero value otherwise.

### GetSystemUptimeOk

`func (o *Status) GetSystemUptimeOk() (*string, bool)`

GetSystemUptimeOk returns a tuple with the SystemUptime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemUptime

`func (o *Status) SetSystemUptime(v string)`

SetSystemUptime sets SystemUptime field to given value.

### HasSystemUptime

`func (o *Status) HasSystemUptime() bool`

HasSystemUptime returns a boolean if a field has been set.

### GetSystemOsName

`func (o *Status) GetSystemOsName() string`

GetSystemOsName returns the SystemOsName field if non-nil, zero value otherwise.

### GetSystemOsNameOk

`func (o *Status) GetSystemOsNameOk() (*string, bool)`

GetSystemOsNameOk returns a tuple with the SystemOsName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemOsName

`func (o *Status) SetSystemOsName(v string)`

SetSystemOsName sets SystemOsName field to given value.

### HasSystemOsName

`func (o *Status) HasSystemOsName() bool`

HasSystemOsName returns a boolean if a field has been set.

### GetSystemSerialNumber

`func (o *Status) GetSystemSerialNumber() string`

GetSystemSerialNumber returns the SystemSerialNumber field if non-nil, zero value otherwise.

### GetSystemSerialNumberOk

`func (o *Status) GetSystemSerialNumberOk() (*string, bool)`

GetSystemSerialNumberOk returns a tuple with the SystemSerialNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemSerialNumber

`func (o *Status) SetSystemSerialNumber(v string)`

SetSystemSerialNumber sets SystemSerialNumber field to given value.

### HasSystemSerialNumber

`func (o *Status) HasSystemSerialNumber() bool`

HasSystemSerialNumber returns a boolean if a field has been set.

### GetSystemCatalogNumber

`func (o *Status) GetSystemCatalogNumber() string`

GetSystemCatalogNumber returns the SystemCatalogNumber field if non-nil, zero value otherwise.

### GetSystemCatalogNumberOk

`func (o *Status) GetSystemCatalogNumberOk() (*string, bool)`

GetSystemCatalogNumberOk returns a tuple with the SystemCatalogNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemCatalogNumber

`func (o *Status) SetSystemCatalogNumber(v string)`

SetSystemCatalogNumber sets SystemCatalogNumber field to given value.

### HasSystemCatalogNumber

`func (o *Status) HasSystemCatalogNumber() bool`

HasSystemCatalogNumber returns a boolean if a field has been set.

### GetSystemAppSwVersion

`func (o *Status) GetSystemAppSwVersion() string`

GetSystemAppSwVersion returns the SystemAppSwVersion field if non-nil, zero value otherwise.

### GetSystemAppSwVersionOk

`func (o *Status) GetSystemAppSwVersionOk() (*string, bool)`

GetSystemAppSwVersionOk returns a tuple with the SystemAppSwVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemAppSwVersion

`func (o *Status) SetSystemAppSwVersion(v string)`

SetSystemAppSwVersion sets SystemAppSwVersion field to given value.

### HasSystemAppSwVersion

`func (o *Status) HasSystemAppSwVersion() bool`

HasSystemAppSwVersion returns a boolean if a field has been set.

### GetSystemSupportInfo

`func (o *Status) GetSystemSupportInfo() string`

GetSystemSupportInfo returns the SystemSupportInfo field if non-nil, zero value otherwise.

### GetSystemSupportInfoOk

`func (o *Status) GetSystemSupportInfoOk() (*string, bool)`

GetSystemSupportInfoOk returns a tuple with the SystemSupportInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemSupportInfo

`func (o *Status) SetSystemSupportInfo(v string)`

SetSystemSupportInfo sets SystemSupportInfo field to given value.

### HasSystemSupportInfo

`func (o *Status) HasSystemSupportInfo() bool`

HasSystemSupportInfo returns a boolean if a field has been set.

### GetEulaAccepted

`func (o *Status) GetEulaAccepted() bool`

GetEulaAccepted returns the EulaAccepted field if non-nil, zero value otherwise.

### GetEulaAcceptedOk

`func (o *Status) GetEulaAcceptedOk() (*bool, bool)`

GetEulaAcceptedOk returns a tuple with the EulaAccepted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEulaAccepted

`func (o *Status) SetEulaAccepted(v bool)`

SetEulaAccepted sets EulaAccepted field to given value.

### HasEulaAccepted

`func (o *Status) HasEulaAccepted() bool`

HasEulaAccepted returns a boolean if a field has been set.

### GetLicenseActive

`func (o *Status) GetLicenseActive() bool`

GetLicenseActive returns the LicenseActive field if non-nil, zero value otherwise.

### GetLicenseActiveOk

`func (o *Status) GetLicenseActiveOk() (*bool, bool)`

GetLicenseActiveOk returns a tuple with the LicenseActive field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLicenseActive

`func (o *Status) SetLicenseActive(v bool)`

SetLicenseActive sets LicenseActive field to given value.

### HasLicenseActive

`func (o *Status) HasLicenseActive() bool`

HasLicenseActive returns a boolean if a field has been set.

### GetBbcLutsLicensed

`func (o *Status) GetBbcLutsLicensed() bool`

GetBbcLutsLicensed returns the BbcLutsLicensed field if non-nil, zero value otherwise.

### GetBbcLutsLicensedOk

`func (o *Status) GetBbcLutsLicensedOk() (*bool, bool)`

GetBbcLutsLicensedOk returns a tuple with the BbcLutsLicensed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBbcLutsLicensed

`func (o *Status) SetBbcLutsLicensed(v bool)`

SetBbcLutsLicensed sets BbcLutsLicensed field to given value.

### HasBbcLutsLicensed

`func (o *Status) HasBbcLutsLicensed() bool`

HasBbcLutsLicensed returns a boolean if a field has been set.

### GetOrionEngineLicensed

`func (o *Status) GetOrionEngineLicensed() bool`

GetOrionEngineLicensed returns the OrionEngineLicensed field if non-nil, zero value otherwise.

### GetOrionEngineLicensedOk

`func (o *Status) GetOrionEngineLicensedOk() (*bool, bool)`

GetOrionEngineLicensedOk returns a tuple with the OrionEngineLicensed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrionEngineLicensed

`func (o *Status) SetOrionEngineLicensed(v bool)`

SetOrionEngineLicensed sets OrionEngineLicensed field to given value.

### HasOrionEngineLicensed

`func (o *Status) HasOrionEngineLicensed() bool`

HasOrionEngineLicensed returns a boolean if a field has been set.

### GetColorfrontEngineLicensed

`func (o *Status) GetColorfrontEngineLicensed() bool`

GetColorfrontEngineLicensed returns the ColorfrontEngineLicensed field if non-nil, zero value otherwise.

### GetColorfrontEngineLicensedOk

`func (o *Status) GetColorfrontEngineLicensedOk() (*bool, bool)`

GetColorfrontEngineLicensedOk returns a tuple with the ColorfrontEngineLicensed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetColorfrontEngineLicensed

`func (o *Status) SetColorfrontEngineLicensed(v bool)`

SetColorfrontEngineLicensed sets ColorfrontEngineLicensed field to given value.

### HasColorfrontEngineLicensed

`func (o *Status) HasColorfrontEngineLicensed() bool`

HasColorfrontEngineLicensed returns a boolean if a field has been set.

### GetShutdownTime

`func (o *Status) GetShutdownTime() int32`

GetShutdownTime returns the ShutdownTime field if non-nil, zero value otherwise.

### GetShutdownTimeOk

`func (o *Status) GetShutdownTimeOk() (*int32, bool)`

GetShutdownTimeOk returns a tuple with the ShutdownTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShutdownTime

`func (o *Status) SetShutdownTime(v int32)`

SetShutdownTime sets ShutdownTime field to given value.

### HasShutdownTime

`func (o *Status) HasShutdownTime() bool`

HasShutdownTime returns a boolean if a field has been set.

### GetColorfrontTransformVersion

`func (o *Status) GetColorfrontTransformVersion() string`

GetColorfrontTransformVersion returns the ColorfrontTransformVersion field if non-nil, zero value otherwise.

### GetColorfrontTransformVersionOk

`func (o *Status) GetColorfrontTransformVersionOk() (*string, bool)`

GetColorfrontTransformVersionOk returns a tuple with the ColorfrontTransformVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetColorfrontTransformVersion

`func (o *Status) SetColorfrontTransformVersion(v string)`

SetColorfrontTransformVersion sets ColorfrontTransformVersion field to given value.

### HasColorfrontTransformVersion

`func (o *Status) HasColorfrontTransformVersion() bool`

HasColorfrontTransformVersion returns a boolean if a field has been set.

### GetColorfrontEngineVersion

`func (o *Status) GetColorfrontEngineVersion() string`

GetColorfrontEngineVersion returns the ColorfrontEngineVersion field if non-nil, zero value otherwise.

### GetColorfrontEngineVersionOk

`func (o *Status) GetColorfrontEngineVersionOk() (*string, bool)`

GetColorfrontEngineVersionOk returns a tuple with the ColorfrontEngineVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetColorfrontEngineVersion

`func (o *Status) SetColorfrontEngineVersion(v string)`

SetColorfrontEngineVersion sets ColorfrontEngineVersion field to given value.

### HasColorfrontEngineVersion

`func (o *Status) HasColorfrontEngineVersion() bool`

HasColorfrontEngineVersion returns a boolean if a field has been set.

### GetOrionVersion

`func (o *Status) GetOrionVersion() string`

GetOrionVersion returns the OrionVersion field if non-nil, zero value otherwise.

### GetOrionVersionOk

`func (o *Status) GetOrionVersionOk() (*string, bool)`

GetOrionVersionOk returns a tuple with the OrionVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrionVersion

`func (o *Status) SetOrionVersion(v string)`

SetOrionVersion sets OrionVersion field to given value.

### HasOrionVersion

`func (o *Status) HasOrionVersion() bool`

HasOrionVersion returns a boolean if a field has been set.

### GetBbcLutVersion

`func (o *Status) GetBbcLutVersion() string`

GetBbcLutVersion returns the BbcLutVersion field if non-nil, zero value otherwise.

### GetBbcLutVersionOk

`func (o *Status) GetBbcLutVersionOk() (*string, bool)`

GetBbcLutVersionOk returns a tuple with the BbcLutVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBbcLutVersion

`func (o *Status) SetBbcLutVersion(v string)`

SetBbcLutVersion sets BbcLutVersion field to given value.

### HasBbcLutVersion

`func (o *Status) HasBbcLutVersion() bool`

HasBbcLutVersion returns a boolean if a field has been set.

### GetNbcuLutVersion

`func (o *Status) GetNbcuLutVersion() string`

GetNbcuLutVersion returns the NbcuLutVersion field if non-nil, zero value otherwise.

### GetNbcuLutVersionOk

`func (o *Status) GetNbcuLutVersionOk() (*string, bool)`

GetNbcuLutVersionOk returns a tuple with the NbcuLutVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNbcuLutVersion

`func (o *Status) SetNbcuLutVersion(v string)`

SetNbcuLutVersion sets NbcuLutVersion field to given value.

### HasNbcuLutVersion

`func (o *Status) HasNbcuLutVersion() bool`

HasNbcuLutVersion returns a boolean if a field has been set.

### GetCpuBusy

`func (o *Status) GetCpuBusy() bool`

GetCpuBusy returns the CpuBusy field if non-nil, zero value otherwise.

### GetCpuBusyOk

`func (o *Status) GetCpuBusyOk() (*bool, bool)`

GetCpuBusyOk returns a tuple with the CpuBusy field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpuBusy

`func (o *Status) SetCpuBusy(v bool)`

SetCpuBusy sets CpuBusy field to given value.

### HasCpuBusy

`func (o *Status) HasCpuBusy() bool`

HasCpuBusy returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


