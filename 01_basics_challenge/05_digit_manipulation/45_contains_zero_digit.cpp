#include <iostream>

int main() {
    std::cout << "Enter a positive number N: ";
    int N;
    std::cin >> N;
    bool hasZero = false;
    while (N > 0) {
        int digit = N % 10;
        if ( digit == 0) {
            hasZero = true;
        }
        N /= 10;
    }
    if (hasZero) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
        }
    }