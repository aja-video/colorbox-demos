# WiFiDeviceConfig

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**WifiControl** | Pointer to **string** |  | [optional] [default to "Off"]
**WifiNetwork** | Pointer to **string** |  | [optional] 
**WifiPassword** | Pointer to **string** |  | [optional] 
**WifiSecurity** | Pointer to **string** |  | [optional] [default to "None"]
**WifiIpConfig** | Pointer to **string** |  | [optional] [default to "DHCP"]
**Address** | Pointer to **string** |  | [optional] 
**Subnet** | Pointer to **string** |  | [optional] 
**Gateway** | Pointer to **string** |  | [optional] 
**WifiIpChangeCommit** | Pointer to **int32** |  | [optional] [default to 0]
**WifiPasswordLength** | Pointer to **int32** |  | [optional] 
**WifiRegion** | Pointer to **string** |  | [optional] 

## Methods

### NewWiFiDeviceConfig

`func NewWiFiDeviceConfig() *WiFiDeviceConfig`

NewWiFiDeviceConfig instantiates a new WiFiDeviceConfig object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewWiFiDeviceConfigWithDefaults

`func NewWiFiDeviceConfigWithDefaults() *WiFiDeviceConfig`

NewWiFiDeviceConfigWithDefaults instantiates a new WiFiDeviceConfig object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetWifiControl

`func (o *WiFiDeviceConfig) GetWifiControl() string`

GetWifiControl returns the WifiControl field if non-nil, zero value otherwise.

### GetWifiControlOk

`func (o *WiFiDeviceConfig) GetWifiControlOk() (*string, bool)`

GetWifiControlOk returns a tuple with the WifiControl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWifiControl

`func (o *WiFiDeviceConfig) SetWifiControl(v string)`

SetWifiControl sets WifiControl field to given value.

### HasWifiControl

`func (o *WiFiDeviceConfig) HasWifiControl() bool`

HasWifiControl returns a boolean if a field has been set.

### GetWifiNetwork

`func (o *WiFiDeviceConfig) GetWifiNetwork() string`

GetWifiNetwork returns the WifiNetwork field if non-nil, zero value otherwise.

### GetWifiNetworkOk

`func (o *WiFiDeviceConfig) GetWifiNetworkOk() (*string, bool)`

GetWifiNetworkOk returns a tuple with the WifiNetwork field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWifiNetwork

`func (o *WiFiDeviceConfig) SetWifiNetwork(v string)`

SetWifiNetwork sets WifiNetwork field to given value.

### HasWifiNetwork

`func (o *WiFiDeviceConfig) HasWifiNetwork() bool`

HasWifiNetwork returns a boolean if a field has been set.

### GetWifiPassword

`func (o *WiFiDeviceConfig) GetWifiPassword() string`

GetWifiPassword returns the WifiPassword field if non-nil, zero value otherwise.

### GetWifiPasswordOk

`func (o *WiFiDeviceConfig) GetWifiPasswordOk() (*string, bool)`

GetWifiPasswordOk returns a tuple with the WifiPassword field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWifiPassword

`func (o *WiFiDeviceConfig) SetWifiPassword(v string)`

SetWifiPassword sets WifiPassword field to given value.

### HasWifiPassword

`func (o *WiFiDeviceConfig) HasWifiPassword() bool`

HasWifiPassword returns a boolean if a field has been set.

### GetWifiSecurity

`func (o *WiFiDeviceConfig) GetWifiSecurity() string`

GetWifiSecurity returns the WifiSecurity field if non-nil, zero value otherwise.

### GetWifiSecurityOk

`func (o *WiFiDeviceConfig) GetWifiSecurityOk() (*string, bool)`

GetWifiSecurityOk returns a tuple with the WifiSecurity field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWifiSecurity

`func (o *WiFiDeviceConfig) SetWifiSecurity(v string)`

SetWifiSecurity sets WifiSecurity field to given value.

### HasWifiSecurity

`func (o *WiFiDeviceConfig) HasWifiSecurity() bool`

HasWifiSecurity returns a boolean if a field has been set.

### GetWifiIpConfig

`func (o *WiFiDeviceConfig) GetWifiIpConfig() string`

GetWifiIpConfig returns the WifiIpConfig field if non-nil, zero value otherwise.

### GetWifiIpConfigOk

`func (o *WiFiDeviceConfig) GetWifiIpConfigOk() (*string, bool)`

GetWifiIpConfigOk returns a tuple with the WifiIpConfig field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWifiIpConfig

`func (o *WiFiDeviceConfig) SetWifiIpConfig(v string)`

SetWifiIpConfig sets WifiIpConfig field to given value.

### HasWifiIpConfig

`func (o *WiFiDeviceConfig) HasWifiIpConfig() bool`

HasWifiIpConfig returns a boolean if a field has been set.

### GetAddress

`func (o *WiFiDeviceConfig) GetAddress() string`

GetAddress returns the Address field if non-nil, zero value otherwise.

### GetAddressOk

`func (o *WiFiDeviceConfig) GetAddressOk() (*string, bool)`

GetAddressOk returns a tuple with the Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress

`func (o *WiFiDeviceConfig) SetAddress(v string)`

SetAddress sets Address field to given value.

### HasAddress

`func (o *WiFiDeviceConfig) HasAddress() bool`

HasAddress returns a boolean if a field has been set.

### GetSubnet

`func (o *WiFiDeviceConfig) GetSubnet() string`

GetSubnet returns the Subnet field if non-nil, zero value otherwise.

### GetSubnetOk

`func (o *WiFiDeviceConfig) GetSubnetOk() (*string, bool)`

GetSubnetOk returns a tuple with the Subnet field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubnet

`func (o *WiFiDeviceConfig) SetSubnet(v string)`

SetSubnet sets Subnet field to given value.

### HasSubnet

`func (o *WiFiDeviceConfig) HasSubnet() bool`

HasSubnet returns a boolean if a field has been set.

### GetGateway

`func (o *WiFiDeviceConfig) GetGateway() string`

GetGateway returns the Gateway field if non-nil, zero value otherwise.

### GetGatewayOk

`func (o *WiFiDeviceConfig) GetGatewayOk() (*string, bool)`

GetGatewayOk returns a tuple with the Gateway field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGateway

`func (o *WiFiDeviceConfig) SetGateway(v string)`

SetGateway sets Gateway field to given value.

### HasGateway

`func (o *WiFiDeviceConfig) HasGateway() bool`

HasGateway returns a boolean if a field has been set.

### GetWifiIpChangeCommit

`func (o *WiFiDeviceConfig) GetWifiIpChangeCommit() int32`

GetWifiIpChangeCommit returns the WifiIpChangeCommit field if non-nil, zero value otherwise.

### GetWifiIpChangeCommitOk

`func (o *WiFiDeviceConfig) GetWifiIpChangeCommitOk() (*int32, bool)`

GetWifiIpChangeCommitOk returns a tuple with the WifiIpChangeCommit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWifiIpChangeCommit

`func (o *WiFiDeviceConfig) SetWifiIpChangeCommit(v int32)`

SetWifiIpChangeCommit sets WifiIpChangeCommit field to given value.

### HasWifiIpChangeCommit

`func (o *WiFiDeviceConfig) HasWifiIpChangeCommit() bool`

HasWifiIpChangeCommit returns a boolean if a field has been set.

### GetWifiPasswordLength

`func (o *WiFiDeviceConfig) GetWifiPasswordLength() int32`

GetWifiPasswordLength returns the WifiPasswordLength field if non-nil, zero value otherwise.

### GetWifiPasswordLengthOk

`func (o *WiFiDeviceConfig) GetWifiPasswordLengthOk() (*int32, bool)`

GetWifiPasswordLengthOk returns a tuple with the WifiPasswordLength field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWifiPasswordLength

`func (o *WiFiDeviceConfig) SetWifiPasswordLength(v int32)`

SetWifiPasswordLength sets WifiPasswordLength field to given value.

### HasWifiPasswordLength

`func (o *WiFiDeviceConfig) HasWifiPasswordLength() bool`

HasWifiPasswordLength returns a boolean if a field has been set.

### GetWifiRegion

`func (o *WiFiDeviceConfig) GetWifiRegion() string`

GetWifiRegion returns the WifiRegion field if non-nil, zero value otherwise.

### GetWifiRegionOk

`func (o *WiFiDeviceConfig) GetWifiRegionOk() (*string, bool)`

GetWifiRegionOk returns a tuple with the WifiRegion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWifiRegion

`func (o *WiFiDeviceConfig) SetWifiRegion(v string)`

SetWifiRegion sets WifiRegion field to given value.

### HasWifiRegion

`func (o *WiFiDeviceConfig) HasWifiRegion() bool`

HasWifiRegion returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


