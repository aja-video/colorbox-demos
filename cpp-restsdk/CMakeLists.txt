cmake_minimum_required(VERSION 3.16)

include(${CMAKE_CURRENT_LIST_DIR}/cmake/AJAColorBoxDemosRestSDK.cmake)

find_package(cpprestsdk)
if (NOT cpprestsdk_FOUND)
	message("skipping cpp-restsdk and examples (cpprestsdk not found)")
	message("see ${CMAKE_CURRENT_LIST_DIR}/api/README.md for help installing cpprestsdk")
	return()
endif()

add_api_subdirectory(api)

add_demo_subdirectory(get_temp)
add_demo_subdirectory(rgb_triplet)
add_demo_subdirectory(set_overlay_text)
