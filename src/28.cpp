#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int N;
    std::cin >> N;
    int largestDigit = 0;
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