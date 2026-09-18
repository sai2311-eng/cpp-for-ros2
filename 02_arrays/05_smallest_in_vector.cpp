// 05 - Smallest in a vector
//
// Asks for a size, reads that many numbers into a std::vector, and prints
// the smallest.
//
// Concepts: std::vector: an array whose size is chosen while the program
//           runs
//
// NOTE: There is no check for a size of 0 or less; with size 0, numbers[0]
//       reads past the end.

#include <iostream>
#include <vector>

int main() {
    int SIZE;
    std::cout << "Enter the size of the array: ";
    std::cin >> SIZE;
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