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
         count++;

        if (digit == digitToSearch) {
            found = true;
            break;
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