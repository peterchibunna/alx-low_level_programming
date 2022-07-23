#!/bin/bash
cp prototypes/*.c . && gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar -cvqr liball.a *.o && ranlib liball.a
rm *.o *.c
