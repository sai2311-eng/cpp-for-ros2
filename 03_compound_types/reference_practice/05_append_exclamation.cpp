// 05 - Append an exclamation mark
//
// Modifies a string through a reference: "Amazing" becomes "Amazing!".
//
// Concepts: modifying a std::string through a reference

#include <iostream>

void addExclamation(std::string& text) {
    text += "!";  // changes the caller's string, not a copy
}

int main() {
    std::string word { "Amazing" };
    addExclamation(word);
    std::cout << word << std::endl;
}