// 35 - Count occurrences of a digit (repeat)
//
// Same program as 30, written again for practice.
//
// Concepts: digit loop + comparing against user input

#include <iostream>

int main () {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    std::cout << "Digit to find:";
    int digitToSearch;
    std::cin >> digitToSearch;
    int count = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit == digitToSearch) {  // match found
            count++;   
        }
    number /= 10;
    }
    std::cout << "Count of digit " << digitToSearch << " in the number: " << count << std::endl;
    return 0;
}