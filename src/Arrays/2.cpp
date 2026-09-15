#include <iostream>

int main() {
    int numbers[5];
    std::cout << "Enter 5 numbers: ";
    std::cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}