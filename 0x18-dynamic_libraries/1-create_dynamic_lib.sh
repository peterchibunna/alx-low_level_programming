#!/usr/bin/sh
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
