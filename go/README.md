# Build the ColorBox OpenAPI
```
cd api
go build
cd -
```

## Build get_temp
```
cd get_temp
go get colorbox-api
go build
cd -
```

## Build set_overlay_text
```
cd set_overlay_text
go get colorbox-api
go build
cd -
```

## Build lib_load
```
cd lib_load
go get colorbox-api
go build
cd -
```

## To run the get temp example on IP 192.168.1.100 (use control-c to terminate)
```
get_temp/get_temp -host 192.168.1.100
```

## To run the set overlay example on IP 192.168.1.100 (use control-c to terminate)
```
set_overlay_text/set_overlay_text -host 192.168.1.100
```

## To run the lib load example on IP 192.168.1.100
```
lib_load/lib_load -host 192.168.1.100 -kind "lut_1d" -file "path_to_local_lut" -entry 0 
```