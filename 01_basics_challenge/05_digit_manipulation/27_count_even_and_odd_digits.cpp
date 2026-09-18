#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int N;
    std::cin >> N;
    int evencount = 0;
    int oddcount = 0;
    while (N > 0) {
        int digit = N % 10;
        if (digit % 2 == 0) {
            evencount++;
        } else {
            oddcount++;
        }
        N /= 10;
    }
    std::cout << "Even digits: " << evencount << std::endl;
    std::cout << "Odd digits: " << oddcount << std::endl;
    return 0;
}