// 47 - Digits checked until found
//
// Searches for a digit starting from the right, and prints how many digits
// were checked before it was found.
//
// Concepts: counter + break

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    std::cout << "Enter a digit to search for: ";
    int digitToSearch;
    std::cin >> digitToSearch;
    int count = 0;
    bool found = false;
    while (number > 0) {
        int digit = number % 10;
         count++;  // counts every digit examined, including the match

        if (digit == digitToSearch) {
            found = true;
            break;  // stop at the first match
        }
        number /= 10;
    }
    if (found) {
        std::cout << "Digits checked: " << count << std::endl;
    } else {
        std::cout <<  "Digit not found" << std::endl;
    }
    return 0;
}