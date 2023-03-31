/**
 * OpenAPI ColorBox
 * This is a REST API for the AJA ColorBox product.
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@aja.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 *       Do not edit the class manually.
 *
 * Copyright (C) 2020-2022 AJA Video Systems Inc.  All rights reserved.
 */

#include "OAIColorfrontLiveMode.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIColorfrontLiveMode::OAIColorfrontLiveMode(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIColorfrontLiveMode::OAIColorfrontLiveMode() {
    this->initializeModel();
}

OAIColorfrontLiveMode::~OAIColorfrontLiveMode() {}

void OAIColorfrontLiveMode::initializeModel() {

    m_engine_isSet = false;
    m_engine_isValid = false;

    m_in_dyn_range_gamut_isSet = false;
    m_in_dyn_range_gamut_isValid = false;

    m_out_dyn_range_gamut_isSet = false;
    m_out_dyn_range_gamut_isValid = false;

    m_sdr_preview_isSet = false;
    m_sdr_preview_isValid = false;

    m_hdr_amount_isSet = false;
    m_hdr_amount_isValid = false;

    m_amb_light_comp_isSet = false;
    m_amb_light_comp_isValid = false;

    m_hdr_log_look_isSet = false;
    m_hdr_log_look_isValid = false;

    m_sdr_softness_isSet = false;
    m_sdr_softness_isValid = false;

    m_lift_master_isSet = false;
    m_lift_master_isValid = false;

    m_lift_red_isSet = false;
    m_lift_red_isValid = false;

    m_lift_green_isSet = false;
    m_lift_green_isValid = false;

    m_lift_blue_isSet = false;
    m_lift_blue_isValid = false;

    m_gamma_master_isSet = false;
    m_gamma_master_isValid = false;

    m_gamma_red_isSet = false;
    m_gamma_red_isValid = false;

    m_gamma_green_isSet = false;
    m_gamma_green_isValid = false;

    m_gamma_blue_isSet = false;
    m_gamma_blue_isValid = false;

    m_gain_master_isSet = false;
    m_gain_master_isValid = false;

    m_gain_red_isSet = false;
    m_gain_red_isValid = false;

    m_gain_green_isSet = false;
    m_gain_green_isValid = false;

    m_gain_blue_isSet = false;
    m_gain_blue_isValid = false;

    m_saturation_isSet = false;
    m_saturation_isValid = false;

    m_exposure_isSet = false;
    m_exposure_isValid = false;

    m_color_temp_isSet = false;
    m_color_temp_isValid = false;

    m_tint_isSet = false;
    m_tint_isValid = false;

    m_pq_output_nit_level_isSet = false;
    m_pq_output_nit_level_isValid = false;

    m_p3_colorspace_clamp_isSet = false;
    m_p3_colorspace_clamp_isValid = false;

    m_bt2408_mode_isSet = false;
    m_bt2408_mode_isValid = false;
}

void OAIColorfrontLiveMode::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIColorfrontLiveMode::fromJsonObject(QJsonObject json) {

    m_engine_isValid = ::OpenAPI::fromJsonValue(m_engine, json[QString("engine")]);
    m_engine_isSet = !json[QString("engine")].isNull() && m_engine_isValid;

    m_in_dyn_range_gamut_isValid = ::OpenAPI::fromJsonValue(m_in_dyn_range_gamut, json[QString("inDynRangeGamut")]);
    m_in_dyn_range_gamut_isSet = !json[QString("inDynRangeGamut")].isNull() && m_in_dyn_range_gamut_isValid;

    m_out_dyn_range_gamut_isValid = ::OpenAPI::fromJsonValue(m_out_dyn_range_gamut, json[QString("outDynRangeGamut")]);
    m_out_dyn_range_gamut_isSet = !json[QString("outDynRangeGamut")].isNull() && m_out_dyn_range_gamut_isValid;

    m_sdr_preview_isValid = ::OpenAPI::fromJsonValue(m_sdr_preview, json[QString("sdrPreview")]);
    m_sdr_preview_isSet = !json[QString("sdrPreview")].isNull() && m_sdr_preview_isValid;

    m_hdr_amount_isValid = ::OpenAPI::fromJsonValue(m_hdr_amount, json[QString("hdrAmount")]);
    m_hdr_amount_isSet = !json[QString("hdrAmount")].isNull() && m_hdr_amount_isValid;

    m_amb_light_comp_isValid = ::OpenAPI::fromJsonValue(m_amb_light_comp, json[QString("ambLightComp")]);
    m_amb_light_comp_isSet = !json[QString("ambLightComp")].isNull() && m_amb_light_comp_isValid;

    m_hdr_log_look_isValid = ::OpenAPI::fromJsonValue(m_hdr_log_look, json[QString("hdrLogLook")]);
    m_hdr_log_look_isSet = !json[QString("hdrLogLook")].isNull() && m_hdr_log_look_isValid;

    m_sdr_softness_isValid = ::OpenAPI::fromJsonValue(m_sdr_softness, json[QString("sdrSoftness")]);
    m_sdr_softness_isSet = !json[QString("sdrSoftness")].isNull() && m_sdr_softness_isValid;

    m_lift_master_isValid = ::OpenAPI::fromJsonValue(m_lift_master, json[QString("liftMaster")]);
    m_lift_master_isSet = !json[QString("liftMaster")].isNull() && m_lift_master_isValid;

    m_lift_red_isValid = ::OpenAPI::fromJsonValue(m_lift_red, json[QString("liftRed")]);
    m_lift_red_isSet = !json[QString("liftRed")].isNull() && m_lift_red_isValid;

    m_lift_green_isValid = ::OpenAPI::fromJsonValue(m_lift_green, json[QString("liftGreen")]);
    m_lift_green_isSet = !json[QString("liftGreen")].isNull() && m_lift_green_isValid;

    m_lift_blue_isValid = ::OpenAPI::fromJsonValue(m_lift_blue, json[QString("liftBlue")]);
    m_lift_blue_isSet = !json[QString("liftBlue")].isNull() && m_lift_blue_isValid;

    m_gamma_master_isValid = ::OpenAPI::fromJsonValue(m_gamma_master, json[QString("gammaMaster")]);
    m_gamma_master_isSet = !json[QString("gammaMaster")].isNull() && m_gamma_master_isValid;

    m_gamma_red_isValid = ::OpenAPI::fromJsonValue(m_gamma_red, json[QString("gammaRed")]);
    m_gamma_red_isSet = !json[QString("gammaRed")].isNull() && m_gamma_red_isValid;

    m_gamma_green_isValid = ::OpenAPI::fromJsonValue(m_gamma_green, json[QString("gammaGreen")]);
    m_gamma_green_isSet = !json[QString("gammaGreen")].isNull() && m_gamma_green_isValid;

    m_gamma_blue_isValid = ::OpenAPI::fromJsonValue(m_gamma_blue, json[QString("gammaBlue")]);
    m_gamma_blue_isSet = !json[QString("gammaBlue")].isNull() && m_gamma_blue_isValid;

    m_gain_master_isValid = ::OpenAPI::fromJsonValue(m_gain_master, json[QString("gainMaster")]);
    m_gain_master_isSet = !json[QString("gainMaster")].isNull() && m_gain_master_isValid;

    m_gain_red_isValid = ::OpenAPI::fromJsonValue(m_gain_red, json[QString("gainRed")]);
    m_gain_red_isSet = !json[QString("gainRed")].isNull() && m_gain_red_isValid;

    m_gain_green_isValid = ::OpenAPI::fromJsonValue(m_gain_green, json[QString("gainGreen")]);
    m_gain_green_isSet = !json[QString("gainGreen")].isNull() && m_gain_green_isValid;

    m_gain_blue_isValid = ::OpenAPI::fromJsonValue(m_gain_blue, json[QString("gainBlue")]);
    m_gain_blue_isSet = !json[QString("gainBlue")].isNull() && m_gain_blue_isValid;

    m_saturation_isValid = ::OpenAPI::fromJsonValue(m_saturation, json[QString("saturation")]);
    m_saturation_isSet = !json[QString("saturation")].isNull() && m_saturation_isValid;

    m_exposure_isValid = ::OpenAPI::fromJsonValue(m_exposure, json[QString("exposure")]);
    m_exposure_isSet = !json[QString("exposure")].isNull() && m_exposure_isValid;

    m_color_temp_isValid = ::OpenAPI::fromJsonValue(m_color_temp, json[QString("colorTemp")]);
    m_color_temp_isSet = !json[QString("colorTemp")].isNull() && m_color_temp_isValid;

    m_tint_isValid = ::OpenAPI::fromJsonValue(m_tint, json[QString("tint")]);
    m_tint_isSet = !json[QString("tint")].isNull() && m_tint_isValid;

    m_pq_output_nit_level_isValid = ::OpenAPI::fromJsonValue(m_pq_output_nit_level, json[QString("pqOutputNitLevel")]);
    m_pq_output_nit_level_isSet = !json[QString("pqOutputNitLevel")].isNull() && m_pq_output_nit_level_isValid;

    m_p3_colorspace_clamp_isValid = ::OpenAPI::fromJsonValue(m_p3_colorspace_clamp, json[QString("p3ColorspaceClamp")]);
    m_p3_colorspace_clamp_isSet = !json[QString("p3ColorspaceClamp")].isNull() && m_p3_colorspace_clamp_isValid;

    m_bt2408_mode_isValid = ::OpenAPI::fromJsonValue(m_bt2408_mode, json[QString("bt2408Mode")]);
    m_bt2408_mode_isSet = !json[QString("bt2408Mode")].isNull() && m_bt2408_mode_isValid;

    applyMinMaxConstraints();
}

QString OAIColorfrontLiveMode::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIColorfrontLiveMode::asJsonObject() const {
    QJsonObject obj;
    if (m_engine.isSet()) {
        obj.insert(QString("engine"), ::OpenAPI::toJsonValue(m_engine));
    }
    if (m_in_dyn_range_gamut.isSet()) {
        obj.insert(QString("inDynRangeGamut"), ::OpenAPI::toJsonValue(m_in_dyn_range_gamut));
    }
    if (m_out_dyn_range_gamut.isSet()) {
        obj.insert(QString("outDynRangeGamut"), ::OpenAPI::toJsonValue(m_out_dyn_range_gamut));
    }
    if (m_sdr_preview_isSet) {
        obj.insert(QString("sdrPreview"), ::OpenAPI::toJsonValue(m_sdr_preview));
    }
    if (m_hdr_amount_isSet) {
        obj.insert(QString("hdrAmount"), ::OpenAPI::toJsonValue(m_hdr_amount));
    }
    if (m_amb_light_comp_isSet) {
        obj.insert(QString("ambLightComp"), ::OpenAPI::toJsonValue(m_amb_light_comp));
    }
    if (m_hdr_log_look_isSet) {
        obj.insert(QString("hdrLogLook"), ::OpenAPI::toJsonValue(m_hdr_log_look));
    }
    if (m_sdr_softness_isSet) {
        obj.insert(QString("sdrSoftness"), ::OpenAPI::toJsonValue(m_sdr_softness));
    }
    if (m_lift_master_isSet) {
        obj.insert(QString("liftMaster"), ::OpenAPI::toJsonValue(m_lift_master));
    }
    if (m_lift_red_isSet) {
        obj.insert(QString("liftRed"), ::OpenAPI::toJsonValue(m_lift_red));
    }
    if (m_lift_green_isSet) {
        obj.insert(QString("liftGreen"), ::OpenAPI::toJsonValue(m_lift_green));
    }
    if (m_lift_blue_isSet) {
        obj.insert(QString("liftBlue"), ::OpenAPI::toJsonValue(m_lift_blue));
    }
    if (m_gamma_master_isSet) {
        obj.insert(QString("gammaMaster"), ::OpenAPI::toJsonValue(m_gamma_master));
    }
    if (m_gamma_red_isSet) {
        obj.insert(QString("gammaRed"), ::OpenAPI::toJsonValue(m_gamma_red));
    }
    if (m_gamma_green_isSet) {
        obj.insert(QString("gammaGreen"), ::OpenAPI::toJsonValue(m_gamma_green));
    }
    if (m_gamma_blue_isSet) {
        obj.insert(QString("gammaBlue"), ::OpenAPI::toJsonValue(m_gamma_blue));
    }
    if (m_gain_master_isSet) {
        obj.insert(QString("gainMaster"), ::OpenAPI::toJsonValue(m_gain_master));
    }
    if (m_gain_red_isSet) {
        obj.insert(QString("gainRed"), ::OpenAPI::toJsonValue(m_gain_red));
    }
    if (m_gain_green_isSet) {
        obj.insert(QString("gainGreen"), ::OpenAPI::toJsonValue(m_gain_green));
    }
    if (m_gain_blue_isSet) {
        obj.insert(QString("gainBlue"), ::OpenAPI::toJsonValue(m_gain_blue));
    }
    if (m_saturation_isSet) {
        obj.insert(QString("saturation"), ::OpenAPI::toJsonValue(m_saturation));
    }
    if (m_exposure_isSet) {
        obj.insert(QString("exposure"), ::OpenAPI::toJsonValue(m_exposure));
    }
    if (m_color_temp_isSet) {
        obj.insert(QString("colorTemp"), ::OpenAPI::toJsonValue(m_color_temp));
    }
    if (m_tint_isSet) {
        obj.insert(QString("tint"), ::OpenAPI::toJsonValue(m_tint));
    }
    if (m_pq_output_nit_level_isSet) {
        obj.insert(QString("pqOutputNitLevel"), ::OpenAPI::toJsonValue(m_pq_output_nit_level));
    }
    if (m_p3_colorspace_clamp_isSet) {
        obj.insert(QString("p3ColorspaceClamp"), ::OpenAPI::toJsonValue(m_p3_colorspace_clamp));
    }
    if (m_bt2408_mode_isSet) {
        obj.insert(QString("bt2408Mode"), ::OpenAPI::toJsonValue(m_bt2408_mode));
    }
    return obj;
}

OAIColorfrontEngine OAIColorfrontLiveMode::getEngine() const {
    return m_engine;
}
void OAIColorfrontLiveMode::setEngine(const OAIColorfrontEngine &engine) {
	OAIColorfrontEngine v = engine;
	this->m_engine = v;
    this->m_engine_isSet = true;
}

bool OAIColorfrontLiveMode::is_engine_Set() const{
    return m_engine_isSet;
}

bool OAIColorfrontLiveMode::is_engine_Valid() const{
    return m_engine_isValid;
}


OAIColorfrontDynRangeGamutLiveModeIn OAIColorfrontLiveMode::getInDynRangeGamut() const {
    return m_in_dyn_range_gamut;
}
void OAIColorfrontLiveMode::setInDynRangeGamut(const OAIColorfrontDynRangeGamutLiveModeIn &in_dyn_range_gamut) {
	OAIColorfrontDynRangeGamutLiveModeIn v = in_dyn_range_gamut;
	this->m_in_dyn_range_gamut = v;
    this->m_in_dyn_range_gamut_isSet = true;
}

bool OAIColorfrontLiveMode::is_in_dyn_range_gamut_Set() const{
    return m_in_dyn_range_gamut_isSet;
}

bool OAIColorfrontLiveMode::is_in_dyn_range_gamut_Valid() const{
    return m_in_dyn_range_gamut_isValid;
}


OAIColorfrontDynRangeGamutLiveModeOut OAIColorfrontLiveMode::getOutDynRangeGamut() const {
    return m_out_dyn_range_gamut;
}
void OAIColorfrontLiveMode::setOutDynRangeGamut(const OAIColorfrontDynRangeGamutLiveModeOut &out_dyn_range_gamut) {
	OAIColorfrontDynRangeGamutLiveModeOut v = out_dyn_range_gamut;
	this->m_out_dyn_range_gamut = v;
    this->m_out_dyn_range_gamut_isSet = true;
}

bool OAIColorfrontLiveMode::is_out_dyn_range_gamut_Set() const{
    return m_out_dyn_range_gamut_isSet;
}

bool OAIColorfrontLiveMode::is_out_dyn_range_gamut_Valid() const{
    return m_out_dyn_range_gamut_isValid;
}


bool OAIColorfrontLiveMode::isSdrPreview() const {
    return m_sdr_preview;
}
void OAIColorfrontLiveMode::setSdrPreview(const bool &sdr_preview) {
	bool v = sdr_preview;
	this->m_sdr_preview = v;
    this->m_sdr_preview_isSet = true;
}

bool OAIColorfrontLiveMode::is_sdr_preview_Set() const{
    return m_sdr_preview_isSet;
}

bool OAIColorfrontLiveMode::is_sdr_preview_Valid() const{
    return m_sdr_preview_isValid;
}


double OAIColorfrontLiveMode::getHdrAmount() const {
    return m_hdr_amount;
}
void OAIColorfrontLiveMode::setHdrAmount(const double &hdr_amount) {
	double v = hdr_amount;
	double min = hdrAmountMin();
	double max = hdrAmountMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_hdr_amount = v;
    this->m_hdr_amount_isSet = true;
}

bool OAIColorfrontLiveMode::is_hdr_amount_Set() const{
    return m_hdr_amount_isSet;
}

bool OAIColorfrontLiveMode::is_hdr_amount_Valid() const{
    return m_hdr_amount_isValid;
}

double OAIColorfrontLiveMode::hdrAmountMin() const {
	return -1.0;
}

double OAIColorfrontLiveMode::hdrAmountMax() const {
	return 1.0;
}

double OAIColorfrontLiveMode::getAmbLightComp() const {
    return m_amb_light_comp;
}
void OAIColorfrontLiveMode::setAmbLightComp(const double &amb_light_comp) {
	double v = amb_light_comp;
	double min = ambLightCompMin();
	double max = ambLightCompMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_amb_light_comp = v;
    this->m_amb_light_comp_isSet = true;
}

bool OAIColorfrontLiveMode::is_amb_light_comp_Set() const{
    return m_amb_light_comp_isSet;
}

bool OAIColorfrontLiveMode::is_amb_light_comp_Valid() const{
    return m_amb_light_comp_isValid;
}

double OAIColorfrontLiveMode::ambLightCompMin() const {
	return -1.0;
}

double OAIColorfrontLiveMode::ambLightCompMax() const {
	return 1.0;
}

double OAIColorfrontLiveMode::getHdrLogLook() const {
    return m_hdr_log_look;
}
void OAIColorfrontLiveMode::setHdrLogLook(const double &hdr_log_look) {
	double v = hdr_log_look;
	double min = hdrLogLookMin();
	double max = hdrLogLookMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_hdr_log_look = v;
    this->m_hdr_log_look_isSet = true;
}

bool OAIColorfrontLiveMode::is_hdr_log_look_Set() const{
    return m_hdr_log_look_isSet;
}

bool OAIColorfrontLiveMode::is_hdr_log_look_Valid() const{
    return m_hdr_log_look_isValid;
}

double OAIColorfrontLiveMode::hdrLogLookMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::hdrLogLookMax() const {
	return 1.0;
}

double OAIColorfrontLiveMode::getSdrSoftness() const {
    return m_sdr_softness;
}
void OAIColorfrontLiveMode::setSdrSoftness(const double &sdr_softness) {
	double v = sdr_softness;
	double min = sdrSoftnessMin();
	double max = sdrSoftnessMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_sdr_softness = v;
    this->m_sdr_softness_isSet = true;
}

bool OAIColorfrontLiveMode::is_sdr_softness_Set() const{
    return m_sdr_softness_isSet;
}

bool OAIColorfrontLiveMode::is_sdr_softness_Valid() const{
    return m_sdr_softness_isValid;
}

double OAIColorfrontLiveMode::sdrSoftnessMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::sdrSoftnessMax() const {
	return 1.0;
}

double OAIColorfrontLiveMode::getLiftMaster() const {
    return m_lift_master;
}
void OAIColorfrontLiveMode::setLiftMaster(const double &lift_master) {
	double v = lift_master;
	double min = liftMasterMin();
	double max = liftMasterMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_lift_master = v;
    this->m_lift_master_isSet = true;
}

bool OAIColorfrontLiveMode::is_lift_master_Set() const{
    return m_lift_master_isSet;
}

bool OAIColorfrontLiveMode::is_lift_master_Valid() const{
    return m_lift_master_isValid;
}

double OAIColorfrontLiveMode::liftMasterMin() const {
	return -1.0;
}

double OAIColorfrontLiveMode::liftMasterMax() const {
	return 1.0;
}

double OAIColorfrontLiveMode::getLiftRed() const {
    return m_lift_red;
}
void OAIColorfrontLiveMode::setLiftRed(const double &lift_red) {
	double v = lift_red;
	double min = liftRedMin();
	double max = liftRedMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_lift_red = v;
    this->m_lift_red_isSet = true;
}

bool OAIColorfrontLiveMode::is_lift_red_Set() const{
    return m_lift_red_isSet;
}

bool OAIColorfrontLiveMode::is_lift_red_Valid() const{
    return m_lift_red_isValid;
}

double OAIColorfrontLiveMode::liftRedMin() const {
	return -1.0;
}

double OAIColorfrontLiveMode::liftRedMax() const {
	return 1.0;
}

double OAIColorfrontLiveMode::getLiftGreen() const {
    return m_lift_green;
}
void OAIColorfrontLiveMode::setLiftGreen(const double &lift_green) {
	double v = lift_green;
	double min = liftGreenMin();
	double max = liftGreenMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_lift_green = v;
    this->m_lift_green_isSet = true;
}

bool OAIColorfrontLiveMode::is_lift_green_Set() const{
    return m_lift_green_isSet;
}

bool OAIColorfrontLiveMode::is_lift_green_Valid() const{
    return m_lift_green_isValid;
}

double OAIColorfrontLiveMode::liftGreenMin() const {
	return -1.0;
}

double OAIColorfrontLiveMode::liftGreenMax() const {
	return 1.0;
}

double OAIColorfrontLiveMode::getLiftBlue() const {
    return m_lift_blue;
}
void OAIColorfrontLiveMode::setLiftBlue(const double &lift_blue) {
	double v = lift_blue;
	double min = liftBlueMin();
	double max = liftBlueMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_lift_blue = v;
    this->m_lift_blue_isSet = true;
}

bool OAIColorfrontLiveMode::is_lift_blue_Set() const{
    return m_lift_blue_isSet;
}

bool OAIColorfrontLiveMode::is_lift_blue_Valid() const{
    return m_lift_blue_isValid;
}

double OAIColorfrontLiveMode::liftBlueMin() const {
	return -1.0;
}

double OAIColorfrontLiveMode::liftBlueMax() const {
	return 1.0;
}

double OAIColorfrontLiveMode::getGammaMaster() const {
    return m_gamma_master;
}
void OAIColorfrontLiveMode::setGammaMaster(const double &gamma_master) {
	double v = gamma_master;
	double min = gammaMasterMin();
	double max = gammaMasterMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_gamma_master = v;
    this->m_gamma_master_isSet = true;
}

bool OAIColorfrontLiveMode::is_gamma_master_Set() const{
    return m_gamma_master_isSet;
}

bool OAIColorfrontLiveMode::is_gamma_master_Valid() const{
    return m_gamma_master_isValid;
}

double OAIColorfrontLiveMode::gammaMasterMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::gammaMasterMax() const {
	return 2.0;
}

double OAIColorfrontLiveMode::getGammaRed() const {
    return m_gamma_red;
}
void OAIColorfrontLiveMode::setGammaRed(const double &gamma_red) {
	double v = gamma_red;
	double min = gammaRedMin();
	double max = gammaRedMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_gamma_red = v;
    this->m_gamma_red_isSet = true;
}

bool OAIColorfrontLiveMode::is_gamma_red_Set() const{
    return m_gamma_red_isSet;
}

bool OAIColorfrontLiveMode::is_gamma_red_Valid() const{
    return m_gamma_red_isValid;
}

double OAIColorfrontLiveMode::gammaRedMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::gammaRedMax() const {
	return 2.0;
}

double OAIColorfrontLiveMode::getGammaGreen() const {
    return m_gamma_green;
}
void OAIColorfrontLiveMode::setGammaGreen(const double &gamma_green) {
	double v = gamma_green;
	double min = gammaGreenMin();
	double max = gammaGreenMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_gamma_green = v;
    this->m_gamma_green_isSet = true;
}

bool OAIColorfrontLiveMode::is_gamma_green_Set() const{
    return m_gamma_green_isSet;
}

bool OAIColorfrontLiveMode::is_gamma_green_Valid() const{
    return m_gamma_green_isValid;
}

double OAIColorfrontLiveMode::gammaGreenMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::gammaGreenMax() const {
	return 2.0;
}

double OAIColorfrontLiveMode::getGammaBlue() const {
    return m_gamma_blue;
}
void OAIColorfrontLiveMode::setGammaBlue(const double &gamma_blue) {
	double v = gamma_blue;
	double min = gammaBlueMin();
	double max = gammaBlueMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_gamma_blue = v;
    this->m_gamma_blue_isSet = true;
}

bool OAIColorfrontLiveMode::is_gamma_blue_Set() const{
    return m_gamma_blue_isSet;
}

bool OAIColorfrontLiveMode::is_gamma_blue_Valid() const{
    return m_gamma_blue_isValid;
}

double OAIColorfrontLiveMode::gammaBlueMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::gammaBlueMax() const {
	return 2.0;
}

double OAIColorfrontLiveMode::getGainMaster() const {
    return m_gain_master;
}
void OAIColorfrontLiveMode::setGainMaster(const double &gain_master) {
	double v = gain_master;
	double min = gainMasterMin();
	double max = gainMasterMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_gain_master = v;
    this->m_gain_master_isSet = true;
}

bool OAIColorfrontLiveMode::is_gain_master_Set() const{
    return m_gain_master_isSet;
}

bool OAIColorfrontLiveMode::is_gain_master_Valid() const{
    return m_gain_master_isValid;
}

double OAIColorfrontLiveMode::gainMasterMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::gainMasterMax() const {
	return 5.0;
}

double OAIColorfrontLiveMode::getGainRed() const {
    return m_gain_red;
}
void OAIColorfrontLiveMode::setGainRed(const double &gain_red) {
	double v = gain_red;
	double min = gainRedMin();
	double max = gainRedMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_gain_red = v;
    this->m_gain_red_isSet = true;
}

bool OAIColorfrontLiveMode::is_gain_red_Set() const{
    return m_gain_red_isSet;
}

bool OAIColorfrontLiveMode::is_gain_red_Valid() const{
    return m_gain_red_isValid;
}

double OAIColorfrontLiveMode::gainRedMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::gainRedMax() const {
	return 5.0;
}

double OAIColorfrontLiveMode::getGainGreen() const {
    return m_gain_green;
}
void OAIColorfrontLiveMode::setGainGreen(const double &gain_green) {
	double v = gain_green;
	double min = gainGreenMin();
	double max = gainGreenMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_gain_green = v;
    this->m_gain_green_isSet = true;
}

bool OAIColorfrontLiveMode::is_gain_green_Set() const{
    return m_gain_green_isSet;
}

bool OAIColorfrontLiveMode::is_gain_green_Valid() const{
    return m_gain_green_isValid;
}

double OAIColorfrontLiveMode::gainGreenMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::gainGreenMax() const {
	return 5.0;
}

double OAIColorfrontLiveMode::getGainBlue() const {
    return m_gain_blue;
}
void OAIColorfrontLiveMode::setGainBlue(const double &gain_blue) {
	double v = gain_blue;
	double min = gainBlueMin();
	double max = gainBlueMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_gain_blue = v;
    this->m_gain_blue_isSet = true;
}

bool OAIColorfrontLiveMode::is_gain_blue_Set() const{
    return m_gain_blue_isSet;
}

bool OAIColorfrontLiveMode::is_gain_blue_Valid() const{
    return m_gain_blue_isValid;
}

double OAIColorfrontLiveMode::gainBlueMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::gainBlueMax() const {
	return 5.0;
}

double OAIColorfrontLiveMode::getSaturation() const {
    return m_saturation;
}
void OAIColorfrontLiveMode::setSaturation(const double &saturation) {
	double v = saturation;
	double min = saturationMin();
	double max = saturationMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_saturation = v;
    this->m_saturation_isSet = true;
}

bool OAIColorfrontLiveMode::is_saturation_Set() const{
    return m_saturation_isSet;
}

bool OAIColorfrontLiveMode::is_saturation_Valid() const{
    return m_saturation_isValid;
}

double OAIColorfrontLiveMode::saturationMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::saturationMax() const {
	return 2.0;
}

double OAIColorfrontLiveMode::getExposure() const {
    return m_exposure;
}
void OAIColorfrontLiveMode::setExposure(const double &exposure) {
	double v = exposure;
	double min = exposureMin();
	double max = exposureMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_exposure = v;
    this->m_exposure_isSet = true;
}

bool OAIColorfrontLiveMode::is_exposure_Set() const{
    return m_exposure_isSet;
}

bool OAIColorfrontLiveMode::is_exposure_Valid() const{
    return m_exposure_isValid;
}

double OAIColorfrontLiveMode::exposureMin() const {
	return -4.0;
}

double OAIColorfrontLiveMode::exposureMax() const {
	return 4.0;
}

double OAIColorfrontLiveMode::getColorTemp() const {
    return m_color_temp;
}
void OAIColorfrontLiveMode::setColorTemp(const double &color_temp) {
	double v = color_temp;
	double min = colorTempMin();
	double max = colorTempMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_color_temp = v;
    this->m_color_temp_isSet = true;
}

bool OAIColorfrontLiveMode::is_color_temp_Set() const{
    return m_color_temp_isSet;
}

bool OAIColorfrontLiveMode::is_color_temp_Valid() const{
    return m_color_temp_isValid;
}

double OAIColorfrontLiveMode::colorTempMin() const {
	return -10.0;
}

double OAIColorfrontLiveMode::colorTempMax() const {
	return 10.0;
}

double OAIColorfrontLiveMode::getTint() const {
    return m_tint;
}
void OAIColorfrontLiveMode::setTint(const double &tint) {
	double v = tint;
	double min = tintMin();
	double max = tintMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_tint = v;
    this->m_tint_isSet = true;
}

bool OAIColorfrontLiveMode::is_tint_Set() const{
    return m_tint_isSet;
}

bool OAIColorfrontLiveMode::is_tint_Valid() const{
    return m_tint_isValid;
}

double OAIColorfrontLiveMode::tintMin() const {
	return -16.0;
}

double OAIColorfrontLiveMode::tintMax() const {
	return 16.0;
}

double OAIColorfrontLiveMode::getPqOutputNitLevel() const {
    return m_pq_output_nit_level;
}
void OAIColorfrontLiveMode::setPqOutputNitLevel(const double &pq_output_nit_level) {
	double v = pq_output_nit_level;
	double min = pqOutputNitLevelMin();
	double max = pqOutputNitLevelMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_pq_output_nit_level = v;
    this->m_pq_output_nit_level_isSet = true;
}

bool OAIColorfrontLiveMode::is_pq_output_nit_level_Set() const{
    return m_pq_output_nit_level_isSet;
}

bool OAIColorfrontLiveMode::is_pq_output_nit_level_Valid() const{
    return m_pq_output_nit_level_isValid;
}

double OAIColorfrontLiveMode::pqOutputNitLevelMin() const {
	return 48;
}

double OAIColorfrontLiveMode::pqOutputNitLevelMax() const {
	return 4000;
}

bool OAIColorfrontLiveMode::isP3ColorspaceClamp() const {
    return m_p3_colorspace_clamp;
}
void OAIColorfrontLiveMode::setP3ColorspaceClamp(const bool &p3_colorspace_clamp) {
	bool v = p3_colorspace_clamp;
	this->m_p3_colorspace_clamp = v;
    this->m_p3_colorspace_clamp_isSet = true;
}

bool OAIColorfrontLiveMode::is_p3_colorspace_clamp_Set() const{
    return m_p3_colorspace_clamp_isSet;
}

bool OAIColorfrontLiveMode::is_p3_colorspace_clamp_Valid() const{
    return m_p3_colorspace_clamp_isValid;
}


double OAIColorfrontLiveMode::getBt2408Mode() const {
    return m_bt2408_mode;
}
void OAIColorfrontLiveMode::setBt2408Mode(const double &bt2408_mode) {
	double v = bt2408_mode;
	double min = bt2408ModeMin();
	double max = bt2408ModeMax();
	if (v < min) { v = min; }
	if (v > max) { v = max; }
	this->m_bt2408_mode = v;
    this->m_bt2408_mode_isSet = true;
}

bool OAIColorfrontLiveMode::is_bt2408_mode_Set() const{
    return m_bt2408_mode_isSet;
}

bool OAIColorfrontLiveMode::is_bt2408_mode_Valid() const{
    return m_bt2408_mode_isValid;
}

double OAIColorfrontLiveMode::bt2408ModeMin() const {
	return 0.0;
}

double OAIColorfrontLiveMode::bt2408ModeMax() const {
	return 1.0;
}

bool OAIColorfrontLiveMode::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_engine.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_in_dyn_range_gamut.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_out_dyn_range_gamut.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_sdr_preview_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_hdr_amount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_amb_light_comp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_hdr_log_look_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sdr_softness_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lift_master_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lift_red_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lift_green_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lift_blue_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gamma_master_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gamma_red_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gamma_green_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gamma_blue_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gain_master_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gain_red_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gain_green_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gain_blue_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_saturation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_exposure_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_color_temp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tint_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pq_output_nit_level_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_p3_colorspace_clamp_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bt2408_mode_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIColorfrontLiveMode::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

bool OAIColorfrontLiveMode::applyMinMaxConstraints() {
	bool anyMinMaxValueChanged = false;
	if (is_hdr_amount_Set())
	{
		bool hdrAmountChanged = false;
		double v = getHdrAmount();
		double min = hdrAmountMin();
		double max = hdrAmountMax();
		if (v < min) { v = min; hdrAmountChanged = true; }
		if (v > max) { v = max; hdrAmountChanged = true; }
		if (hdrAmountChanged) { setHdrAmount(v); anyMinMaxValueChanged = true; }
	}
	if (is_amb_light_comp_Set())
	{
		bool ambLightCompChanged = false;
		double v = getAmbLightComp();
		double min = ambLightCompMin();
		double max = ambLightCompMax();
		if (v < min) { v = min; ambLightCompChanged = true; }
		if (v > max) { v = max; ambLightCompChanged = true; }
		if (ambLightCompChanged) { setAmbLightComp(v); anyMinMaxValueChanged = true; }
	}
	if (is_hdr_log_look_Set())
	{
		bool hdrLogLookChanged = false;
		double v = getHdrLogLook();
		double min = hdrLogLookMin();
		double max = hdrLogLookMax();
		if (v < min) { v = min; hdrLogLookChanged = true; }
		if (v > max) { v = max; hdrLogLookChanged = true; }
		if (hdrLogLookChanged) { setHdrLogLook(v); anyMinMaxValueChanged = true; }
	}
	if (is_sdr_softness_Set())
	{
		bool sdrSoftnessChanged = false;
		double v = getSdrSoftness();
		double min = sdrSoftnessMin();
		double max = sdrSoftnessMax();
		if (v < min) { v = min; sdrSoftnessChanged = true; }
		if (v > max) { v = max; sdrSoftnessChanged = true; }
		if (sdrSoftnessChanged) { setSdrSoftness(v); anyMinMaxValueChanged = true; }
	}
	if (is_lift_master_Set())
	{
		bool liftMasterChanged = false;
		double v = getLiftMaster();
		double min = liftMasterMin();
		double max = liftMasterMax();
		if (v < min) { v = min; liftMasterChanged = true; }
		if (v > max) { v = max; liftMasterChanged = true; }
		if (liftMasterChanged) { setLiftMaster(v); anyMinMaxValueChanged = true; }
	}
	if (is_lift_red_Set())
	{
		bool liftRedChanged = false;
		double v = getLiftRed();
		double min = liftRedMin();
		double max = liftRedMax();
		if (v < min) { v = min; liftRedChanged = true; }
		if (v > max) { v = max; liftRedChanged = true; }
		if (liftRedChanged) { setLiftRed(v); anyMinMaxValueChanged = true; }
	}
	if (is_lift_green_Set())
	{
		bool liftGreenChanged = false;
		double v = getLiftGreen();
		double min = liftGreenMin();
		double max = liftGreenMax();
		if (v < min) { v = min; liftGreenChanged = true; }
		if (v > max) { v = max; liftGreenChanged = true; }
		if (liftGreenChanged) { setLiftGreen(v); anyMinMaxValueChanged = true; }
	}
	if (is_lift_blue_Set())
	{
		bool liftBlueChanged = false;
		double v = getLiftBlue();
		double min = liftBlueMin();
		double max = liftBlueMax();
		if (v < min) { v = min; liftBlueChanged = true; }
		if (v > max) { v = max; liftBlueChanged = true; }
		if (liftBlueChanged) { setLiftBlue(v); anyMinMaxValueChanged = true; }
	}
	if (is_gamma_master_Set())
	{
		bool gammaMasterChanged = false;
		double v = getGammaMaster();
		double min = gammaMasterMin();
		double max = gammaMasterMax();
		if (v < min) { v = min; gammaMasterChanged = true; }
		if (v > max) { v = max; gammaMasterChanged = true; }
		if (gammaMasterChanged) { setGammaMaster(v); anyMinMaxValueChanged = true; }
	}
	if (is_gamma_red_Set())
	{
		bool gammaRedChanged = false;
		double v = getGammaRed();
		double min = gammaRedMin();
		double max = gammaRedMax();
		if (v < min) { v = min; gammaRedChanged = true; }
		if (v > max) { v = max; gammaRedChanged = true; }
		if (gammaRedChanged) { setGammaRed(v); anyMinMaxValueChanged = true; }
	}
	if (is_gamma_green_Set())
	{
		bool gammaGreenChanged = false;
		double v = getGammaGreen();
		double min = gammaGreenMin();
		double max = gammaGreenMax();
		if (v < min) { v = min; gammaGreenChanged = true; }
		if (v > max) { v = max; gammaGreenChanged = true; }
		if (gammaGreenChanged) { setGammaGreen(v); anyMinMaxValueChanged = true; }
	}
	if (is_gamma_blue_Set())
	{
		bool gammaBlueChanged = false;
		double v = getGammaBlue();
		double min = gammaBlueMin();
		double max = gammaBlueMax();
		if (v < min) { v = min; gammaBlueChanged = true; }
		if (v > max) { v = max; gammaBlueChanged = true; }
		if (gammaBlueChanged) { setGammaBlue(v); anyMinMaxValueChanged = true; }
	}
	if (is_gain_master_Set())
	{
		bool gainMasterChanged = false;
		double v = getGainMaster();
		double min = gainMasterMin();
		double max = gainMasterMax();
		if (v < min) { v = min; gainMasterChanged = true; }
		if (v > max) { v = max; gainMasterChanged = true; }
		if (gainMasterChanged) { setGainMaster(v); anyMinMaxValueChanged = true; }
	}
	if (is_gain_red_Set())
	{
		bool gainRedChanged = false;
		double v = getGainRed();
		double min = gainRedMin();
		double max = gainRedMax();
		if (v < min) { v = min; gainRedChanged = true; }
		if (v > max) { v = max; gainRedChanged = true; }
		if (gainRedChanged) { setGainRed(v); anyMinMaxValueChanged = true; }
	}
	if (is_gain_green_Set())
	{
		bool gainGreenChanged = false;
		double v = getGainGreen();
		double min = gainGreenMin();
		double max = gainGreenMax();
		if (v < min) { v = min; gainGreenChanged = true; }
		if (v > max) { v = max; gainGreenChanged = true; }
		if (gainGreenChanged) { setGainGreen(v); anyMinMaxValueChanged = true; }
	}
	if (is_gain_blue_Set())
	{
		bool gainBlueChanged = false;
		double v = getGainBlue();
		double min = gainBlueMin();
		double max = gainBlueMax();
		if (v < min) { v = min; gainBlueChanged = true; }
		if (v > max) { v = max; gainBlueChanged = true; }
		if (gainBlueChanged) { setGainBlue(v); anyMinMaxValueChanged = true; }
	}
	if (is_saturation_Set())
	{
		bool saturationChanged = false;
		double v = getSaturation();
		double min = saturationMin();
		double max = saturationMax();
		if (v < min) { v = min; saturationChanged = true; }
		if (v > max) { v = max; saturationChanged = true; }
		if (saturationChanged) { setSaturation(v); anyMinMaxValueChanged = true; }
	}
	if (is_exposure_Set())
	{
		bool exposureChanged = false;
		double v = getExposure();
		double min = exposureMin();
		double max = exposureMax();
		if (v < min) { v = min; exposureChanged = true; }
		if (v > max) { v = max; exposureChanged = true; }
		if (exposureChanged) { setExposure(v); anyMinMaxValueChanged = true; }
	}
	if (is_color_temp_Set())
	{
		bool colorTempChanged = false;
		double v = getColorTemp();
		double min = colorTempMin();
		double max = colorTempMax();
		if (v < min) { v = min; colorTempChanged = true; }
		if (v > max) { v = max; colorTempChanged = true; }
		if (colorTempChanged) { setColorTemp(v); anyMinMaxValueChanged = true; }
	}
	if (is_tint_Set())
	{
		bool tintChanged = false;
		double v = getTint();
		double min = tintMin();
		double max = tintMax();
		if (v < min) { v = min; tintChanged = true; }
		if (v > max) { v = max; tintChanged = true; }
		if (tintChanged) { setTint(v); anyMinMaxValueChanged = true; }
	}
	if (is_pq_output_nit_level_Set())
	{
		bool pqOutputNitLevelChanged = false;
		double v = getPqOutputNitLevel();
		double min = pqOutputNitLevelMin();
		double max = pqOutputNitLevelMax();
		if (v < min) { v = min; pqOutputNitLevelChanged = true; }
		if (v > max) { v = max; pqOutputNitLevelChanged = true; }
		if (pqOutputNitLevelChanged) { setPqOutputNitLevel(v); anyMinMaxValueChanged = true; }
	}
	if (is_bt2408_mode_Set())
	{
		bool bt2408ModeChanged = false;
		double v = getBt2408Mode();
		double min = bt2408ModeMin();
		double max = bt2408ModeMax();
		if (v < min) { v = min; bt2408ModeChanged = true; }
		if (v > max) { v = max; bt2408ModeChanged = true; }
		if (bt2408ModeChanged) { setBt2408Mode(v); anyMinMaxValueChanged = true; }
	}
	return anyMinMaxValueChanged;
}

} // namespace OpenAPI
