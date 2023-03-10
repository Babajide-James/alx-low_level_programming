#!/bin/bash
# Compile a script that creates a static library
for file in *.c
do
        gcc -c "$file"
done
ar rc liball.a *.o
rm -f *.o
