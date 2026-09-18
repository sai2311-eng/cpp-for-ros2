// 40 - Sum and count of even digits
//
// Prints both the sum and the count of the even digits of a number.
//
// Concepts: two accumulators updated together

#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int sum = 0;
    int count = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {  // even digit
            sum += digit;
            count++;
        }
        number /= 10;
    }
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Count = " << count << std::endl;
    return 0;
}