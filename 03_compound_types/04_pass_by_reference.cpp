// 04 - Pass by reference
//
// Same as 02, but y is a reference (int&): another name for x, so the change
// is visible back in main.
//
// Concepts: references, pass by reference

#include <iostream>


// Pass by reference Example
void addOne(int& y) {  // & makes y an alias for the caller's variable
    ++y;
    std::cout << "Inside addOne: " << y << std::endl;
}

int main() {
    
    int x { 5 };

    std::cout << "Before addOne: " << x << std::endl;

    addOne(x);  // x becomes 6
    std::cout << "After addOne: " << x << std::endl;
}