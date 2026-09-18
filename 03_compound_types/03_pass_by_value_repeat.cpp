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

    addOne(x);
    std::cout << "After addOne: " << x << std::endl;


}

