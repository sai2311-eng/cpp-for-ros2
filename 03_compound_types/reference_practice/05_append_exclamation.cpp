#include <iostream>

void addExclamation(std::string& text) {
    text += "!";
}

int main() {
    std::string word { "Amazing" };
    addExclamation(word);
    std::cout << word << std::endl;
}