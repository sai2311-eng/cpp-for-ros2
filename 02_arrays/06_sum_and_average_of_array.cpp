// 06 - Sum and average of an array
//
// Asks for a size, reads that many numbers, and prints their sum and
// average.
//
// Concepts: input validation, static_cast<double>
//
// FIXED: int numbers[SIZE] with a size read at run time is a variable-length
//        array, which is not standard C++. g++ accepted it as an extension,
//        but it failed with -pedantic-errors (as in the VS Code build task).
//        It is now a std::vector, the standard way to do this.

#include <iostream>
#include <vector>


int main() {
    int SIZE;
    std::cout << "Enter the size of the array: ";
    std::cin >> SIZE;
    if ( SIZE <= 0) {
        std::cout << "Invalid size. Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }
    std::vector<int> numbers(SIZE);  // standard C++, unlike int numbers[SIZE]
    std::cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> numbers[i];
    }
    int sum = 0;
    for ( int num : numbers) {
        sum += num;
    }
    double average = static_cast<double>(sum) / SIZE;  // average with decimals
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;
    return 0;
}
