// 28 - Largest digit
//
// Prints the largest digit in a number.
//
// Concepts: running maximum over digits

#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int N;
    std::cin >> N;
    int largestDigit = 0;  // 0 is the smallest digit, so any digit can beat it
    while( N > 0) {
        int digit = N % 10;
        N /= 10;
        if (digit > largestDigit) {
            largestDigit = digit;
        }
    }
    std::cout << "Largest digit: " << largestDigit << std::endl;
    return 0;
}