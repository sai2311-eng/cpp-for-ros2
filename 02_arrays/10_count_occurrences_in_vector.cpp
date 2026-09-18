// 10 - Count occurrences in a vector
//
// Reads a list of numbers and a search value, and counts how often the value
// appears.
//
// Concepts: linear search, validating input before using it

#include <iostream>
#include <vector>

int main() {
    int SIZE;
    std::cout << "Enter the size of the array: ";
    std::cin >> SIZE;
    if (SIZE <= 0) {  // checked BEFORE the vector is created (the fix for 07-09)
        std::cout << "Invalid size. Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }
    std::vector<int> numbers(SIZE);
    std::cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> numbers[i];
    }
    int search;
    int count = 0;
    std::cout << "Enter the number to search for: ";
    std::cin >> search;
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == search) {
            count ++;
        }
    }
    std::cout << "Count: " << count << std::endl;
    return 0;
}