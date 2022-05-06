cmake_minimum_required(VERSION 3.16)

project(cpp-qt-client)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

if (MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Wno-unused-variable")
endif ()

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Network)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network)
set(QT_LIBS Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Network)




add_library(${PROJECT_NAME}
    OAIAncCaptureFilter.cpp
    OAIBbcConfig.cpp
    OAIBitDepth.cpp
    OAIColorCorrector.cpp
    OAIColorSpace.cpp
    OAIColorfrontColorspace.cpp
    OAIColorfrontConfig.cpp
    OAIColorimetry.cpp
    OAIConnection.cpp
    OAICrop4k2k.cpp
    OAIDHCPState.cpp
    OAIFrame.cpp
    OAIFrameStore.cpp
    OAIInterfaceSetupState.cpp
    OAIIpConfig.cpp
    OAILibrary.cpp
    OAILibraryAction.cpp
    OAILibraryControl.cpp
    OAILibraryEntry.cpp
    OAILocations.cpp
    OAIMode.cpp
    OAINbcConfig.cpp
    OAINetConfig.cpp
    OAINetDevice.cpp
    OAINetParams.cpp
    OAINetStatus.cpp
    OAIOrionClamping.cpp
    OAIOrionConfig.cpp
    OAIOrionConversion.cpp
    OAIOrionImplementation.cpp
    OAIOrionMethod.cpp
    OAIOrionMode.cpp
    OAIOrionSdrEotf.cpp
    OAIOrionSourceRange.cpp
    OAIOutputConfig.cpp
    OAIOverlay.cpp
    OAIPipelineRange.cpp
    OAIPipelineStages.cpp
    OAIPreview.cpp
    OAIPreviewTap.cpp
    OAIProcAmp.cpp
    OAIRgbRange.cpp
    OAIRouting.cpp
    OAISDI.cpp
    OAIScanMode.cpp
    OAISdiMode3g.cpp
    OAIStage.cpp
    OAIStatus.cpp
    OAIStatusInfo.cpp
    OAIStatusState.cpp
    OAISystemConfig.cpp
    OAISystemDiscover.cpp
    OAISystemPassword.cpp
    OAISystemPasswordResponse.cpp
    OAISystemStatus.cpp
    OAITransfer.cpp
    OAITransformMode.cpp
    OAIVideoConvertChoice.cpp
    OAIVideoFormat.cpp
    OAIWiFiDeviceConfig.cpp
    OAIWiFiDeviceStatus.cpp
    OAIDefaultApi.cpp
    OAIHelpers.cpp
    OAIHttpRequest.cpp
    OAIHttpFileElement.cpp

)
target_link_libraries(${PROJECT_NAME} PRIVATE ${QT_LIBS} )
if(NOT APPLE)
  target_link_libraries(${PROJECT_NAME} PRIVATE ssl crypto)
endif()

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_EXTENSIONS OFF)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
