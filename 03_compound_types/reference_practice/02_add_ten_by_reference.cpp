// 02 - Add ten by reference
//
// The int& version of 01: x in main becomes 15.
//
// Concepts: pass by reference

// Here Change addTen so that it changes the original x
#include <iostream>


    void addTen(int &number) {  // number is another name for x
        number += 10;
        std::cout << "Inside addTen: " << number << std::endl;
    }


int main() {
    int x { 5 };
    addTen (x);
    std::cout << "After addTen: " << x << std::endl;
    }