#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int largestDigit = 0;
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