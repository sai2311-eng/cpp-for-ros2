// 03 - Count even and odd in an array
//
// Reads 5 numbers and counts how many are even and how many are odd.
//
// Concepts: reading into an array with a counted loop

#include <iostream>

int main() {
    int numbers[5];
    std::cout << "Enter  5 integers: ";
    for (int i = 0 ; i < 5 ; i++) {  // read with a loop instead of five separate >>
        std::cin >> numbers[i];
    }
    int evenCount = 0;
    int oddCount = 0;
    for (int num : numbers) {
        if ( num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    std::cout << "Even: "<< evenCount <<  std::endl;
    std::cout << "Odd: "<< oddCount <<  std::endl;
    return 0;
}
