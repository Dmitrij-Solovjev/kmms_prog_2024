#include <cmath>
#include <iostream>

#include "helper.h"

#define MAX_ELEM 10
#define NUM_ELEM 10

int main() {
    const std::string str_arr_1[3] = {"Первая", "Вторая", "Третья"};
    const std::string str_arr_2[3] = {"первой", "второй", "третьей"};
    
    for (auto i = 0; i < 3; i++){
    
      std::cout << str_arr_1[i]  << " последовательность:\n---> ";
    
      unsigned int sum_a = subsequence_gen_return_sum(NUM_ELEM, MAX_ELEM);
      
      std::cout << "\n---> среднее " << str_arr_2[i] << " последовательности ="
                << (double)sum_a  / NUM_ELEM  << std::endl;
    }
    
    return 0;
}
