#!/bin/bash
wget -O /tmp/win.so https://github.com/Alemenew/alx-low_level_programming/raw/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
