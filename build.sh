#!/bin/bash

gcc -Wall -Werror -Wextra -std=c99 -Wno-format -pedantic *.c tests/test.c -o tests/t_printf
