#!/bin/bash

beltran=$(find . -maxdepth 1 -type f name "*.c")
for file in beltran; do
    gcc -c "$file"
done

ar rcs liball.a *.o
rm -f *.o
