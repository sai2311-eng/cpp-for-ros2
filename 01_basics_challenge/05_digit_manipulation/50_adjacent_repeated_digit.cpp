// 50 - Adjacent repeated digit
//
// Checks whether a number has the same digit twice in a row (e.g. 1223).
//
// Concepts: remembering the previous value in a loop, early return
//
// NOTE: repeatedDigit is never initialised, so the first comparison reads
//       garbage: undefined behaviour, the same bug that was fixed in 13.
//       Starting it at -1 fixes it. Also, only neighbouring digits are
//       compared, so 121 reports no repeat even though 1 appears twice.

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
        repeatedDigit = digit;  // remember this digit to compare with the next one
        N /= 10;
    }
    std::cout << "No repeated digits found in the number." << std::endl;
    return 0;
}