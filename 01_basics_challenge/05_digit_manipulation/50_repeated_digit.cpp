// 50 - Repeated digit
//
// Checks whether any digit appears more than once in a number (e.g. 121).
//
// Concepts: a bool array to remember which digits were seen, early return
//
// FIXED: Two bugs. repeatedDigit was never initialised, so the first
//        comparison read garbage (undefined behaviour, the same bug fixed in
//        13). And it only compared each digit with its neighbour, so 121
//        reported no repeat. It now uses a bool array to remember every
//        digit already seen.

#include <iostream>

int main() {
    std::cout << "Enter a positive number N: ";
    int N;
    std::cin >> N;
    bool seen[10] = {};  // seen[d] becomes true once digit d is found; all start false
    while (N > 0) {
        int digit = N % 10;
        if (seen[digit]) {
            std::cout << "The digit " << digit << " is repeated in the number." << std::endl;
            return 0;
        }
        seen[digit] = true;  // remember this digit for the rest of the number
        N /= 10;
    }
    std::cout << "No repeated digits found in the number." << std::endl;
    return 0;
}