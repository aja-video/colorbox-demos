# Building on Windows (VS 2019 and x64)

intall vcpkg, see [getting started](https://vcpkg.io/en/getting-started.html) for additional details

using c:\dev as the place to install vcpkg

Open a VS 2019 x64 Native Tools Command Prompt
```
cd c:\
mkdir dev
cd dev
git clone https://github.com/Microsoft/vcpkg.git
.\vcpkg\bootstrap-vcpkg.bat -disableMetrics
c:\dev\vcpkg\vcpkg install --triplet=x64-windows --recurse boost-system boost-uuid boost-date-time boost-regex boost-interprocess zlib openssl websocketpp brotli cpprestsdk[default-features,brotli,compression,websockets]
c:\dev\vcpkg\vcpkg integrate install
```

Need to modify c:\dev\vcpkg\installed\x64-windows\share\cpprestsdk\cpprestsdk-targets.cmake, open in a txt editor
comment out the following (use # to make a comment line in CMake)
```
set_target_properties(cpprestsdk::cpprestsdk_openssl_internal PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "CPPREST_NO_SSL_LEAK_SUPPRESS"
  INTERFACE_LINK_LIBRARIES "OpenSSL::SSL"
)
```

still in the Command Prompt got to dir where cpp-restsdk was unzipped, using c:\demos\cpp-restsdk for this document
```
cd c:\demos\cpp-restsdk
mkdir build
cd build
cmake -A x64 -DCMAKE_TOOLCHAIN_FILE=C:\dev\vcpkg\scripts\buildsystems\vcpkg.cmake ../
```
Open the the generated Project.sln to view/run the demos


# Building on Linux

 * TBD

# Building on Mac

 * TBD

# Running

## Run get_temp example on IP 192.168.1.100 (use control-c to terminate)
```
get_temp --host 192.168.1.100
```

## Run set_overlay_text example on IP 192.168.1.100 (use control-c to terminate)
```
set_overlay_text --host 192.168.1.100
```

## Run rgb_triplet example on IP 192.168.1.100
```
rgb_triplet --host 192.168.1.100
```
