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
        if (digit < SmallestDigit) {
            SmallestDigit = digit;
        }
        number /= 10;
    }
    int Difference = LargestDigit - SmallestDigit;
   std::cout << "Difference: " << Difference << std::endl;
    return 0;
}