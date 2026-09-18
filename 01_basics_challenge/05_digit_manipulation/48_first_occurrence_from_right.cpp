// 48 - First occurrence from the right
//
// Prints the position of the first occurrence of a digit, counting from the
// right (1 = last digit). Same loop as 47; only the meaning of the output
// changes.
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
         count++;  // position from the right

        if (digit == digitToSearch) {
            found = true;
            break;  // stop at the first match
        }
        number /= 10;
    }
    if (found) {
        std::cout << "First occurrence: " <<  count << std::endl;
    } else {
        std::cout <<  "Digit not found" << std::endl;
    }
    return 0;
}