// 39 - Sum of digits greater than 5
//
// Adds up the digits of a number that are greater than 5.
//
// Concepts: digit loop + condition + accumulator

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit > 5) {  // only 6, 7, 8 and 9 are added
            sum += digit;
        }
        number /= 10;
    }
    std::cout << "Sum of digits greater than 5: " << sum << std::endl;
    return 0;
}