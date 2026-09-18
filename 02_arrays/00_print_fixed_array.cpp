#include <iostream>
#include <string>

int main() {
    int mynumbers[4] = {10, 20, 30, 40};   
    for (int num : mynumbers) { 
        std::cout << num << std::endl;
    }
    return 0;
}
