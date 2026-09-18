// 03 - Pass by value (repeat)
//
// Same program as 02, written again for practice. This version has notes.
//
// Concepts: functions, void, pass by value

#include <iostream>
// pass by value example
// Function to add one to a number just a example not a real use case
void addOne( int y) {
    ++y;
    std::cout << "Inside addOne: " << y << std::endl;
}

int main() {

    int x { 5 };

    std::cout << "Before addOne: " << x << std::endl;

    addOne(x);  // prints 6 inside, but x is still 5 afterwards
    std::cout << "After addOne: " << x << std::endl;


}

