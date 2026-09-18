#include <iostream>


// Pass by reference Example
void addOne(int& y) {
    ++y;
    std::cout << "Inside addOne: " << y << std::endl;
}

int main() {
    
    int x { 5 };

    std::cout << "Before addOne: " << x << std::endl;

    addOne(x);
    std::cout << "After addOne: " << x << std::endl;
}