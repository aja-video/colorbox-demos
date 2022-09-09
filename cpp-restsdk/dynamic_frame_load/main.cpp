/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*
* This example uses a websocket to send an frame of video to AJA ColorBox using the cpprestsdk and its websocket implementation.
* The image is always sent via the websocket as a 16 bit RGB image(48 bits per pixel).
* Example Usage: .\dynamic_frame_load.exe --host 192.168.1.140 --bits 12 --pixels 1920 --red 3760--green 256 --blue 256
*
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

// Used fr RGB Frame Transfers
typedef RGBValues<uint16_t> RGB16BitUIntValues ;
typedef std::vector<RGB16BitUIntValues> RGB16BitUIntBufferValues;

static RGB16BitUIntBufferValues frameBuffer;             // Image Frame

void usage()
{
    std::cout << std::endl
              << "usage: dynamic_frame_load [-h] [--host HOST] [--port PORT] [--username USERNAME] [--password PASSWORD]" << std::endl
              << "                   [--red redValue ] [--green greenValue] [--blue blueValue] [--bits bitsPerComponent] [--pixels pixelsPerLine]" << std::endl
              << "" << std::endl
              << "options:" << std::endl
              << "  -h, --help           show this help message and exit" << std::endl
              << "  --host HOST          the hostname or ip of device" << std::endl
              << "  --port PORT          the port number to use" << std::endl
              << "  --username USERNAME  username to use if authentication required" << std::endl
              << "  --password PASSWORD  password to use if authentication required" << std::endl
              << "  --pixels numPixels   number of pixels in a frame line(1280,1920,2048,3840,4096, defaults to 1920)" << std::endl
              << "  --bits bitsPerComp   bits per component(defaults to 12)" << std::endl
              << "  --red redValue       red Value (defaults to 0, note bitsPerComponenet)" << std::endl
              << "  --green greenValue   green Value (defaults to 0, note bitsPerComponenet)" << std::endl
              << "  --blue BlueValue     blue Value (defaults to 0, note bitsPerComponenet)" << std::endl
              << std::endl;
}



void parse_args(int argc, char *argv[],
                std::string &host, std::string &port, std::string &user, std::string &pass,
				int &red, int &green, int &blue, int &bits, int &pixels)
{
    //defaults
    host = "127.0.0.1";
    port = "80";
    user = "";
    pass = "";
    red = 0;
    blue = 0;
    green = 0;
    bits = 12;
    pixels = 1920;

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
        else if (cmd == "--bits") {
            bits = std::stoi(argv[i++]);
            switch (bits)
            {
            case 10:
            case 12:
            case 16:
                break;
            default:
                bits = 12;
            }
        }
        else if (cmd == "--pixels") {
            pixels = std::stoi(argv[i++]);
            switch (pixels)
            {
            case 1280:
            case 1920:
            case 2048:
            case 3840:
            case 4096:
                break;
            default:
                pixels = 1920;
            }
        }
        else if (cmd == "--red") {
            red = std::stoi(argv[i++]);

        }
        else if (cmd == "--green") {
            green = std::stoi(argv[i++]);

        }
        else if (cmd == "--blue") {
            blue = std::stoi(argv[i++]);

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


void buildFrame(int red, int green, int blue, int bits, int pixels, int lines)
{
    frameBuffer.resize(pixels*lines*6);
    RGB16BitUIntValues pixelValue;

    // bits can be 10,12,16, always convert to 16
    pixelValue.rValue = static_cast<uint16_t>(red<<(16-bits));
    pixelValue.gValue = static_cast<uint16_t>(green<<(16-bits));
    pixelValue.bValue = static_cast<uint16_t>(blue<<(16-bits));

    for ( int32_t pixel = 0; pixel < static_cast<int32_t>(pixels*lines); pixel++ )
        frameBuffer[pixel] =  pixelValue ;

}

int getLinesFromPixels(int pixels)
{
    int lines = 1080;
    switch (pixels)
    {
    case 1280:
        lines = 720;
        break;
    case 1920:
        lines = 1080;
        break;
    case 2048:
        lines = 1080;
        break;
    case 3840:
        lines = 2160;
        break;
    case 4096:
        lines = 2160;
        break;
    }
    return lines;
}

VideoFormat::eVideoFormat getCompatibleFormat(int pixels)
{
    VideoFormat::eVideoFormat videoFormat = VideoFormat::eVideoFormat::VideoFormat_AUTO;
    switch (pixels)
    {
    case 1280:
        videoFormat = VideoFormat::eVideoFormat::VideoFormat__720P59_94;
        break;
    case 1920:
        videoFormat = VideoFormat::eVideoFormat::VideoFormat__1080P23_98;
        break;
    case 2048:
        videoFormat = VideoFormat::eVideoFormat::VideoFormat__2KP23_98;
        break;
    case 3840:
        videoFormat = VideoFormat::eVideoFormat::VideoFormat_UHDP23_98;
        break;
    case 4096:
        videoFormat = VideoFormat::eVideoFormat::VideoFormat__4KP23_98;
        break;
    }
    return videoFormat;
}

int main(int argc, char *argv[])
{
    std::string host;
    std::string port;
    std::string user;
    std::string pass;
    int red = 0;
    int green = 0;
    int blue = 0;
    int bits = 12;
    int pixels = 1920;
    parse_args(argc, argv, host, port, user, pass, red, green, blue, bits, pixels);

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

    // For this to work need to use the OpenAPI client to enable the FrameStore and put it in Dynamic Mode. Also set the Pipeline Video to a compatible Video Format.

    std::shared_ptr<VideoFormat> videoFormat = std::make_shared<VideoFormat>();
    VideoFormat::eVideoFormat desiredVideoFormat = getCompatibleFormat(pixels);
    bool frameStoreChanged = false;
    videoFormat->setValue(desiredVideoFormat);
    auto getTask = api->getFrameStore().then([&](std::shared_ptr<FrameStore> p) {
            if (p->isEnabled() == false || p->isDynamic() == false || p->getFormat()->getValue() != desiredVideoFormat) {
            p->setEnabled(true);
            p->setDynamic(true);
            p->setFormat(videoFormat);

            auto setTask = api->setFrameStore(p).then([]() {
        //std::cout << "frame store enabled" << std::endl;
    });
            try {
            setTask.wait();
}
            catch(const ApiException& ex) {
            std::cout << ex.what() << std::endl << std::flush;
            std::string err(ex.what());
}
            catch(const std::exception &ex) {
            std::cout << ex.what() << std::endl << std::flush;
            std::string err(ex.what());
}
            frameStoreChanged = true;
}
});
    try {
        getTask.wait();
    }
    catch(const ApiException& ex) {
        std::cout << ex.what() << std::endl << std::flush;
        std::string err(ex.what());
    }
    catch(const std::exception &ex) {
        std::cout << ex.what() << std::endl << std::flush;
        std::string err(ex.what());
    }

    if (frameStoreChanged) {
        std::cout << "frame store needs to be put in the correct state, waiting 2 seconds..." << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        std::cout << "ok." << std::endl;
    }
    std::cout << "Red " << red << std::endl;
    std::cout << "Green   " << green << std::endl;
    std::cout << "Blue  " << blue << std::endl;
    std::cout << "Bits   " << bits << std::endl;
    int lines = getLinesFromPixels(pixels);
    std::cout << "Pixels   " << pixels << std::endl;
    std::cout << "Lines   " << lines << std::endl;

    buildFrame(red,green,blue,bits,pixels,lines);

    // WS client to send built Frame
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
    std::vector<unsigned char> frameData;
    frameData.resize((pixels*lines*6)+4);
    memcpy(frameData.data() + 4, &frameBuffer[0], pixels*lines*6);

    // Prepend buffer with target FS02.
    frameData[0] = 'F';
    frameData[1] = 'S';
    frameData[2] = '0';
    frameData[3] = '2';

    std::cout << "websocket transfer size " << frameData.size() << std::endl;

    websocket_outgoing_message msg;
    auto msgBuf = concurrency::streams::container_buffer<std::vector<unsigned char>>(frameData);
    msg.set_binary_message(msgBuf);

    static std::chrono::time_point<std::chrono::high_resolution_clock> sendT = std::chrono::high_resolution_clock::now();
    auto sendTask = wsclient.send(msg).then([]() {
        std::cout << "ws: message sent" << std::endl;
    });
    sendTask.wait();

    wsclient.close().then([&]() { std::cout << std::endl << "ws: disconnected from server [" << to_utf8string(wsurl) << "]" << std::endl; });


    return 0;
}
