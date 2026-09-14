#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit > 5) {
            sum += digit;
        }
        number /= 10;
    }
    std::cout << "Sum of digits greater than 5: " << sum << std::endl;
    return 0;
}