option(AJA_COLORBOX_QT_DEMOS_COPY_INTO_BIN "Copy the built demos into the cpp-qt/bin directory?" On)

set(COLORBOX_CLIENT_API_TARGET cpp-qt-client-colorbox)

if(CMAKE_BUILD_TYPE MATCHES Debug)
    add_definitions(-DAJA_DEBUG -D_DEBUG)
elseif(CMAKE_BUILD_TYPE MATCHES RelWithDebInfo)
else()
    add_definitions(-DNDEBUG)
endif()

if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
    add_definitions(
        -DAJA_WINDOWS
        -DMSWindows
        -D_WINDOWS
        -D_CONSOLE
        -DWIN32_LEAN_AND_MEAN
        -D_CRT_SECURE_NO_WARNINGS
        -D_SCL_SECURE_NO_WARNINGS)
elseif (CMAKE_SYSTEM_NAME STREQUAL "Linux")
    add_definitions(
        -DAJALinux
        -DAJA_LINUX)
elseif (CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    add_definitions(
        -DAJAMac
        -DAJA_MAC
        -D__STDC_CONSTANT_MACROS)
endif()

# found at https://discourse.cmake.org/t/cmake-list-of-all-project-targets/1077/17
function (get_all_cmake_targets out_var current_dir)
	get_property(targets DIRECTORY ${current_dir} PROPERTY BUILDSYSTEM_TARGETS)
	get_property(subdirs DIRECTORY ${current_dir} PROPERTY SUBDIRECTORIES)

	foreach(subdir ${subdirs})
		get_all_cmake_targets(subdir_targets ${subdir})
		list(APPEND targets ${subdir_targets})
	endforeach()

	set(${out_var} ${targets} PARENT_SCOPE)
endfunction()

function (is_target_available target out_var current_dir)
	get_all_cmake_targets(all_targets ${current_dir})
	if (${target} IN_LIST all_targets)
		set(${out_var} TRUE PARENT_SCOPE)
	else()
		set(${out_var} FALSE PARENT_SCOPE)
	endif()

endfunction()

function(add_demo_subdirectory target)
	set(target_path ${CMAKE_CURRENT_SOURCE_DIR}/${target})
	if (EXISTS ${target_path} AND EXISTS ${target_path}/CMakeLists.txt)
		add_subdirectory(${target_path})
		set(status_msg "ColorBox cpp-qt Demo: added target: ${target}")
		message(STATUS ${status_msg})
	endif()
endfunction()

# This complication is needed when we (AJA) are testing the demos internally.
function(add_sdk_subdirectory target_dir)
	set(target "")
	if (${target_dir} STREQUAL "api")
		set(target "${COLORBOX_CLIENT_API_TARGET}")
	elseif(${target_dir} STREQUAL "ntv2sdk")
		set(target "ajantv2")
	endif()

	set(add_dir TRUE)
	if (NOT "${target}" STREQUAL "")
		if (EXISTS ${AJA_NTV2_ROOT})
			is_target_available(${target} target_found ${AJA_NTV2_ROOT})
			if (target_found)
				set(add_dir FALSE)
			endif()
		endif()
	endif()

	if (${add_dir})
		set(target_path ${CMAKE_CURRENT_SOURCE_DIR}/${target_dir})
		if (EXISTS ${target_path} AND EXISTS ${target_path}/CMakeLists.txt)
			add_subdirectory(${target_path})
            set(status_msg "ColorBox: added target: ${target_dir}")
			message(STATUS ${status_msg})
		endif()
	endif()
endfunction()
