#include <cmath>
#include <iostream>

#include "helper.h"

#define MAX_ELEM 10
#define NUM_ELEM 10

void print_array(const char* const comment, const int *arr, const unsigned arr_len, const char* const separator = " "){
   std::cout << comment << std::endl;

   for (auto i = 0; i < arr_len; i++)
      std::cout << arr[i] << separator;
}

void generate_array(const int *arr, const unsigned arr_len, const unsigned int max_elem){
   for (auto i = 0; i < arr_len; i++)
      arr[i] = rand() % (max_elem + 1);
}

int calculate_sum(const int *arr, const unsigned arr_len){
   int sum = 0;

   for (auto i = 0; i < arr_len; i++)
      sum+=arr[i];

   return sum;
}


int main() {
   auto str_arr_1 = {
      "Первая последовательность",
      "Вторая последовательность",
      "Третья последовательность"};
   auto str_arr_2 = {
      "среднее первой последовательности",
      "среднее первой последовательности",
      "среднее первой последовательности"};

   int arr[NUM_ELEM] = {0};

   for (auto i = 0; i < 3; i++){
      print_array(str_arr_1[i], arr, NUM_ELEM);

      const unsigned int sum = calculate_sum(arr, NUM_ELEM);

      
   }

    return 0;
}
