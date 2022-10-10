cmake_minimum_required(VERSION 3.16)

include(${CMAKE_CURRENT_LIST_DIR}/cmake/AJAColorBoxDemosRestSDK.cmake)

#if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
#    set(CPPREST_EXCLUDE_WEBSOCKETS OFF)
#    find_package(WEBSOCKETPP REQUIRED)
#endif()

find_package(cpprestsdk)
if (NOT cpprestsdk_FOUND)
	message("skipping cpp-restsdk and examples (cpprestsdk not found)")
	message("see ${CMAKE_CURRENT_LIST_DIR}/README.md for help installing cpprestsdk")
	return()
endif()

add_api_subdirectory(api)

add_demo_subdirectory(dynamic_frame_load)
add_demo_subdirectory(dynamic_lut_load)
add_demo_subdirectory(get_temp)
add_demo_subdirectory(rgb_triplet)
add_demo_subdirectory(set_overlay_text)
