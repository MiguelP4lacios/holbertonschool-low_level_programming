#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -c *.c
ar rcs liball.a *.o
