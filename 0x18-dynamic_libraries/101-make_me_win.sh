#!/bin/bash
wget -P ../ https://github.com/trOyYey/alx-low_level_programming/raw/main/0x18-dynamic_libraries/ran.so 
export LD_PRELOAD=../ran.so
