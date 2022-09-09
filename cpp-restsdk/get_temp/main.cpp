/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2021 - 2022 AJA Video Systems, Inc.
 */
/*
This example will get the current device die temperature every second.
*/

#include <chrono>
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
<< "usage: get_temp [-h] [--host HOST] [--port PORT] [--username USERNAME] [--password PASSWORD]" << std::endl
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

	while(1) {
		auto reqTask = api->getAllStatus().then([=](std::shared_ptr<Status> status) {
			std::cout << "\rdie temp: " << to_utf8string(status->getDeviceDieTemp()->getValue()) << std::flush;
		});

		try{
			reqTask.wait();
		}
		catch(const ApiException& ex){
			std::cout << ex.what() << std::endl << std::flush;
			std::string err(ex.what());
		}
		catch(const std::exception &ex){
			std::cout << ex.what() << std::endl << std::flush;
			std::string err(ex.what());
		}

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}

	return 0;
}
