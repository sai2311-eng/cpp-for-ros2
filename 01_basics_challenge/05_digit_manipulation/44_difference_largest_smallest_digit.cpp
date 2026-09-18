// 44 - Largest minus smallest digit
//
// Prints the difference between the largest and the smallest digit of a
// number.
//
// Concepts: running maximum and minimum in one loop

#include <iostream>

int main() {
    std::cout <<" Enter a number: ";
    int number;
    std::cin >> number;
    int LargestDigit = 0;
    int SmallestDigit = 9;
    while (number > 0) {
        int digit = number % 10;
        if (digit > LargestDigit) {
            LargestDigit = digit;
        }
        if (digit < SmallestDigit) {  // a separate if, not else if: one digit can update both
            SmallestDigit = digit;
        }
        number /= 10;
    }
    int Difference = LargestDigit - SmallestDigit;  // largest - smallest
   std::cout << "Difference: " << Difference << std::endl;
    return 0;
}