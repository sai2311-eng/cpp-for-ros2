// 34 - Product of digits
//
// Prints the product of all the digits of a number.
//
// Concepts: multiplying accumulator

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int product = 1;  // start at 1, not 0: anything times 0 is 0
    while (number > 0) {
        int digit = number % 10;
        product *= digit;
    number /= 10;
    }
    std::cout << "Product of digits: " << product << std::endl;
    return 0;   
}