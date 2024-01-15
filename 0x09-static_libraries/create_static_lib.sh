#!/bin/bash
# Script  creates a static library called liball

gcc -Wall -Werror  -Wextra -pedantic -std=gnu89 -c *.c
ar rcs libmy.a *.o

