// 01 - Multiply two fractions
//
// Reads two fractions typed like 1/2 and 3/4, and prints their product.
//
// Concepts: brace initialisation {}, reading and throwing away the '/' with
//           a char

#include <iostream>

int main() {
    int num1 {};
    int den1 {};

    int num2  {};
    int den2  {};

    char ignore {};  // swallows the '/' between the two numbers
    
    std::cout << "Enter a fraction: ";
    std::cin >> num1 >> ignore >> den1;  // 1/2 -> num1 = 1, ignore = '/', den1 = 2

    std::cout << "Enter another fraction: ";
    std::cin >> num2 >> ignore >> den2;

    std::cout << "The two fractions multiplied: " << num1 * num2 << "/" << den1 * den2 << std::endl;

    return 0;
    



}