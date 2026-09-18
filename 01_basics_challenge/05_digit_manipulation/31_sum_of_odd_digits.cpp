#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        number /= 10;
        }
    std::cout << "Sum of odd digits: " << sum << std::endl;
    return 0;
}