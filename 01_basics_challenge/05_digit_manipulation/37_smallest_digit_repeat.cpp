#include <iostream>

int main() {
    std::cout << "Enter a positive number : ";
    int number;
    std::cin >> number;
    int smallestDigit = 9; // Initialize to 9, as we are looking for the smallest digit
    while (number > 0) {
        int digit = number % 10;
        if (digit < smallestDigit) {
            smallestDigit = digit;
        }
        number /= 10;
    }
    std::cout << "Smallest digit in the number: " << smallestDigit << std::endl;
    return 0;

}