#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
gcc -c *.c
ar rc -s libmy.a *.o
