# WiFiDeviceStatus

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** |  | [optional] 
**Mac** | Pointer to **string** |  | [optional] 
**Address** | Pointer to **string** |  | [optional] 
**Subnet** | Pointer to **string** |  | [optional] 
**Gateway** | Pointer to **string** |  | [optional] 
**Networks** | Pointer to **[]string** |  | [optional] 
**Connected** | Pointer to **bool** |  | [optional] [default to false]
**DhcpState** | Pointer to [**DHCPState**](DHCPState.md) |  | [optional] [default to DHCPSTATE_DISABLED]
**InterfaceSetupState** | Pointer to [**InterfaceSetupState**](InterfaceSetupState.md) |  | [optional] [default to INTERFACESETUPSTATE_UNINITIALIZED]
**IpAddressOffered** | Pointer to **string** |  | [optional] 
**LinkState** | Pointer to **string** |  | [optional] 
**WifiDongleState** | Pointer to **string** |  | [optional] 
**AuthenticationState** | Pointer to **string** |  | [optional] 

## Methods

### NewWiFiDeviceStatus

`func NewWiFiDeviceStatus() *WiFiDeviceStatus`

NewWiFiDeviceStatus instantiates a new WiFiDeviceStatus object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewWiFiDeviceStatusWithDefaults

`func NewWiFiDeviceStatusWithDefaults() *WiFiDeviceStatus`

NewWiFiDeviceStatusWithDefaults instantiates a new WiFiDeviceStatus object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *WiFiDeviceStatus) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *WiFiDeviceStatus) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *WiFiDeviceStatus) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *WiFiDeviceStatus) HasName() bool`

HasName returns a boolean if a field has been set.

### GetMac

`func (o *WiFiDeviceStatus) GetMac() string`

GetMac returns the Mac field if non-nil, zero value otherwise.

### GetMacOk

`func (o *WiFiDeviceStatus) GetMacOk() (*string, bool)`

GetMacOk returns a tuple with the Mac field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMac

`func (o *WiFiDeviceStatus) SetMac(v string)`

SetMac sets Mac field to given value.

### HasMac

`func (o *WiFiDeviceStatus) HasMac() bool`

HasMac returns a boolean if a field has been set.

### GetAddress

`func (o *WiFiDeviceStatus) GetAddress() string`

GetAddress returns the Address field if non-nil, zero value otherwise.

### GetAddressOk

`func (o *WiFiDeviceStatus) GetAddressOk() (*string, bool)`

GetAddressOk returns a tuple with the Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress

`func (o *WiFiDeviceStatus) SetAddress(v string)`

SetAddress sets Address field to given value.

### HasAddress

`func (o *WiFiDeviceStatus) HasAddress() bool`

HasAddress returns a boolean if a field has been set.

### GetSubnet

`func (o *WiFiDeviceStatus) GetSubnet() string`

GetSubnet returns the Subnet field if non-nil, zero value otherwise.

### GetSubnetOk

`func (o *WiFiDeviceStatus) GetSubnetOk() (*string, bool)`

GetSubnetOk returns a tuple with the Subnet field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubnet

`func (o *WiFiDeviceStatus) SetSubnet(v string)`

SetSubnet sets Subnet field to given value.

### HasSubnet

`func (o *WiFiDeviceStatus) HasSubnet() bool`

HasSubnet returns a boolean if a field has been set.

### GetGateway

`func (o *WiFiDeviceStatus) GetGateway() string`

GetGateway returns the Gateway field if non-nil, zero value otherwise.

### GetGatewayOk

`func (o *WiFiDeviceStatus) GetGatewayOk() (*string, bool)`

GetGatewayOk returns a tuple with the Gateway field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGateway

`func (o *WiFiDeviceStatus) SetGateway(v string)`

SetGateway sets Gateway field to given value.

### HasGateway

`func (o *WiFiDeviceStatus) HasGateway() bool`

HasGateway returns a boolean if a field has been set.

### GetNetworks

`func (o *WiFiDeviceStatus) GetNetworks() []string`

GetNetworks returns the Networks field if non-nil, zero value otherwise.

### GetNetworksOk

`func (o *WiFiDeviceStatus) GetNetworksOk() (*[]string, bool)`

GetNetworksOk returns a tuple with the Networks field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNetworks

`func (o *WiFiDeviceStatus) SetNetworks(v []string)`

SetNetworks sets Networks field to given value.

### HasNetworks

`func (o *WiFiDeviceStatus) HasNetworks() bool`

HasNetworks returns a boolean if a field has been set.

### GetConnected

`func (o *WiFiDeviceStatus) GetConnected() bool`

GetConnected returns the Connected field if non-nil, zero value otherwise.

### GetConnectedOk

`func (o *WiFiDeviceStatus) GetConnectedOk() (*bool, bool)`

GetConnectedOk returns a tuple with the Connected field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetConnected

`func (o *WiFiDeviceStatus) SetConnected(v bool)`

SetConnected sets Connected field to given value.

### HasConnected

`func (o *WiFiDeviceStatus) HasConnected() bool`

HasConnected returns a boolean if a field has been set.

### GetDhcpState

`func (o *WiFiDeviceStatus) GetDhcpState() DHCPState`

GetDhcpState returns the DhcpState field if non-nil, zero value otherwise.

### GetDhcpStateOk

`func (o *WiFiDeviceStatus) GetDhcpStateOk() (*DHCPState, bool)`

GetDhcpStateOk returns a tuple with the DhcpState field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDhcpState

`func (o *WiFiDeviceStatus) SetDhcpState(v DHCPState)`

SetDhcpState sets DhcpState field to given value.

### HasDhcpState

`func (o *WiFiDeviceStatus) HasDhcpState() bool`

HasDhcpState returns a boolean if a field has been set.

### GetInterfaceSetupState

`func (o *WiFiDeviceStatus) GetInterfaceSetupState() InterfaceSetupState`

GetInterfaceSetupState returns the InterfaceSetupState field if non-nil, zero value otherwise.

### GetInterfaceSetupStateOk

`func (o *WiFiDeviceStatus) GetInterfaceSetupStateOk() (*InterfaceSetupState, bool)`

GetInterfaceSetupStateOk returns a tuple with the InterfaceSetupState field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInterfaceSetupState

`func (o *WiFiDeviceStatus) SetInterfaceSetupState(v InterfaceSetupState)`

SetInterfaceSetupState sets InterfaceSetupState field to given value.

### HasInterfaceSetupState

`func (o *WiFiDeviceStatus) HasInterfaceSetupState() bool`

HasInterfaceSetupState returns a boolean if a field has been set.

### GetIpAddressOffered

`func (o *WiFiDeviceStatus) GetIpAddressOffered() string`

GetIpAddressOffered returns the IpAddressOffered field if non-nil, zero value otherwise.

### GetIpAddressOfferedOk

`func (o *WiFiDeviceStatus) GetIpAddressOfferedOk() (*string, bool)`

GetIpAddressOfferedOk returns a tuple with the IpAddressOffered field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpAddressOffered

`func (o *WiFiDeviceStatus) SetIpAddressOffered(v string)`

SetIpAddressOffered sets IpAddressOffered field to given value.

### HasIpAddressOffered

`func (o *WiFiDeviceStatus) HasIpAddressOffered() bool`

HasIpAddressOffered returns a boolean if a field has been set.

### GetLinkState

`func (o *WiFiDeviceStatus) GetLinkState() string`

GetLinkState returns the LinkState field if non-nil, zero value otherwise.

### GetLinkStateOk

`func (o *WiFiDeviceStatus) GetLinkStateOk() (*string, bool)`

GetLinkStateOk returns a tuple with the LinkState field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLinkState

`func (o *WiFiDeviceStatus) SetLinkState(v string)`

SetLinkState sets LinkState field to given value.

### HasLinkState

`func (o *WiFiDeviceStatus) HasLinkState() bool`

HasLinkState returns a boolean if a field has been set.

### GetWifiDongleState

`func (o *WiFiDeviceStatus) GetWifiDongleState() string`

GetWifiDongleState returns the WifiDongleState field if non-nil, zero value otherwise.

### GetWifiDongleStateOk

`func (o *WiFiDeviceStatus) GetWifiDongleStateOk() (*string, bool)`

GetWifiDongleStateOk returns a tuple with the WifiDongleState field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWifiDongleState

`func (o *WiFiDeviceStatus) SetWifiDongleState(v string)`

SetWifiDongleState sets WifiDongleState field to given value.

### HasWifiDongleState

`func (o *WiFiDeviceStatus) HasWifiDongleState() bool`

HasWifiDongleState returns a boolean if a field has been set.

### GetAuthenticationState

`func (o *WiFiDeviceStatus) GetAuthenticationState() string`

GetAuthenticationState returns the AuthenticationState field if non-nil, zero value otherwise.

### GetAuthenticationStateOk

`func (o *WiFiDeviceStatus) GetAuthenticationStateOk() (*string, bool)`

GetAuthenticationStateOk returns a tuple with the AuthenticationState field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuthenticationState

`func (o *WiFiDeviceStatus) SetAuthenticationState(v string)`

SetAuthenticationState sets AuthenticationState field to given value.

### HasAuthenticationState

`func (o *WiFiDeviceStatus) HasAuthenticationState() bool`

HasAuthenticationState returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


