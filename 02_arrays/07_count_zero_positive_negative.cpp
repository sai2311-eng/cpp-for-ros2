// 07 - Count zeros, positives and negatives
//
// Reads a list of numbers and counts the zeros, positives and negatives.
//
// Concepts: std::vector, input validation, if / else if / else
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
    int Zero = 0;
    int Positive = 0;
    int Negative = 0;
    for (int num : numbers) {
        if (num == 0) {
            Zero++;
        } else if (num > 0) {
            Positive++;
        } else {
            Negative++;
        }
    }
    std::cout << "zeros: " << Zero << std::endl;
    std::cout << "positive numbers: " << Positive << std::endl;
    std::cout << "negative numbers: " << Negative << std::endl;
    return 0;
}
