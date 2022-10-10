/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*
This example will:
- disable the frame store
- enabled the overlay stage
- enable the user text of the overlay
- update the user text of the overlay every 1/4 seconds
  - set uset text 1 to the current machine local time
  - set user text 2 to a unicode text annimation
*/

#include <chrono>
#include <ctime>
#include <string>
#include <thread>

#include "ApiClient.h"
#include "ApiConfiguration.h"
#include "api/DefaultApi.h"

using namespace utility::conversions;
using namespace org::openapitools::client::api;

void usage()
{
std::cout << std::endl
<< "usage: set_overlay_text [-h] [--host HOST] [--port PORT] [--username USERNAME] [--password PASSWORD]" << std::endl
<< "" << std::endl
<< "options:" << std::endl
<< "  -h, --help           show this help message and exit" << std::endl
<< "  --host HOST          the hostname or ip of device" << std::endl
<< "  --port PORT          the port number to use" << std::endl
<< "  --username USERNAME  username to use if authentication required" << std::endl
<< "  --password PASSWORD  password to use if authentication required" << std::endl
<< std::endl;
}

void parse_args(int argc, char *argv[],
				std::string &host, std::string &port, std::string &user, std::string &pass)
{
	//defaults
	host = "127.0.0.1";
	port = "80";
	user = "";
	pass = "";

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

int main(int argc, char *argv[])
{
	std::string host;
	std::string port;
	std::string user;
	std::string pass;
	parse_args(argc, argv, host, port, user, pass);

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

	std::shared_ptr<ApiClient> apiclient = std::make_shared<ApiClient>(apiconfiguration);
	std::shared_ptr<DefaultApi> api = std::make_shared<DefaultApi>(apiclient);

	std::cout << "Controlling [" << to_utf8string(url) << "]" << std::endl << std::flush;

	// disable frame store if needed
	{
		auto getTask = api->getFrameStore().then([&](std::shared_ptr<FrameStore> p) {
			if (p->isEnabled()) {
				p->setEnabled(false);
				auto setTask = api->setFrameStore(p).then([]() {
					std::cout << "frame store disabled" << std::endl;
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
	}

	// setup the overlay stage
	{
		auto getTask = api->getOverlay().then([&](std::shared_ptr<Overlay> p) {
			p->setEnabled(true);
			p->setUserTextEnabled(true);
			auto setTask = api->setOverlay(p).then([]() {
				std::cout << "overlay enabled" << std::endl;
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
	}

	// update the overlay text every 1/4 seconds
	// set the overlay text line 1 to the local time of this machine
	// set the overlay text line 2 to a unicode animation
	size_t loop = 0;
	std::vector<std::string> runes = {"▁","▃","▄","▅","▆","▇","█","▇","▆","▅","▄","▃"};
	char timeBuf[64];
	while(1) {
		if (loop > runes.size() - 1) {
			loop = 0;
		}

		// NOTE: for real code will want to do some error checking
		auto o = api->getOverlay().get();

		auto now = std::chrono::system_clock::now();
		auto t = std::chrono::system_clock::to_time_t(now);
		std::strftime(timeBuf, sizeof(timeBuf), "%FT%T", std::localtime(&t));

		o->setUserTextLine1(to_string_t(timeBuf));
		o->setUserTextLine2(to_string_t(runes.at(loop)));

		auto setTask = api->setOverlay(o).then([]() {
			//std::cout << "overlay updated" << std::endl;
		});
		try {
			setTask.wait();
		}
		catch(const std::exception &ex) {
			std::cout << ex.what() << std::endl << std::flush;
			std::string err(ex.what());
		}

		std::this_thread::sleep_for(std::chrono::milliseconds(250));
		loop += 1;
	}

	return 0;
}
