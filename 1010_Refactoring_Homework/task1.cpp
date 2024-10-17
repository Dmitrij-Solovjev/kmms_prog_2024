#include <iostream>

size_t calculate_sum(const int *arr, const unsigned arr_len);
void generate_array(int * const arr, const size_t arr_len, const size_t max_elem);
void print_array(const char * const comment,  const int * const arr, const size_t arr_len, const char * const separator = " ");

int main() {
   const size_t max_elem = 10;
   const size_t num_elem = 10;

   int arr[num_elem] = {0};
   
   const char *str_arr_1[3] = {
      "Первая последовательность:",
      "Вторая последовательность:",
      "Третья последовательность:"};

   const char *str_arr_2[3] = {
      "среднее первой  последовательности: ",
      "среднее второй  последовательности: ",
      "среднее третьей последовательности: "};

   for (auto i = 0; i < 3; i++){
      generate_array(arr, num_elem, max_elem);

      print_array(str_arr_1[i], arr, num_elem);
      
      const size_t sum = calculate_sum(arr, num_elem);
      float mean = (double)sum / num_elem;
      
      std::cout << str_arr_2[i] << mean << std::endl;
   }

    return 0;
}


size_t calculate_sum(const int *arr, const unsigned arr_len){
   size_t sum = 0;

   for (size_t i = 0; i < arr_len; i++){
      sum+=arr[i];
   }
   
   return sum;
}

void generate_array(int * const arr, const size_t arr_len, const size_t max_elem){
   for (size_t i = 0; i < arr_len; i++){
      arr[i] = rand() % (max_elem + 1);
   }
}

void print_array(const char * const comment,  const int * const arr, const size_t arr_len, const char * const separator) {
    std::cout << comment << std::endl;

    for (size_t i = 0; i < arr_len; i++) {
        std::cout << arr[i] << separator;
    }

    std::cout << std::endl;
}


