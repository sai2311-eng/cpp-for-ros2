#include <iostream>
#include <string>

int main () {
    int numbers[5] ;
    std::cout << "Enter 5 numbers: ";
    std::cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];
    std::cout << "Numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
