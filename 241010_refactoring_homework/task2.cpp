#include <algorithm> 
#include <iostream>
#include <vector>

void print_vector(std::vector<int> &arr);

int main() {
    std::vector<int> arr(20, 0);

    for(auto &elem: arr)
        elem = rand() % 20;

    std::cout << "Исходный массив:" << std::endl;
    print_vector(arr);
    
    std::reverse(arr.begin(), arr.end());
  
    std::cout << "Массив после вызова std::reverse():" << std::endl;
    print_vector(arr);
    
    return 0;
}

void print_vector(std::vector<int> &arr){
    for(auto elem: arr)
        std::cout << elem << " ";
    std::cout << std::endl;
}
