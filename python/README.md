# Install the ColorBox OpenAPI requirements
```
cd api
python3 -m pip install --disable-pip-version-check --user -r requirements.txt
cd -
```

# Run get_temp example on IP 192.168.1.100 (use control-c to terminate)
```
cd get_temp
python3 main.py --host 192.168.1.100
cd -
```

# Run set_overlay_text example on IP 192.168.1.100 (use control-c to terminate)
```
cd set_overlay_text
python3 main.py --host 192.168.1.100
cd -
```

# Run lib_load example on IP 192.168.1.100
```
cd lib_load
python3 main.py --host 192.168.1.100 --kind lut_1d --file path_to_local_lut --entry 0
cd -
```