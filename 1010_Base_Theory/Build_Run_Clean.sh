#!/bin/bash
g++ -O0 -g ./base_theory_linux.cpp -o ./base_theory_linux.out

./base_theory_linux.out

#printf "USE valggrind\n\n"
rm ./base_theory_linux.out
#valgrind --leak-check=full ./mem_leak.out
