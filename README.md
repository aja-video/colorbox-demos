# AJA ColorBox Remote Demos
The [ColorBox](https://www.aja.com/products/colorbox) from AJA supports a rich RESTful API using OpenAPI. 

C++, Go and Python OpenAPI implementations are included in this package. Some simple demo projects are included to demonstrate the functionality available via this RESTful API.

This document gives a brief overview of the API and directory hierarchy, for more details please visit the README.md file in each of the top level directories.

## OpenAPI
The ColorBox RESTful API is generated using the [OpenAPI specification](https://github.com/OAI/OpenAPI-Specification). The main demos are built on Qt with C++ but there are also C++(without Qt), Python and Go demos as well.

The OpenAPI interface to ColorBox is self-documenting and that can be found at:

`ipaddressOfColorBox/api (for example http://192.168.1.140/api)`

This allows you not only to see the data structures for the API but also try it out.

### Directory Hierarchy
* **Qt C++ demos**
	* [cpp-qt/](cpp-qt)
		* [api/](cpp-qt/api) - the generated OpenAPI for use with Qt C++
		* [bin/](cpp-qt/bin) - where the built demos are placed
		* [cmake/](cpp-qt/cmake) - files used by cmake
		* [common/](cpp-qt/common) - common code used by Qt C++ demos
		* [docs/](cpp-qt/docs) - docs/images for the readme
		* [DynamicFrameLoad/](cpp-qt/DynamicFrameLoad) - GUI demo
		* [DynamicLutLoad/](cpp-qt/DynamicLutLoad) - GUI demo
		* [DynamicMatrixLoad/](cpp-qt/DynamicMatrixLoad) - GUI demo
		* [FrameGrab/](cpp-qt/FrameGrab) - GUI demo
		* [Librarian/](cpp-qt/Librarian) - GUI demo
		* [PreviewDemo/](cpp-qt/PreviewDemo) - GUI demo
		* [RGBTriplet/](cpp-qt/RGBTriplet) - GUI demo
		* [CMakeLists.txt](cpp-qt/CMakeLists.txt) - defines cmake build
		* [demos.pro](cpp-qt/demos.pro) - defines qmake build
		* [README.md](cpp-qt/README.md) - more details about these demos
* **cpprestsdk demos**
	* [cpp-restsdk/](cpp-restsdk)
		* [api/](cpp-restsdk/api) - the generated OpenAPI for use with cpprestsdk (C++)
		* [bin/](cpp-restsdk/bin) - where the built demos are placed
		* [cmake/](cpp-restsdk/cmake) - files used by cmake
		* [dynamic_frame_load/](cpp-restsdk/dynamic_frame_load) - command line demo
		* [dynamic_lut_load/](cpp-restsdk/dynamic_lut_load) - command line demo
		* [get_temp/](cpp-restsdk/get_temp) - command line demo
		* [rgb_triplet/](cpp-restsdk/rgb_triplet) - command line demo
		* [set_overlay_text/](cpp-restsdk/set_overlay_text) - command line demo
		* [CMakeLists.txt](cpp-restsdk/CMakeLists.txt) - defines cmake build
		* [README.md](cpp-restsdk/README.md) - more details about these demos
* **Go demos**
	* [go/](go)
		* [api/](go/api) - the generated OpenAPI for use with Go
		* [get_temp/](go/get_temp) - command line demo
		* [lib_load/](go/lib_load) - command line demo
		* [set_overlay_text/](go/set_overlay_text) - command line demo
		* [README.md](go/README.md) - more details about these demos
* **Python demos**
	* [python/](python)
		* [api/](python/api) - the generated OpenAPI for use with Python
		* [get_temp/](python/get_temp) - command line demo
		* [lib_load/](python/lib_load) - command line demo
		* [set_overlay_text/](python/set_overlay_text) - command line demo
		* [README.md](python/README.md) - more details about these demos

#### Updates
**03/31/2022** - Added Calibration related API updated ColorFront API with Live Mode and TV Mode controls. The Calibration API is demostrated in the C++ Qt DynamicFrameLoad project.
