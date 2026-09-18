// 46 - Contains a digit
//
// Reads a number and a digit, and prints whether the number contains that
// digit.
//
// Concepts: bool flag, break to leave a loop early

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    std::cout << "Enter a digit to search for: ";
    int digitToSearch;
    std::cin >> digitToSearch;
    bool found = false;
    while (number > 0) {
        int digit = number % 10;
        if (digit == digitToSearch) {
            found = true;
            break;  // found it, no need to check the remaining digits
        }
        number /= 10;
    }
    if (found) {
        std::cout << "Contains digit: Yes "<< std::endl;
    } else {
        std::cout <<  "Contains digit: No" << std::endl;
    }
    return 0;
}