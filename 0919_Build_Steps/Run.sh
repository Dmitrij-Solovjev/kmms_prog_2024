#!/bin/bash
gcc -E ./ulala.c -o ./ulala.ii 
gcc -S ./ulala.ii -o ./ulala.s
as ./ulala.s -o ./ulala.o
gcc ./ulala.o -o ./ulala.a
./ulala.a 
