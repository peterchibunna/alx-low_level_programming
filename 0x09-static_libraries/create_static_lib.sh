#!/bin/bash
cp prototypes/*.c . && gcc -c *.c
rm *.c
ar -cvqr liball.a *.o
ranlib liball.a
rm *.o
