// Программа для создания, разворота и вывода массива
#include <algorithm>
#include <iostream>
#include <vector>

void generate_array(int * const arr, const size_t arr_len);
void print_array(const char * const comment, const int * const arr, const size_t arr_len, const char * const separator = " ");
void reverce_array(int * const arr, const size_t arr_len);

int main() {
    const size_t arr_len = 20;
    int arr[arr_len] = {0};

    generate_array(arr, arr_len);

    print_array("Исходный массив:" , arr, arr_len);

    reverce_array(arr, arr_len);

    print_array("Развернутый массив: ", arr, arr_len);

    return 0;
}

void generate_array(int * const arr, const size_t arr_len) {
    for (size_t i = 0; i < arr_len; i++){
    	arr[i] = rand() % 20;
    }
}


void print_array(const char * const comment,  const int * const arr, const size_t arr_len, const char * const separator) {
    std::cout << comment << std::endl;

    for (size_t i = 0; i < arr_len; i++) {
        std::cout << arr[i] << separator;
    }

    std::cout << std::endl;
}

void reverce_array(int * const arr, const size_t arr_len) {
    for (size_t i = 0; i < arr_len / 2; i++) {
	std::swap(arr[i], arr[arr_len - 1 - i]);
    }
}
