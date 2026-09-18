#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int count = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit >= 3 && digit <= 7) {
            count++;
        }
        number /= 10;
    }
    std::cout << "Count of digits between 3 and 7: " << count << std::endl;
    return 0;
}