#include <iostream>
#include <string>

void printMessage (std::string &message) {
    std::cout << message << std::endl;
}

int main() {
    std::string message { "Hello, C++" };
    printMessage(message);
}