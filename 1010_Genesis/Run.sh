#!/bin/bash
gcc -O0 -g ./mem_leak.c -o ./mem_leak.out
gcc ./test_mem_heap.c -o ./test_mem_heap.out

./mem_leak.out

printf "USE valggrind\n\n"

valgrind --leak-check=full ./mem_leak.out
