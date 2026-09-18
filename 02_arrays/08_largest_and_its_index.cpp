// 08 - Largest element and its index
//
// Reads a list of numbers and prints the largest and the index where it was
// found.
//
// Concepts: tracking a value and its position together
//
// FIXED: The vector was created before SIZE was checked. A negative size
//        turns into a huge unsigned number, so the vector threw an exception
//        and the program crashed before the check could run. The vector is
//        now created after the check, as in exercise 10.

#include <iostream> 
#include <vector>

int main() {
    int SIZE;
    std::cout << "Enter the size of the array: ";
    std::cin >> SIZE;
    if (SIZE <= 0) {  // check before creating the vector
        std::cout << "Invalid size. Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }
    std::vector<int> numbers(SIZE);
    std::cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> numbers[i];
    }
    int Largest = numbers[0];
    int LargestIndex = 0;
    for (int i = 1; i < SIZE; i++) {  // start at 1: element 0 is already the starting value
        if (numbers[i] > Largest) {
            Largest = numbers[i];
            LargestIndex = i;  // remember where it was found
        }
    }
    std::cout << "Largest: " << Largest << std::endl;
    std::cout << "Index: " << LargestIndex << std::endl;
    return 0;


}