#!/bin/bash
wget -P /tmp https://github.com/tamirwaleed/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libdynamic.so

