#include <iostream>
# include <string>

void swapValues (int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a { 5 };
    int b { 10 };
    swapValues(a, b);
    std::cout << "After swapValues: a = " << a << ", b = " << b << std::endl;
}