cmake_minimum_required(VERSION 3.16)

include(${CMAKE_CURRENT_LIST_DIR}/cmake/AJASojiDemos.cmake)

add_sdk_subdirectory(ntv2sdk)
add_sdk_subdirectory(api)

add_demo_subdirectory(SojiDynamicFrameLoad)
add_demo_subdirectory(SojiDynamicLutLoad)
add_demo_subdirectory(SojiDynamicMatrixLoad)
add_demo_subdirectory(SojiFrameGrab)
add_demo_subdirectory(SojiPreviewDemo)
add_demo_subdirectory(SojiRGBTriplet)
