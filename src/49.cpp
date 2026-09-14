#include <iostream>

int main() {
    std::cout << "Enter a positive number: ";
    int number;
    std::cin >> number;
    std::cout << "Enter a digit to search for: ";
    int digitToSearch;
    std::cin >> digitToSearch;
    int count = 0;
    bool found = false;
    int totalDigits = 0;
    int tempNumber = number; // Store the original number to count total digits
    int firstOccurrence = -1; // Initialize to -1 to indicate not found
    while (tempNumber > 0) {
        totalDigits++;
        tempNumber /= 10;
    }
    while (number > 0) {
        int digit = number % 10;
        count++;
        if ( digit == digitToSearch) {
            firstOccurrence = totalDigits - count + 1; // Calculate the position from the left
            found = true;
        }
        number /= 10;
    }
    if (found) {
        std::cout << "First occurrence from left: " << firstOccurrence << std::endl;
    } else {
        std::cout <<  "Digit not found" << std::endl;
    }
    return 0;
}