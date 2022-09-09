/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*
This example uses a websocket to send an dynamic lut to AJA ColorBox using the cpprestsdk and its websocket implementation when ColorBox is in LUT Mode
* 
* Example Usage: .\dynamic_lut_load.exe --host 192.168.1.140 --target 1DL2 --lift 0 --gamma 2.4 --gain 1
* 1DL stands for 1D LUT and 3DL stands for 3D LUT. 
* 
* 
*/

#include <chrono>
#include <string>
#include <thread>
#include <math.h>
#include <algorithm>
#include "ApiClient.h"
#include "ApiConfiguration.h"
#include "api/DefaultApi.h"

#include <cpprest/ws_client.h>

using namespace utility::conversions;
using namespace web;
using namespace web::websockets::client;

using namespace org::openapitools::client::api;

/////////////////////////////
template<typename T>
struct RGBValues {
    T rValue;
    T gValue;
    T bValue;
};

// Used for 1DLUTs
typedef RGBValues<int16_t> RGB12BitIntValues;
typedef std::vector<RGB12BitIntValues> RGB12BitIntLutValues;

// Used for 3DLUTs
typedef RGBValues<uint16_t> RGB16BitIntCoefs;
typedef std::vector<RGB16BitIntCoefs> RGB16BitIntLutCoefs;

static RGB12BitIntLutValues lutValues1D;             // 1DLUT
static RGB16BitIntCoefs lutValues3D[33][33][33]; // 3DLUT in [B][G][R]

static std::vector<std::string> legalTargets{ "1DL1", "1DL2", "3DL1", "1DL3", "1DL4", "NONE" };

void usage()
{
    std::cout << std::endl
              << "usage: dynamic_lut_load [-h] [--host HOST] [--port PORT] [--username USERNAME] [--password PASSWORD]" << std::endl
              << "                   [--lift liftValue ] [--gamma gammaValue] [--gain gainValue] [--target targetNode]" << std::endl
              << "" << std::endl
              << "options:" << std::endl
              << "  -h, --help           show this help message and exit" << std::endl
              << "  --host HOST          the hostname or ip of device" << std::endl
              << "  --port PORT          the port number to use" << std::endl
              << "  --username USERNAME  username to use if authentication required" << std::endl
              << "  --password PASSWORD  password to use if authentication required" << std::endl
			  << "  --lift liftValue     lift of LGG(-1.0 - 1.0)" << std::endl
              << "  --gamma gammaValue   gamma of LGG(0.5 - 2.5)" << std::endl
              << "  --gain gainValue     gain of LGG(0.0 - 4.0)" << std::endl
              << "  --target targetNode  target Node 1DL1,1DL2,3DL1,1DL3,1DL4,NONE" << std::endl
              << std::endl;
}



void parse_args(int argc, char *argv[],
                std::string &host, std::string &port, std::string &user, std::string &pass,
                float &lift, float &gamma, float &gain, std::string &target)
{
    //defaults
    host = "127.0.0.1";
    port = "80";
    user = "";
    pass = "";
    lift = 0.0;
    gamma = 1.0;
    gain = 1.0;
    target = "3DL1";

    int i = 1;
    while (i < argc) {
        std::string cmd = argv[i++];
        if (cmd == "--host") {
            host = argv[i++];
        }
        else if (cmd == "--port") {
            port = argv[i++];
        }
        else if (cmd == "--username") {
            user = argv[i++];
        }
        else if (cmd == "--password") {
            pass = argv[i++];
        }
        else if (cmd == "--lift") {
            lift = std::stof(argv[i++]);
            if (lift < -1.0) lift = -1.0;
            if (lift > 1.0) lift = 1.0;
        }
        else if (cmd == "--gamma") {
            gamma = std::stof(argv[i++]);
            if (gamma < .5) gamma = .5;
            if (gamma > 2.5) gamma = 2.5;
        }
        else if (cmd == "--gain") {
            gain = std::stof(argv[i++]);
            if (gain < 0) gain = 0;
            if (gain > 4.0) gain = 4.0;
        }
        else if (cmd == "--target") {
            target = argv[i++];
            std::transform(target.begin(), target.end(), target.begin(), ::toupper);
            if (std::find(legalTargets.begin(), legalTargets.end(), target) == legalTargets.end())
            {
                target = "3DL1";
                std::cout << "Illegal Target String, setting to 3DL1 ";
            }
        }
        else {
            usage();
            exit(1);
        }
    }

}

utility::string_t makeUrl(const std::string& host, const std::string& port)
{
    utility::string_t url = to_string_t("http://") + to_string_t(host) +
            to_string_t(":") + to_string_t(port.c_str()) +
            to_string_t("/v2");
    return url;
}

utility::string_t makeWebsocketUrl(const std::string& host)
{
    // ColorBox uses port 5000 for WebSockets
    utility::string_t url = to_string_t("ws://") + to_string_t(host) + to_string_t(":5000");
    return url;
}

bool setDynamicChoice(std::shared_ptr<DefaultApi> api, std::string target)
{
    bool status = true;

    std::shared_ptr<PipelineStages> stages = std::make_shared<PipelineStages>();
    std::shared_ptr<Stage> lutStageEnable = std::make_shared<Stage>();
    std::shared_ptr<Stage> lutStageDisable = std::make_shared<Stage>();
    lutStageEnable->setDynamic(true);
    lutStageEnable->setEnabled(true);
    lutStageDisable->setEnabled(false);
    lutStageDisable->setDynamic(false);

    if (target == "1DL1")
    {
        stages->setLut1d1(lutStageEnable);
        stages->setLut1d2(lutStageDisable);
        stages->setLut3d1(lutStageDisable);
        stages->setLut1d3(lutStageDisable);
        stages->setLut1d4(lutStageDisable);

    }
    else if (target == "1DL2")
    {
        stages->setLut1d1(lutStageDisable);
        stages->setLut1d2(lutStageEnable);
        stages->setLut3d1(lutStageDisable);
        stages->setLut1d3(lutStageDisable);
        stages->setLut1d4(lutStageDisable);

    }
    else if (target == "1DL3")
    {
        stages->setLut1d1(lutStageDisable);
        stages->setLut1d2(lutStageDisable);
        stages->setLut3d1(lutStageDisable);
        stages->setLut1d3(lutStageEnable);
        stages->setLut1d4(lutStageDisable);

    }
    else if (target == "1DL4")
    {
        stages->setLut1d1(lutStageDisable);
        stages->setLut1d2(lutStageDisable);
        stages->setLut3d1(lutStageDisable);
        stages->setLut1d3(lutStageDisable);
        stages->setLut1d4(lutStageEnable);

    }
    else if (target == "3DL1")
    {
        stages->setLut1d1(lutStageDisable);
        stages->setLut1d2(lutStageDisable);
        stages->setLut3d1(lutStageEnable);
        stages->setLut1d3(lutStageDisable);
        stages->setLut1d4(lutStageDisable);
    }
    else if (target == "NONE" )
    {

        stages->setLut1d1(lutStageDisable);
        stages->setLut1d2(lutStageDisable);
        stages->setLut3d1(lutStageDisable);
        stages->setLut1d3(lutStageDisable);
        stages->setLut1d4(lutStageDisable);

    }
    else
    {
        status = false;
        stages->setLut1d1(lutStageDisable);
        stages->setLut1d2(lutStageDisable);
        stages->setLut3d1(lutStageDisable);
        stages->setLut1d3(lutStageDisable);
        stages->setLut1d4(lutStageDisable);
    }

    // Handle Input and Output CSC Settings and output Transfer Characteristic.
    // inColorimetry and InRange choose the correct input CSC.
    // OutColorimetry and OutRange choose the correct ouput CSC.
    // If it is an RGB workflow only the Range parameter is pertinent.
    // Range basically controls whether the pipeline uses 0-4095(SMPTEFULL) as 0-1 or 256-3760(SMPTENARROW) as 0-1.
    std::shared_ptr<Colorimetry> inColorimetry = std::make_shared<Colorimetry>();
    inColorimetry->setValue(Colorimetry::eColorimetry::Colorimetry_BT_709);
    stages->setInColorimetry(inColorimetry);

    std::shared_ptr<PipelineRange> inRange = std::make_shared<PipelineRange>();
    inRange->setValue(PipelineRange::ePipelineRange::PipelineRange_SMPTENARROW);
    stages->setInRange(inRange);

    std::shared_ptr<Colorimetry> outColorimetry = std::make_shared<Colorimetry>();
    outColorimetry->setValue(Colorimetry::eColorimetry::Colorimetry_BT_709);
	stages->setOutColorimetry(outColorimetry);

    std::shared_ptr<PipelineRange> outRange = std::make_shared<PipelineRange>();
    outRange->setValue(PipelineRange::ePipelineRange::PipelineRange_SMPTENARROW);
	stages->setOutRange(outRange);

    std::shared_ptr<Transfer> outputTransferCharacteristics = std::make_shared<Transfer>();
    outputTransferCharacteristics->setValue(Transfer::eTransfer::Transfer_SDR);
    stages->setTransferCharacteristic(outputTransferCharacteristics);

    // Now send stages to ColorBox
    auto setTask = api->setPipelineStages(stages).then([]() {
        //std::cout << "setPipelineStages" << std::endl;
    });
    try {
        setTask.wait();
    }
    catch (const ApiException& ex) {
        std::cout << ex.what() << std::endl << std::flush;
        std::string err(ex.what());
        status = false;
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl << std::flush;
        std::string err(ex.what());
        status = false;
    }

    // Note, the following delay just makes sure the appropriate LUT is in dynanice mode before transfering the LUT via the websocket
    // Once the LUT is in Dynamic mode data can be transferred continually. The LUT of course will be updated at most once per framerate.
    std::cout << "setDynamicChoiceInput to the correct state, waiting 500 milliseconds..." << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "ok." << std::endl;

    return status;
}

void calculateLGGLUT(float lift, float gamma, float gain)
{
    lutValues1D.resize(4096);

    bool rChecked = true;
    bool gChecked = true;
    bool bChecked = true;

    // Build 1D LUts
    for (uint16_t i = 0; i < 4096; i++)
    {
        double currentInput = static_cast<double>(i) / 4095.0;

        // NOTE: only intended to show how to use our Dynamic LUT feature.
        // Best seen on ColorBox if the input to ColorBox is a Full Luma Ramp
        int16_t currentOutput = static_cast<int16_t>(4095.0 * pow(currentInput * (gain - lift) + lift, (1.0 / gamma)));
        if (currentOutput > 4095) currentOutput = 4095;
        if (currentOutput < 0) currentOutput = 0;

        RGB12BitIntValues  lutValue;
        lutValue.rValue = (rChecked) ? currentOutput : i;
        lutValue.gValue = (gChecked) ? currentOutput : i;
        lutValue.bValue = (bChecked) ? currentOutput : i;

        lutValues1D[i] = lutValue;
    }

    // Build 3D Lut Version as well.
    for (int blue = 0; blue < 33; blue++)
        for (int green = 0; green < 33; green++)
            for (int red = 0; red < 33; red++)
            {
                int index = red << 7;
                if (index > 4095) index = 4095;
                lutValues3D[blue][green][red].rValue = lutValues1D[index].rValue << 4;
                index = green << 7;
                if (index > 4095) index = 4095;
                lutValues3D[blue][green][red].gValue = lutValues1D[index].gValue << 4;
                index = blue << 7;
                if (index > 4095) index = 4095;
                lutValues3D[blue][green][red].bValue = lutValues1D[index].bValue << 4;
            }
}

int main(int argc, char *argv[])
{
    std::string host;
    std::string port;
    std::string user;
    std::string pass;
    float lift = 0.0;
    float gamma = 1.0;
    float gain = 1.0;
    std::string target = "3DL1";
    parse_args(argc, argv, host, port, user, pass, lift, gamma, gain, target);

    std::shared_ptr<ApiConfiguration> apiconfiguration = std::make_shared<ApiConfiguration>();
    utility::string_t url = makeUrl(host, port);
    apiconfiguration->setBaseUrl(url);

    std::cout << "Controlling [" << to_utf8string(url) << "]" << std::endl << std::flush;

    if (user != "") {
        // handle basic auth
        auto cfg = apiconfiguration->getHttpConfig();
        web::http::client::credentials credentials(to_string_t(user), to_string_t(pass));
        cfg.set_credentials(credentials);
        apiconfiguration->setHttpConfig(cfg);
    }

    // OpenAPI client
    std::shared_ptr<ApiClient> apiclient = std::make_shared<ApiClient>(apiconfiguration);
    std::shared_ptr<DefaultApi> api = std::make_shared<DefaultApi>(apiclient);

    if (setDynamicChoice(api, target) == true ) {

        // check to see if none is chosen and quit if so
        if (target.find("NONE") == 0)
        {
            std::cout << "NONE Chosen";
            return 0;
        }

        std::cout << "Target " << target << std::endl;
        std::cout << "Lift   " << lift << std::endl;
        std::cout << "Gamma  " << gamma << std::endl;
        std::cout << "Gain   " << gain << std::endl;

        calculateLGGLUT(lift, gamma, gain);

        // WS client to send calculated LUT
        utility::string_t wsurl = makeWebsocketUrl(host);
        websocket_client wsclient;
        {
            auto wsTask = wsclient.connect(wsurl).then([&]() {
                std::cout << "ws: connected to server [" << to_utf8string(wsurl) << "]" << std::endl << std::endl;
            });
            try {
                wsTask.wait();
            }
            catch(const ApiException& ex) {
                std::cout << ex.what() << std::endl << std::flush;
                std::string err(ex.what());
            }
            catch(const std::exception &ex) {
                std::cout << ex.what() << std::endl << std::flush;
                std::string err(ex.what());
            }
        }

        // load up the buffer with the calculated LUT and prepend the LUT target
        std::vector<unsigned char> lutdata;
        if (target.find("3DL") != std::string::npos )
        {
            // 3DLUT
            lutdata.resize(33*33*33*sizeof(RGB16BitIntCoefs) + 4);
            memcpy(lutdata.data() + 4, &lutValues3D[0][0][0], 33*33*33*sizeof(RGB16BitIntCoefs));

        }
        else if (target.find("1DL") != std::string::npos)
        {
            // 1DLUT
            lutdata.resize(lutValues1D.size() * sizeof(RGB12BitIntValues) + 4);
            memcpy(lutdata.data() + 4, lutValues1D.data(), lutValues1D.size() * sizeof(RGB12BitIntValues));

        }

        // Prepend buffer with target.
        lutdata[0] = target.at(0);
        lutdata[1] = target.at(1);
        lutdata[2] = target.at(2);
        lutdata[3] = target.at(3);

        std::cout << "websocket transfer size " << lutdata.size() << std::endl;

        websocket_outgoing_message msg;
        auto msgBuf = concurrency::streams::container_buffer<std::vector<unsigned char>>(lutdata);
        msg.set_binary_message(msgBuf);

        static std::chrono::time_point<std::chrono::high_resolution_clock> sendT = std::chrono::high_resolution_clock::now();
        auto sendTask = wsclient.send(msg).then([]() {
            std::cout << "ws: message sent" << std::endl;
        });
		sendTask.wait();

        wsclient.close().then([&]() { std::cout << std::endl << "ws: disconnected from server [" << to_utf8string(wsurl) << "]" << std::endl; });
    }
    else {
        std::cout << "Could not connect to " << to_utf8string(url) << std::endl;
    }

    return 0;
}
