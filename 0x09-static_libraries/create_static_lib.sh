#!/bin/bash
# Script  creates a static library called liball

gcc -Wall -Werror -Wextra -pedantic -c *.c
ar rcs liball.a *.o
rm -f *.o

