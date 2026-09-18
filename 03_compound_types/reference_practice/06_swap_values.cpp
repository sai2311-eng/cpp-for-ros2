// 06 - Swap two values
//
// Swaps two ints through references (a = 5, b = 10 becomes a = 10, b = 5).
//
// Concepts: two reference parameters, the temporary-variable swap

#include <iostream>
# include <string>

void swapValues (int& a, int& b) {
    int temp = a;  // save a before it is overwritten
    a = b;
    b = temp;  // b gets a's original value
}

int main() {
    int a { 5 };
    int b { 10 };
    swapValues(a, b);
    std::cout << "After swapValues: a = " << a << ", b = " << b << std::endl;
}