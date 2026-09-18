#include<iostream>
#include<string>

void printValue(std::string& text) {
    std::cout << text << std::endl;
    
}

int main() {
    std::string name { "Sai" };
    printValue(name);
}