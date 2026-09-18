// 36 - Largest digit (repeat)
//
// Same program as 28, written again for practice.
//
// Concepts: running maximum over digits

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int largestDigit = 0;  // 0 is the smallest digit, so any digit can beat it
    while (number > 0) {
        int digit = number % 10;
        if (digit > largestDigit) {
            largestDigit = digit;
        }
        number /= 10;
    }
    std::cout << "Largest digit in the number: " << largestDigit << std::endl;
    return 0;
}