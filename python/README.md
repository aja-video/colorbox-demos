# Install the ColorBox OpenAPI requirements
```
cd api
python3 -m pip install --disable-pip-version-check --user -r requirements.txt
cd -
```

# Run get_temp example on IP 192.168.1.100 (use control-c to terminate)
```
python3 get_temp/main.py --host 192.168.1.100
```

# Run set_overlay_text example on IP 192.168.1.100 (use control-c to terminate)
```
python3 set_overlay_text/main.py --host 192.168.1.100
```

# Run lib_load example on IP 192.168.1.100
```
python3 lib_load/main.py --host 192.168.1.100 --kind lut_1d --file path_to_local_lut --entry 0

# or multiple files (for use with amf library items)
python3 lib_load/main.py --host 192.168.1.100 --kind amf --file path_to_amf path_to_sidecar_file -entry 0
```
