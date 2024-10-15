#ifndef HELPER_H
#define HELPER_H

#include <cmath>
#include <iostream>

unsigned int subsequence_gen_return_sum(const unsigned int num_elem, const unsigned int max_elem){
  unsigned int sum = 0;
  for (auto i = 0; i < num_elem; i++) {
    int item = rand() % (max_elem+1);
    std::cout << item << ' ';
    sum+=item;
  }
  return sum;
}

#endif
