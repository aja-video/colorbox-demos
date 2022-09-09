/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*
This example uses a websocket to send an rgb triplet to the ColorBox
*/

#include <chrono>
#include <string>
#include <thread>

#include "ApiClient.h"
#include "ApiConfiguration.h"
#include "api/DefaultApi.h"

#include <cpprest/ws_client.h>

using namespace utility::conversions;
using namespace web;
using namespace web::websockets::client;

using namespace org::openapitools::client::api;


void usage()
{
std::cout << std::endl
<< "usage: rgb_triplet [-h] [--host HOST] [--port PORT] [--username USERNAME] [--password PASSWORD]" << std::endl
<< "                   [--x XCOORD] [--y YCOORD] [--r RCOLOR] [--g GCOLOR] [--b BCOLOR] [--cookie COOKIE]" << std::endl
<< "" << std::endl
<< "options:" << std::endl
<< "  -h, --help           show this help message and exit" << std::endl
<< "  --host HOST          the hostname or ip of device" << std::endl
<< "  --port PORT          the port number to use" << std::endl
<< "  --username USERNAME  username to use if authentication required" << std::endl
<< "  --password PASSWORD  password to use if authentication required" << std::endl
<< "  --x XCOORD           x coordinate to grab from" << std::endl
<< "  --y YCOORD           y coordinate to grab from" << std::endl
<< "  --r RCOLOR           r color component to send" << std::endl
<< "  --g GCOLOR           g color component to send" << std::endl
<< "  --b GCOLOR           b color component to send" << std::endl
<< "  --cookie COOKIE      cookie string to send along for tracking" << std::endl
<< std::endl;
}

void parse_args(int argc, char *argv[],
				std::string &host, std::string &port, std::string &user, std::string &pass,
				int &x, int &y, int &r, int &g, int &b, std::string &cookie)
{
	//defaults
	host = "127.0.0.1";
	port = "80";
	user = "";
	pass = "";
	x = 0;
	y = 0;
	r = 1000;
	g = 2000;
	b = 3000;
	cookie = "cookie";

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
		else if (cmd == "--x") {
			x = std::stoi(argv[i++]);
		}
		else if (cmd == "--y") {
			y = std::stoi(argv[i++]);
		}
		else if (cmd == "--r") {
			r = std::stoi(argv[i++]);
		}
		else if (cmd == "--g") {
			g = std::stoi(argv[i++]);
		}
		else if (cmd == "--b") {
			b = std::stoi(argv[i++]);
		}
		else if (cmd == "--cookie") {
			cookie = argv[i++];
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

int main(int argc, char *argv[])
{
	std::string host;
	std::string port;
	std::string user;
	std::string pass;
	int x = 0;
	int y = 0;
	int r = 0;
	int g = 0;
	int b = 0;
	std::string cookie;
	parse_args(argc, argv, host, port, user, pass, x, y, r, g, b, cookie);

	std::shared_ptr<ApiConfiguration> apiconfiguration = std::make_shared<ApiConfiguration>();
	utility::string_t url = makeUrl(host, port);
	apiconfiguration->setBaseUrl(url);

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

	// For this to work need to use the OpenAPI client to enable the FrameStore
	bool frameStoreChanged = false;
	auto getTask = api->getFrameStore().then([&](std::shared_ptr<FrameStore> p) {
		if (p->isEnabled() == false || p->isDynamic() == true) {
			p->setEnabled(true);
			p->setDynamic(false);
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

	// WS client
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

	auto msgTxt = json::value::object();
	msgTxt[to_string_t("type")] = json::value(to_string_t("rgbtriplet"));
	msgTxt[to_string_t("cookie")] = json::value(to_string_t(cookie));
	msgTxt[to_string_t("x")] = json::value(x);
	msgTxt[to_string_t("y")] = json::value(y);
	msgTxt[to_string_t("r")] = json::value(r);
	msgTxt[to_string_t("g")] = json::value(g);
	msgTxt[to_string_t("b")] = json::value(b);

	websocket_outgoing_message msg;

	auto msgTextUtf8 = to_utf8string(msgTxt.serialize());
	auto msgBuf = concurrency::streams::container_buffer<std::string>(msgTextUtf8);
	msg.set_binary_message(msgBuf);

	static std::chrono::time_point<std::chrono::high_resolution_clock> sendT = std::chrono::high_resolution_clock::now();
	auto sendTask = wsclient.send(msg).then([]() {
		std::cout << "ws: message sent" << std::endl;
	});
	auto recvTask = wsclient.receive().then([&](websocket_incoming_message msg) {
		auto recvT = std::chrono::high_resolution_clock::now();

		std::cout << "ws: message recv" << std::endl;

		std::string buf;
		buf.resize(msg.length());
		msg.body().streambuf().getn((uint8_t*)&buf[0], buf.length());
		auto o = json::value::parse(buf);

		auto delta = std::chrono::duration_cast<std::chrono::milliseconds>(recvT - sendT);
		std::cout << "round trip took: " << delta.count() << " ms" << std::endl;

		if (o.is_object()) {
			auto rCookie = to_utf8string(o.at(to_string_t("cookie")).serialize());
			auto rX = to_utf8string(o.at(to_string_t("x")).serialize());
			auto rY = to_utf8string(o.at(to_string_t("y")).serialize());
			auto rR = to_utf8string(o.at(to_string_t("r")).serialize());
			auto rG = to_utf8string(o.at(to_string_t("g")).serialize());
			auto rB = to_utf8string(o.at(to_string_t("b")).serialize());
			auto rExpectedR = to_utf8string(o.at(to_string_t("expectedR")).serialize());
			auto rExpectedG = to_utf8string(o.at(to_string_t("expectedG")).serialize());
			auto rExpectedB = to_utf8string(o.at(to_string_t("expectedB")).serialize());
			auto rActualR = to_utf8string(o.at(to_string_t("actualR")).serialize());
			auto rActualG = to_utf8string(o.at(to_string_t("actualG")).serialize());
			auto rActualB = to_utf8string(o.at(to_string_t("actualB")).serialize());

			auto now = std::chrono::system_clock::now();
			auto t = std::chrono::system_clock::to_time_t(now);
			char timeBuf[64];
			std::strftime(timeBuf, sizeof(timeBuf), "%FT%T", std::localtime(&t));

			std::cout << std::endl << "results:" << std::endl;
			std::cout << timeBuf << ": " << "for cookie '" << rCookie << "' "
									   << "with coords(" << rX << "," << rY << ") "
									   << "sent rgb(" << rR << "," << rG << "," << rB << "), "
									   << "expect rgb(" << rExpectedR << "," << rExpectedG << "," << rExpectedB << ") "
									   << "and got rgb(" << rActualR << "," << rActualG << "," << rActualB << ") "
									   << std::endl;
		}
	});
	sendTask.wait();
	try{
		recvTask.wait();
	}
	catch(const ApiException& ex) {
		std::cout << ex.what() << std::endl << std::flush;
		std::string err(ex.what());
	}
	catch(const std::exception &ex) {
		std::cout << ex.what() << std::endl << std::flush;
		std::string err(ex.what());
	}

	wsclient.close().then([&]() { std::cout << std::endl << "ws: disconnected from server [" << to_utf8string(wsurl) << "]" << std::endl; });

	return 0;
}
