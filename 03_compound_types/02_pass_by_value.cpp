// 02 - Pass by value
//
// Shows that a parameter passed by value is a copy: changing y inside addOne
// does not change x in main.
//
// Concepts: functions, void, pass by value

#include <iostream>

void addOne( int y) {  // y is a copy of whatever is passed in
    ++y;
    std::cout << "Inside addOne: " << y << std::endl;
}

int main() {

    int x { 5 };

    std::cout << "Before addOne: " << x << std::endl;

    addOne(x);  // x is copied into y; x itself stays 5
    std::cout << "After addOne: " << x << std::endl;


}