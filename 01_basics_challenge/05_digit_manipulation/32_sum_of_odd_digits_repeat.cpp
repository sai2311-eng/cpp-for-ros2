// 32 - Sum of odd digits (repeat)
//
// Same program as 31, written again for practice. Only the prompt text
// differs.
//
// Concepts: digit loop + condition + accumulator

#include <iostream>

int main() {
    std::cout << "ENter a positive number: ";
    int number;
    std::cin >> number;
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {  // odd digit
            sum += digit;
        }
        number /= 10;
        }
    std::cout << "Sum of odd digits: " << sum << std::endl;
    return 0;
}