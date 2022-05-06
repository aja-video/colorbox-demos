# NetStatus

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** |  | [optional] 
**Mac** | Pointer to **string** |  | [optional] 
**Connected** | Pointer to **bool** |  | [optional] [default to false]
**DhcpState** | Pointer to [**DHCPState**](DHCPState.md) |  | [optional] [default to DHCPSTATE_DISABLED]
**InterfaceSetupState** | Pointer to [**InterfaceSetupState**](InterfaceSetupState.md) |  | [optional] [default to INTERFACESETUPSTATE_UNINITIALIZED]
**IpAddressOffered** | Pointer to **string** |  | [optional] 
**LinkErrors** | Pointer to **int32** |  | [optional] [default to 0]
**LinkState** | Pointer to **string** |  | [optional] 
**LldpChassisId** | Pointer to **string** |  | [optional] 
**LldpPortId** | Pointer to **string** |  | [optional] 
**LldpName** | Pointer to **string** |  | [optional] 

## Methods

### NewNetStatus

`func NewNetStatus() *NetStatus`

NewNetStatus instantiates a new NetStatus object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewNetStatusWithDefaults

`func NewNetStatusWithDefaults() *NetStatus`

NewNetStatusWithDefaults instantiates a new NetStatus object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *NetStatus) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *NetStatus) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *NetStatus) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *NetStatus) HasName() bool`

HasName returns a boolean if a field has been set.

### GetMac

`func (o *NetStatus) GetMac() string`

GetMac returns the Mac field if non-nil, zero value otherwise.

### GetMacOk

`func (o *NetStatus) GetMacOk() (*string, bool)`

GetMacOk returns a tuple with the Mac field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMac

`func (o *NetStatus) SetMac(v string)`

SetMac sets Mac field to given value.

### HasMac

`func (o *NetStatus) HasMac() bool`

HasMac returns a boolean if a field has been set.

### GetConnected

`func (o *NetStatus) GetConnected() bool`

GetConnected returns the Connected field if non-nil, zero value otherwise.

### GetConnectedOk

`func (o *NetStatus) GetConnectedOk() (*bool, bool)`

GetConnectedOk returns a tuple with the Connected field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetConnected

`func (o *NetStatus) SetConnected(v bool)`

SetConnected sets Connected field to given value.

### HasConnected

`func (o *NetStatus) HasConnected() bool`

HasConnected returns a boolean if a field has been set.

### GetDhcpState

`func (o *NetStatus) GetDhcpState() DHCPState`

GetDhcpState returns the DhcpState field if non-nil, zero value otherwise.

### GetDhcpStateOk

`func (o *NetStatus) GetDhcpStateOk() (*DHCPState, bool)`

GetDhcpStateOk returns a tuple with the DhcpState field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDhcpState

`func (o *NetStatus) SetDhcpState(v DHCPState)`

SetDhcpState sets DhcpState field to given value.

### HasDhcpState

`func (o *NetStatus) HasDhcpState() bool`

HasDhcpState returns a boolean if a field has been set.

### GetInterfaceSetupState

`func (o *NetStatus) GetInterfaceSetupState() InterfaceSetupState`

GetInterfaceSetupState returns the InterfaceSetupState field if non-nil, zero value otherwise.

### GetInterfaceSetupStateOk

`func (o *NetStatus) GetInterfaceSetupStateOk() (*InterfaceSetupState, bool)`

GetInterfaceSetupStateOk returns a tuple with the InterfaceSetupState field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInterfaceSetupState

`func (o *NetStatus) SetInterfaceSetupState(v InterfaceSetupState)`

SetInterfaceSetupState sets InterfaceSetupState field to given value.

### HasInterfaceSetupState

`func (o *NetStatus) HasInterfaceSetupState() bool`

HasInterfaceSetupState returns a boolean if a field has been set.

### GetIpAddressOffered

`func (o *NetStatus) GetIpAddressOffered() string`

GetIpAddressOffered returns the IpAddressOffered field if non-nil, zero value otherwise.

### GetIpAddressOfferedOk

`func (o *NetStatus) GetIpAddressOfferedOk() (*string, bool)`

GetIpAddressOfferedOk returns a tuple with the IpAddressOffered field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpAddressOffered

`func (o *NetStatus) SetIpAddressOffered(v string)`

SetIpAddressOffered sets IpAddressOffered field to given value.

### HasIpAddressOffered

`func (o *NetStatus) HasIpAddressOffered() bool`

HasIpAddressOffered returns a boolean if a field has been set.

### GetLinkErrors

`func (o *NetStatus) GetLinkErrors() int32`

GetLinkErrors returns the LinkErrors field if non-nil, zero value otherwise.

### GetLinkErrorsOk

`func (o *NetStatus) GetLinkErrorsOk() (*int32, bool)`

GetLinkErrorsOk returns a tuple with the LinkErrors field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLinkErrors

`func (o *NetStatus) SetLinkErrors(v int32)`

SetLinkErrors sets LinkErrors field to given value.

### HasLinkErrors

`func (o *NetStatus) HasLinkErrors() bool`

HasLinkErrors returns a boolean if a field has been set.

### GetLinkState

`func (o *NetStatus) GetLinkState() string`

GetLinkState returns the LinkState field if non-nil, zero value otherwise.

### GetLinkStateOk

`func (o *NetStatus) GetLinkStateOk() (*string, bool)`

GetLinkStateOk returns a tuple with the LinkState field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLinkState

`func (o *NetStatus) SetLinkState(v string)`

SetLinkState sets LinkState field to given value.

### HasLinkState

`func (o *NetStatus) HasLinkState() bool`

HasLinkState returns a boolean if a field has been set.

### GetLldpChassisId

`func (o *NetStatus) GetLldpChassisId() string`

GetLldpChassisId returns the LldpChassisId field if non-nil, zero value otherwise.

### GetLldpChassisIdOk

`func (o *NetStatus) GetLldpChassisIdOk() (*string, bool)`

GetLldpChassisIdOk returns a tuple with the LldpChassisId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLldpChassisId

`func (o *NetStatus) SetLldpChassisId(v string)`

SetLldpChassisId sets LldpChassisId field to given value.

### HasLldpChassisId

`func (o *NetStatus) HasLldpChassisId() bool`

HasLldpChassisId returns a boolean if a field has been set.

### GetLldpPortId

`func (o *NetStatus) GetLldpPortId() string`

GetLldpPortId returns the LldpPortId field if non-nil, zero value otherwise.

### GetLldpPortIdOk

`func (o *NetStatus) GetLldpPortIdOk() (*string, bool)`

GetLldpPortIdOk returns a tuple with the LldpPortId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLldpPortId

`func (o *NetStatus) SetLldpPortId(v string)`

SetLldpPortId sets LldpPortId field to given value.

### HasLldpPortId

`func (o *NetStatus) HasLldpPortId() bool`

HasLldpPortId returns a boolean if a field has been set.

### GetLldpName

`func (o *NetStatus) GetLldpName() string`

GetLldpName returns the LldpName field if non-nil, zero value otherwise.

### GetLldpNameOk

`func (o *NetStatus) GetLldpNameOk() (*string, bool)`

GetLldpNameOk returns a tuple with the LldpName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLldpName

`func (o *NetStatus) SetLldpName(v string)`

SetLldpName sets LldpName field to given value.

### HasLldpName

`func (o *NetStatus) HasLldpName() bool`

HasLldpName returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


