// 02 - Sum of an array
//
// Reads 5 numbers into an array and prints their sum.
//
// Concepts: looping over an array with an accumulator

#include <iostream>

int main() {
    int numbers[5];
    std::cout << "Enter 5 numbers: ";
    std::cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];
    int sum = 0;
    for (int num : numbers) {
        sum += num;  // add each element
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}