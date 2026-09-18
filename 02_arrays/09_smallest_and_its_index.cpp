// 09 - Smallest element and its index
//
// Reads a list of numbers and prints the smallest and the index where it was
// found.
//
// Concepts: tracking a value and its position together
//
// NOTE: Same check-order issue as 07: the vector is created before SIZE is
//       validated.

#include <iostream>
#include <vector>

int main() {
    int SIZE;
    std::cout << "Enter the size of the Array: ";
    std::cin >> SIZE;
    std::vector<int> numbers(SIZE);
    if (SIZE <= 0) {
        std::cout << "Invalid size. Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }
    std::cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> numbers[i];
    }
    int Smallest = numbers[0];
    int SmallestIndex = 0;
    for (int i = 1; i < SIZE; i++) {  // start at 1: element 0 is already the starting value
        if (numbers[i] < Smallest) {
            Smallest = numbers[i];
            SmallestIndex = i;  // remember where it was found
        }
    }
    std::cout << "Smallest: " << Smallest << std::endl;
    std::cout << "Index: " << SmallestIndex << std::endl;
    return 0;
}