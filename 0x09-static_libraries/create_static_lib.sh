#!/bin/bash
# compile all .c files into a .o file
gcc -c *.c

#create the static library called liball.a using the .o files
ar rcs liball.a *.o

#clean up by removing the .o files
# rm *.o
