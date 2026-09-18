// 03 - Double by reference
//
// Doubles a variable in place through a reference (7 -> 14).
//
// Concepts: modifying the caller's variable

#include <iostream>

  void doubleNumber (int& value) {
      value *= 2;  // changes the caller's variable, not a copy
      std::cout << "Inside doubleNumber: " << value << std::endl;
  }

int main() {
    int value { 7 };
    doubleNumber(value);
    std::cout << "After doubleNumber: " << value << std::endl;
}