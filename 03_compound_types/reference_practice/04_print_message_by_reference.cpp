// 04 - Print a message by reference
//
// Prints a std::string passed by reference.
//
// Concepts: pass by reference to avoid copying
//
// IMPROVED: The parameter is now const std::string&, because the string is
//           only read.

#include <iostream>
#include <string>

void printMessage (const std::string &message) {  // const: read-only, and no copy is made
    std::cout << message << std::endl;
}

int main() {
    std::string message { "Hello, C++" };
    printMessage(message);
}