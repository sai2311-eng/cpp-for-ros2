#include <iostream>
#include <vector>

int main() {
    int SIZE;
    std::cout << "Enter the size of the array: ";
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
