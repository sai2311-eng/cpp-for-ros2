#include <iostream>

  void doubleNumber (int& value) {
      value *= 2;
      std::cout << "Inside doubleNumber: " << value << std::endl;
  }

int main() {
    int value { 7 };
    doubleNumber(value);
    std::cout << "After doubleNumber: " << value << std::endl;
}