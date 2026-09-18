// 01 - Read and print an array
//
// Reads 5 numbers into an array and prints them back.
//
// Concepts: array indexing (0 to size-1), range-based for

#include <iostream>
#include <string>

int main () {
    int numbers[5] ;  // valid indexes are 0 to 4
    std::cout << "Enter 5 numbers: ";
    std::cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];  // fill each slot by index
    std::cout << "Numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
