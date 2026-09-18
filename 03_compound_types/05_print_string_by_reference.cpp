// 05 - Print a string by reference
//
// Passes a std::string to a function by reference, so the string is not
// copied.
//
// Concepts: pass by reference to avoid copying
//
// IMPROVED: The parameter is now const std::string&. The function only reads
//           the string, so const promises not to change it, and it also lets
//           the function accept literals like printValue("hi"). ROS 2 passes
//           messages the same way.

#include<iostream>
#include<string>

void printValue(const std::string& text) {  // const: read-only, and no copy is made
    std::cout << text << std::endl;
    
}

int main() {
    std::string name { "Sai" };
    printValue(name);
}