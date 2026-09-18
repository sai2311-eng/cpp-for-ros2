// 05 - Smallest in a vector
//
// Asks for a size, reads that many numbers into a std::vector, and prints
// the smallest.
//
// Concepts: std::vector: an array whose size is chosen while the program
//           runs
//
// FIXED: There was no check on the size, so size 0 made numbers[0] read past
//        the end of the vector and crash. The size is now checked before the
//        vector is created.

#include <iostream>
#include <vector>

int main() {
    int SIZE;
    std::cout << "Enter the size of the array: ";
    std::cin >> SIZE;
    if (SIZE <= 0) {  // numbers[0] below needs at least one element
        std::cout << "Invalid size. Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }
    std::vector<int> numbers(SIZE);  // SIZE elements, all starting at 0
    std::cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> numbers[i];
    }
    int Smallest = numbers[0];
    for ( int num : numbers) {
        if (num < Smallest) {
            Smallest = num;
        }
    }
    std::cout << "Smallest number: " << Smallest << std::endl;
    return 0;
    }