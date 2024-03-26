#!/bin/bash
wget -P .. https://raw.githubusercontent.com/jayudoye/alx-low_level_programming/master/0x18-dynamic_libraries/gigamillion.so
export LD_PRELOAD="$PWD/../gigamillion.so"
