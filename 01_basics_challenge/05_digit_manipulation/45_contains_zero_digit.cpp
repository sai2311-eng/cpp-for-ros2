// 45 - Contains a zero digit
//
// Prints Yes if the number contains the digit 0, otherwise No.
//
// Concepts: bool flag
//
// NOTE: Entering 0 itself prints No, because the loop never runs.

#include <iostream>

int main() {
    std::cout << "Enter a positive number N: ";
    int N;
    std::cin >> N;
    bool hasZero = false;  // assume no zero until one is found
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