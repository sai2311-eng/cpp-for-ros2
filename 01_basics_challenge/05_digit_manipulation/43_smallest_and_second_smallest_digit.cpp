#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    int Smallest = 9;
    int SecondSmallest = 9;
    while (number > 0) {
        int digit = number % 10;
        if (digit < Smallest) {
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