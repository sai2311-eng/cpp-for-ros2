// 04 - Print a message by reference
//
// Prints a std::string passed by reference.
//
// Concepts: pass by reference to avoid copying
//
// NOTE: The string is only read, so const std::string& is the better
//       parameter type.

#include <iostream>
#include <string>

void printMessage (std::string &message) {  // no copy of the string is made
    std::cout << message << std::endl;
}

int main() {
    std::string message { "Hello, C++" };
    printMessage(message);
}