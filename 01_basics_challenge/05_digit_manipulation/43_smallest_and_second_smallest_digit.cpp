// 43 - Smallest and second-smallest digit
//
// Prints the smallest and the second-smallest digit of a number.
//
// Concepts: tracking the bottom two values at once
//
// NOTE: For a one-digit number, the second smallest prints 9, the starting
//       value.

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int Smallest = 9;
    int SecondSmallest = 9;
    while (number > 0) {
        int digit = number % 10;
        if (digit < Smallest) {  // new smallest: the old smallest becomes second
            SecondSmallest = Smallest;
            Smallest = digit;
        }else if (digit < SecondSmallest) {
            SecondSmallest = digit;
        }
        number /= 10;
    }
    std::cout << "Smallest digit in the number: " << Smallest << std::endl;
    std::cout << "Second smallest digit in the number: " << SecondSmallest << std::endl;
    return 0;
}