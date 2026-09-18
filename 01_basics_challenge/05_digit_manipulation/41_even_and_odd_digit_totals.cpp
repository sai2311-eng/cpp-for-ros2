// 41 - Even and odd digit totals
//
// Prints the sum and count of the even digits, and the sum and count of the
// odd digits.
//
// Concepts: four accumulators, if / else

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int EvenSum = 0;
    int OddSum = 0;
    int EvenCount = 0;
    int OddCount = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {  // even digit -> even totals, otherwise odd totals
            EvenSum += digit;
            EvenCount++;
        } else {
            OddSum += digit;
            OddCount++;
        }
    number /= 10;
    }
    std::cout << "Sum of even digits: " << EvenSum << std::endl;
    std::cout << "Count of even digits: " << EvenCount << std::endl;
    std::cout << "Sum of odd digits: " << OddSum << std::endl;
    std::cout << "Count of odd digits: " << OddCount << std::endl;
    return 0;
}