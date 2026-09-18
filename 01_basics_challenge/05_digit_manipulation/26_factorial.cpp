#include <iostream>

int main() {
    std::cout << "Enter a non-negative integer N: ";
    int N;
    std::cin >> N;
    int factorial = 1;
    while ( N > 1) {
        factorial *= N;
        N--;
    }
    std::cout << "Factorial: " << factorial << std::endl;
    return 0;   
}