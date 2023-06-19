#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# export library
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
