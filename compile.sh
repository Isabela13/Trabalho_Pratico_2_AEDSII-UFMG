#!/bin/bash

gcc -c heapsort.c
gcc -c openFile.c
gcc -c writeFile.c
gcc main.c heapsort.o openFile.o writeFile.o -o program.out

./program.out input.txt ouput.txt
