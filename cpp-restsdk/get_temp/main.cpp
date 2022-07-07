/*
This example will get the current device die temperature every second.
*/

#include <chrono>
#include <string>
#include <thread>

#include "ApiClient.h"
#include "ApiConfiguration.h"
#include "api/DefaultApi.h"

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

	int index = 1;
	while (index < argc) {
		std::string cmd = argv[index++];
		if (cmd == "--host") {
			host = argv[index++];
		}
		else if (cmd == "--port") {
			port = argv[index++];
		}
		else if (cmd == "--username") {
			user = argv[index++];
		}
		else if (cmd == "--password") {
			pass = argv[index++];
		}
		else {
			usage();
			exit(1);
		}
	}
}

int main(int argc, char *argv[])
{
	std::string host;
	std::string port;
	std::string user;
	std::string pass;
	parse_args(argc, argv, host, port, user, pass);

	std::shared_ptr<ApiConfiguration> apiconfiguration = std::make_shared<ApiConfiguration>();
	std::string url = "http://" + host + ":" + port + "/v2";
	apiconfiguration->setBaseUrl(url);

	if (user != "") {
		// handle basic auth
		auto cfg = apiconfiguration->getHttpConfig();
		web::http::client::credentials credentials(user, pass);
		cfg.set_credentials(credentials);
		apiconfiguration->setHttpConfig(cfg);
	}

	std::shared_ptr<ApiClient> apiclient = std::make_shared<ApiClient>(apiconfiguration);
	std::shared_ptr<DefaultApi> api = std::make_shared<DefaultApi>(apiclient);

	while(1) {
		auto reqTask = api->getAllStatus().then([=](std::shared_ptr<Status> status) {
			std::cout << "\rdie temp: " << status->getDeviceDieTemp()->getValue() << std::flush;
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
