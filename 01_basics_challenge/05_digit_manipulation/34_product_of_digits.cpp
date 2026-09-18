#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int product = 1;
    while (number > 0) {
        int digit = number % 10;
        product *= digit;
    number /= 10;
    }
    std::cout << "Product of digits: " << product << std::endl;
    return 0;   
}