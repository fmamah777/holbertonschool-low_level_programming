#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar rc -s libmy.a *.o
ranlib libmy.a
