# Build the ColorBox OpenAPI
```
cd ../common/go
go mod download golang.org/x/oauth2
go get golang.org/x/oauth2/internal@v0.0.0-20210323180902-22b0adad7558
```

## Build get_temp
```
cd get_temp
go build
cd -
```

## Build set_overlay_text
```
cd set_overlay_text
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
