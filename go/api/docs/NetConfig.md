# NetConfig

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**IpConfig** | Pointer to [**IpConfig**](IpConfig.md) |  | [optional] [default to IPCONFIG_DHCP]
**IpChangeCommit** | Pointer to **int32** |  | [optional] [default to 0]

## Methods

### NewNetConfig

`func NewNetConfig() *NetConfig`

NewNetConfig instantiates a new NetConfig object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewNetConfigWithDefaults

`func NewNetConfigWithDefaults() *NetConfig`

NewNetConfigWithDefaults instantiates a new NetConfig object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetIpConfig

`func (o *NetConfig) GetIpConfig() IpConfig`

GetIpConfig returns the IpConfig field if non-nil, zero value otherwise.

### GetIpConfigOk

`func (o *NetConfig) GetIpConfigOk() (*IpConfig, bool)`

GetIpConfigOk returns a tuple with the IpConfig field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpConfig

`func (o *NetConfig) SetIpConfig(v IpConfig)`

SetIpConfig sets IpConfig field to given value.

### HasIpConfig

`func (o *NetConfig) HasIpConfig() bool`

HasIpConfig returns a boolean if a field has been set.

### GetIpChangeCommit

`func (o *NetConfig) GetIpChangeCommit() int32`

GetIpChangeCommit returns the IpChangeCommit field if non-nil, zero value otherwise.

### GetIpChangeCommitOk

`func (o *NetConfig) GetIpChangeCommitOk() (*int32, bool)`

GetIpChangeCommitOk returns a tuple with the IpChangeCommit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpChangeCommit

`func (o *NetConfig) SetIpChangeCommit(v int32)`

SetIpChangeCommit sets IpChangeCommit field to given value.

### HasIpChangeCommit

`func (o *NetConfig) HasIpChangeCommit() bool`

HasIpChangeCommit returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


