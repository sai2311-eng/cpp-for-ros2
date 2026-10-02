#include <iostream>

int main () {
    int* ptr;
    std::cout << "Value of ptr: " << ptr << '\n';
    *ptr = 10; // This line will cause undefined behavior since ptr is uninitialized
    std::cout << "Value pointed to by ptr: " << *ptr << '\n';
}