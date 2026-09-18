#include <iostream>

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    std::cout << "Enter 5 numbers: ";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> numbers[i];
    }
    int largest = numbers[0];
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    std::cout << "Largest number: " << largest << std::endl;
}