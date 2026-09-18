#include <iostream>
#include <vector>

int main() {
    int SIZE;
    std::cout << "Enter the size of the array: ";
    std::cin >> SIZE;
    std::vector<int> numbers(SIZE);
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