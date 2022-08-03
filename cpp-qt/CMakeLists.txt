cmake_minimum_required(VERSION 3.16)

include(${CMAKE_CURRENT_LIST_DIR}/cmake/AJAColorBoxDemos.cmake)

add_sdk_subdirectory(ntv2sdk)
add_sdk_subdirectory(api "ColorBox Client C++ [Qt] API")

add_demo_subdirectory(DynamicFrameLoad)
add_demo_subdirectory(DynamicLutLoad)
add_demo_subdirectory(DynamicMatrixLoad)
add_demo_subdirectory(FrameGrab)
add_demo_subdirectory(Librarian)
add_demo_subdirectory(PreviewDemo)
add_demo_subdirectory(RGBTriplet)
