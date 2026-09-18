#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int sum = 0;
    int count = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            sum += digit;
            count++;
        }
        number /= 10;
    }
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Count = " << count << std::endl;
    return 0;
}