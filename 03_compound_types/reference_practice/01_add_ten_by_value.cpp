// 01 - Add ten by value
//
// addTen changes its own copy, so x in main stays 5.
//
// Concepts: pass by value

// Here number receives a copy of x, so changing number does not change x.
#include <iostream>


    void addTen(int number) {  // number is a copy of x
        number += 10;
        std::cout << "Inside addTen: " << number << std::endl;
    }


int main() {
    int x { 5 };
    addTen (x);
    std::cout << "After addTen: " << x << std::endl;
    }