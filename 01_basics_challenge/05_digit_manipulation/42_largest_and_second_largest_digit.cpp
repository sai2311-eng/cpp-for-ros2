// 42 - Largest and second-largest digit
//
// Prints the largest and the second-largest digit of a number.
//
// Concepts: tracking the top two values at once

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int Largest = 0;
    int SecondLargest = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit > Largest) {  // new largest: the old largest becomes second
            SecondLargest = Largest;
            Largest = digit;
        }else if (digit > SecondLargest && digit != Largest) {  // fits between second and largest
            SecondLargest = digit;
        } else if (digit == Largest) {  // a repeated largest digit also counts as second (99 -> 9 and 9)
            SecondLargest = digit;
        }
        number /= 10;
    }
    std::cout << "Largest digit in the number: " << Largest << std::endl;
    std::cout << "Second largest digit in the number: " << SecondLargest << std::endl;
    return 0;
}