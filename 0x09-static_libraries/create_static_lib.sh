#!/bin/bash
cp prototypes/*.c . && gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar -cvr liball.a *.o && ranlib liball.a
