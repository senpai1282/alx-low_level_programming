#!/bin/bash

#steps
# Compile all .c files to .o files
# Create static library
# Clean up the .o files

gcc -c *.c

ar -rc liball.a *.o

rm *.o
