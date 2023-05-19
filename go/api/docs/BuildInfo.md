# BuildInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Date** | Pointer to **string** | Date of the build, in local time of build machine | [optional] 
**Time** | Pointer to **string** | Time of the build, in local time of build machine | [optional] 
**Repoident** | Pointer to **string** | Code repo identifier, git hash | [optional] 
**BuildType** | Pointer to **string** | Debug, Release, RelWithDebInfo, etc | [optional] 
**AppVersion** | Pointer to **string** | Build version of application | [optional] 
**QtVersion** | Pointer to **string** | Version of Qt used | [optional] 

## Methods

### NewBuildInfo

`func NewBuildInfo() *BuildInfo`

NewBuildInfo instantiates a new BuildInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBuildInfoWithDefaults

`func NewBuildInfoWithDefaults() *BuildInfo`

NewBuildInfoWithDefaults instantiates a new BuildInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDate

`func (o *BuildInfo) GetDate() string`

GetDate returns the Date field if non-nil, zero value otherwise.

### GetDateOk

`func (o *BuildInfo) GetDateOk() (*string, bool)`

GetDateOk returns a tuple with the Date field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDate

`func (o *BuildInfo) SetDate(v string)`

SetDate sets Date field to given value.

### HasDate

`func (o *BuildInfo) HasDate() bool`

HasDate returns a boolean if a field has been set.

### GetTime

`func (o *BuildInfo) GetTime() string`

GetTime returns the Time field if non-nil, zero value otherwise.

### GetTimeOk

`func (o *BuildInfo) GetTimeOk() (*string, bool)`

GetTimeOk returns a tuple with the Time field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTime

`func (o *BuildInfo) SetTime(v string)`

SetTime sets Time field to given value.

### HasTime

`func (o *BuildInfo) HasTime() bool`

HasTime returns a boolean if a field has been set.

### GetRepoident

`func (o *BuildInfo) GetRepoident() string`

GetRepoident returns the Repoident field if non-nil, zero value otherwise.

### GetRepoidentOk

`func (o *BuildInfo) GetRepoidentOk() (*string, bool)`

GetRepoidentOk returns a tuple with the Repoident field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRepoident

`func (o *BuildInfo) SetRepoident(v string)`

SetRepoident sets Repoident field to given value.

### HasRepoident

`func (o *BuildInfo) HasRepoident() bool`

HasRepoident returns a boolean if a field has been set.

### GetBuildType

`func (o *BuildInfo) GetBuildType() string`

GetBuildType returns the BuildType field if non-nil, zero value otherwise.

### GetBuildTypeOk

`func (o *BuildInfo) GetBuildTypeOk() (*string, bool)`

GetBuildTypeOk returns a tuple with the BuildType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBuildType

`func (o *BuildInfo) SetBuildType(v string)`

SetBuildType sets BuildType field to given value.

### HasBuildType

`func (o *BuildInfo) HasBuildType() bool`

HasBuildType returns a boolean if a field has been set.

### GetAppVersion

`func (o *BuildInfo) GetAppVersion() string`

GetAppVersion returns the AppVersion field if non-nil, zero value otherwise.

### GetAppVersionOk

`func (o *BuildInfo) GetAppVersionOk() (*string, bool)`

GetAppVersionOk returns a tuple with the AppVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAppVersion

`func (o *BuildInfo) SetAppVersion(v string)`

SetAppVersion sets AppVersion field to given value.

### HasAppVersion

`func (o *BuildInfo) HasAppVersion() bool`

HasAppVersion returns a boolean if a field has been set.

### GetQtVersion

`func (o *BuildInfo) GetQtVersion() string`

GetQtVersion returns the QtVersion field if non-nil, zero value otherwise.

### GetQtVersionOk

`func (o *BuildInfo) GetQtVersionOk() (*string, bool)`

GetQtVersionOk returns a tuple with the QtVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQtVersion

`func (o *BuildInfo) SetQtVersion(v string)`

SetQtVersion sets QtVersion field to given value.

### HasQtVersion

`func (o *BuildInfo) HasQtVersion() bool`

HasQtVersion returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


