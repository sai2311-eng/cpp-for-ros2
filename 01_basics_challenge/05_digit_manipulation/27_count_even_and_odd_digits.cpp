// 27 - Count even and odd digits
//
// Counts how many digits of a number are even and how many are odd.
//
// Concepts: digit loop + two counters

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int N;
    std::cin >> N;
    int evencount = 0;
    int oddcount = 0;
    while (N > 0) {
        int digit = N % 10;  // last digit
        if (digit % 2 == 0) {
            evencount++;
        } else {
            oddcount++;
        }
        N /= 10;  // move on to the next digit
    }
    std::cout << "Even digits: " << evencount << std::endl;
    std::cout << "Odd digits: " << oddcount << std::endl;
    return 0;
}