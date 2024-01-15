#!/bin/bash
# Script  creates a static library called liball

gcc -Wall -Wextra -pedantic -std=gnu89 -c *.c
ar rcs libmy.a *.o

