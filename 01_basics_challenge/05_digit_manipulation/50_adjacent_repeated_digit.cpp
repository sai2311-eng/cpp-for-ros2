#include <iostream>

int main() {
    std::cout << "Enter a positive number N: ";
    int N;
    std::cin >> N;
    int repeatedDigit;
    while (N > 0) {
        int digit = N % 10;
        if (digit == repeatedDigit) {
            std::cout << "The digit " << digit << " is repeated in the number." << std::endl;
            return 0;
        }
        repeatedDigit = digit;
        N /= 10;
    }
    std::cout << "No repeated digits found in the number." << std::endl;
    return 0;
}