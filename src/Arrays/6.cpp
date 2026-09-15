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
    int numbers[SIZE];
    std::cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> numbers[i];
    }
    int sum = 0;
    for ( int num : numbers) {
        sum += num;
    }
    double average = static_cast<double>(sum) / SIZE;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;
    return 0;
}
