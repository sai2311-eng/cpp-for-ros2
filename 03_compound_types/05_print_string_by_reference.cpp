// 05 - Print a string by reference
//
// Passes a std::string to a function by reference, so the string is not
// copied.
//
// Concepts: pass by reference to avoid copying
//
// NOTE: The function only reads text, so const std::string& would be better:
//       it promises not to change the string, and it also accepts literals
//       like printValue("hi"). ROS 2 passes messages the same way.

#include<iostream>
#include<string>

void printValue(std::string& text) {  // no copy of the string is made
    std::cout << text << std::endl;
    
}

int main() {
    std::string name { "Sai" };
    printValue(name);
}