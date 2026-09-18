// 00 - Print a fixed array
//
// Prints each element of a 4-element array.
//
// Concepts: declaring and initialising an array, range-based for

#include <iostream>
#include <string>

int main() {
    int mynumbers[4] = {10, 20, 30, 40};  // 4 ints stored next to each other in memory
    for (int num : mynumbers) { 
        std::cout << num << std::endl;
    }
    return 0;
}
