// 45 - Contains a zero digit
//
// Prints Yes if the number contains the digit 0, otherwise No.
//
// Concepts: bool flag
//
// FIXED: Entering 0 printed No, because the digit loop never runs for 0. The
//        flag now starts as true when the number itself is 0.

#include <iostream>

int main() {
    std::cout << "Enter a positive number N: ";
    int N;
    std::cin >> N;
    bool hasZero = (N == 0);  // 0 itself contains a zero, and the loop never runs for it
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