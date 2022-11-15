/**
 * OpenAPI ColorBox
 * This is a REST API for the AJA ColorBox product.
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@aja.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 * Copyright (C) 2020-2022 AJA Video Systems, Inc.  All rights reserved.
 */

/*
 * NetStatus.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_NetStatus_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_NetStatus_H_


#include "ModelBase.h"

#include "model/InterfaceSetupState.h"
#include "model/DHCPState.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  NetStatus
    : public ModelBase
{
public:
    NetStatus();
    virtual ~NetStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool applyMinMaxConstraints() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NetStatus members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);


    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMac() const;
    bool macIsSet() const;
    void unsetMac();

    void setMac(const utility::string_t& value);


    /// <summary>
    /// 
    /// </summary>
    bool isConnected() const;
    bool connectedIsSet() const;
    void unsetConnected();

    void setConnected(bool value);


    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DHCPState> getDhcpState() const;
    bool dhcpStateIsSet() const;
    void unsetDhcpState();

    void setDhcpState(const std::shared_ptr<DHCPState>& value);


    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<InterfaceSetupState> getInterfaceSetupState() const;
    bool interfaceSetupStateIsSet() const;
    void unsetInterfaceSetupState();

    void setInterfaceSetupState(const std::shared_ptr<InterfaceSetupState>& value);


    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIpAddressOffered() const;
    bool ipAddressOfferedIsSet() const;
    void unsetIpAddressOffered();

    void setIpAddressOffered(const utility::string_t& value);


    /// <summary>
    /// 
    /// </summary>
    int32_t getLinkErrors() const;
    bool linkErrorsIsSet() const;
    void unsetLinkErrors();

    void setLinkErrors(int32_t value);


    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLinkState() const;
    bool linkStateIsSet() const;
    void unsetLinkState();

    void setLinkState(const utility::string_t& value);


    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLldpChassisId() const;
    bool lldpChassisIdIsSet() const;
    void unsetLldpChassisId();

    void setLldpChassisId(const utility::string_t& value);


    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLldpPortId() const;
    bool lldpPortIdIsSet() const;
    void unsetLldpPortId();

    void setLldpPortId(const utility::string_t& value);


    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLldpName() const;
    bool lldpNameIsSet() const;
    void unsetLldpName();

    void setLldpName(const utility::string_t& value);



protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Mac;
    bool m_MacIsSet;
    bool m_Connected;
    bool m_ConnectedIsSet;
    std::shared_ptr<DHCPState> m_DhcpState;
    bool m_DhcpStateIsSet;
    std::shared_ptr<InterfaceSetupState> m_InterfaceSetupState;
    bool m_InterfaceSetupStateIsSet;
    utility::string_t m_IpAddressOffered;
    bool m_IpAddressOfferedIsSet;
    int32_t m_LinkErrors;
    bool m_LinkErrorsIsSet;
    utility::string_t m_LinkState;
    bool m_LinkStateIsSet;
    utility::string_t m_LldpChassisId;
    bool m_LldpChassisIdIsSet;
    utility::string_t m_LldpPortId;
    bool m_LldpPortIdIsSet;
    utility::string_t m_LldpName;
    bool m_LldpNameIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_NetStatus_H_ */