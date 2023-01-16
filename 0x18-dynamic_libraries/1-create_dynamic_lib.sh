#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
rm *.o
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
