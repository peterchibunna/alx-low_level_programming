#!/usr/bin/sh
cp prototypes/*.c . && gcc -c *.c
rm *.c
ar -cvq liball.a *.o
rm *.o
