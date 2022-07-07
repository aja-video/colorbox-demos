cmake_minimum_required(VERSION 3.16)

include(${CMAKE_CURRENT_LIST_DIR}/cmake/AJAColorBoxDemosRestSDK.cmake)

add_sdk_subdirectory(api)

add_demo_subdirectory(get_temp)
add_demo_subdirectory(set_overlay_text)
