// 38 - Count digits between 3 and 7
//
// Counts how many digits of a number are between 3 and 7, inclusive.
//
// Concepts: range check with &&

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int count = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit >= 3 && digit <= 7) {  // 3 and 7 themselves are included
            count++;
        }
        number /= 10;
    }
    std::cout << "Count of digits between 3 and 7: " << count << std::endl;
    return 0;
}