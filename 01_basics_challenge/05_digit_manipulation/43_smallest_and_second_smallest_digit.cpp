// 43 - Smallest and second-smallest digit
//
// Prints the smallest and the second-smallest digit of a number.
//
// Concepts: tracking the bottom two values at once
//
// FIXED: A one-digit number has no second-smallest digit, but the program
//        printed 9, its starting value. It now counts the digits and says so
//        if there are fewer than two.

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int Smallest = 9;
    int SecondSmallest = 9;
    int digitCount = 0;
    while (number > 0) {
        int digit = number % 10;
        digitCount++;
        if (digit < Smallest) {  // new smallest: the old smallest becomes second
            SecondSmallest = Smallest;
            Smallest = digit;
        }else if (digit < SecondSmallest) {
            SecondSmallest = digit;
        }
        number /= 10;
    }
    if (digitCount < 2) {  // a second-smallest digit needs at least two digits
        std::cout << "Please enter a number with at least two digits." << std::endl;
        return 1;
    }
    std::cout << "Smallest digit in the number: " << Smallest << std::endl;
    std::cout << "Second smallest digit in the number: " << SecondSmallest << std::endl;
    return 0;
}