#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int Largest = 0;
    int SecondLargest = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit > Largest) {
            SecondLargest = Largest;
            Largest = digit;
        }else if (digit > SecondLargest && digit != Largest) {
            SecondLargest = digit;
        } else if (digit == Largest) {
            SecondLargest = digit;
        }
        number /= 10;
    }
    std::cout << "Largest digit in the number: " << Largest << std::endl;
    std::cout << "Second largest digit in the number: " << SecondLargest << std::endl;
    return 0;
}