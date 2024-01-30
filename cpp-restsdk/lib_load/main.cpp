/*
 * SPDX-License-Identifier: MIT
 * Copyright (C) 2023 AJA Video Systems, Inc.
 */
/*
Simple example that will upload a 1D/3D Lut, Matrix or Image file to the ColorBox Library.
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
              << "usage: lib_load [-h] [--host HOST] [--port PORT] [--username USERNAME] [--password PASSWORD]" << std::endl
              << "                [--kind KIND] [--file FILE] [--entry ENTRY]" << std::endl
              << "" << std::endl
              << "options:" << std::endl
              << "  -h, --help           show this help message and exit" << std::endl
              << "  --host HOST          the hostname or ip of device" << std::endl
              << "  --port PORT          the port number to use" << std::endl
              << "  --username USERNAME  username to use if authentication required" << std::endl
              << "  --password PASSWORD  password to use if authentication required" << std::endl
              << "  --kind KIND          kind of upload, choices are: lut_1d, lut_3d, matrix, image, overlay" << std::endl
              << "  --file FILE          the file to upload to library" << std::endl
              << "  --entry ENTRY        the library entry to upload to, 1 - 16," << std::endl
              << "                       a value of 0 will find first open entry and use it" << std::endl
              << std::endl;
}

void parse_args(int argc, char *argv[],
				std::string &host, std::string &port, std::string &user, std::string &pass,
				std::string &kind, std::string &file, int &entry)
{
    //defaults
    host = "127.0.0.1";
    port = "80";
    user = "";
    pass = "";
    kind = "lut_1d";
    file = "";
    entry = 0;

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
        else if (cmd == "--kind") {
            kind = argv[i++];
        }
        else if (cmd == "--file") {
            file = argv[i++];
        }
        else if (cmd == "--entry") {
            entry = std::stoi(argv[i++]);
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

std::string filenameFromPath(const std::string& path)
{
#if defined(AJA_WINDOWS)
	const char PATHSEP = '\\';
#else
	const char PATHSEP = '/';
#endif

	const size_t lastSlashIndex = path.rfind(PATHSEP);
	std::string filename = "";

	if (std::string::npos != lastSlashIndex) {
		filename = path.substr(lastSlashIndex + 1, path.length() - lastSlashIndex);
	}

	return filename;
}

int main(int argc, char *argv[])
{
    std::string host;
    std::string port;
    std::string user;
    std::string pass;
    std::string kind;
    std::string file;
    int entry;
    parse_args(argc, argv, host, port, user, pass, kind, file, entry);

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

	// sanity check the input
	std::vector<std::string>kinds = {"lut_1d", "lut_3d", "matrix", "image", "overlay"};
	std::string availKinds = "";
	bool kindGood = false;
	for (const auto &k : kinds) {
		if (kind == k) {
			kindGood = true;
		}
		if (!availKinds.empty())
			availKinds.append(", ");

		availKinds.append(k);
	}

	if (kindGood == false) {
		std::cout << "error: the kind of '" << kind << "' entered is invalid use one of: {" << availKinds << "}" << std::endl;
		return 1;
	}

	if (file.empty()) {
		std::cout << "error: a file must be specified" << std::endl;
		return 1;
	}

	if ((entry < 0) || (entry > 16)) {
		std::cout << "error: entry is out of bounds, must be 0 - 16" << std::endl;
		return 1;
	}

    // OpenAPI client
    std::shared_ptr<ApiClient> apiclient = std::make_shared<ApiClient>(apiconfiguration);
    std::shared_ptr<DefaultApi> api = std::make_shared<DefaultApi>(apiclient);

	if (entry == 0) {
		// get first empty slot on device
		pplx::task<std::vector<std::shared_ptr<LibraryEntry>>> task;
		if (kind == "lut_1d") {
			task = api->get1dLutLibrary();
		} else if (kind == "lut_3d") {
			task = api->get3dLutLibrary();
		} else if (kind == "matrix") {
			task = api->getMatrixLibrary();
		} else if (kind == "image") {
			task = api->getImageLibrary();
		} else if (kind == "overlay") {
			task = api->getOverlayLibrary();
		}


		task.then([&](std::vector<std::shared_ptr<LibraryEntry>> entries) {
			int count = 1; // library entries are 1 based, so account for that
			for (auto e : entries) {
				if (to_utf8string(e->getFileName()).empty()) {
					break;
				}
				count++;
			}
			entry = count;
			if (entry > 16) {
				entry = 16;
			}
		});
		try{
			task.wait();
		}
		catch(const ApiException& ex){
			std::cout << ex.what() << std::endl << std::flush;
			std::string err(ex.what());
		}
		catch(const std::exception &ex){
			std::cout << ex.what() << std::endl << std::flush;
			std::string err(ex.what());
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(50));
	}

	std::shared_ptr<HttpContent> content = std::make_shared<HttpContent>(HttpContent());
	utility::string_t fileStr = utility::conversions::to_string_t(filenameFromPath(file));
    utility::string_t nameStr = utility::conversions::to_string_t("file");
    utility::string_t typeStr = utility::conversions::to_string_t("application/octet-stream");
    std::shared_ptr<std::istream> inFilePtr = std::make_shared<std::ifstream>(file, std::ios::binary);
    content->setFileName(fileStr);
    content->setName(nameStr);
    content->setData(inFilePtr);
    content->setContentType(typeStr);
    utility::string_t kindStr = utility::conversions::to_string_t(kind);

	auto reqTask = api->uploadFile(content, kindStr, entry).then([&](const utility::string_t &res) {
		std::cout << "uploading '" << to_utf8string(fileStr) << "' of kind '" << kind << "' to entry '" << entry << "'" << std::endl;
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

    return 0;
}
