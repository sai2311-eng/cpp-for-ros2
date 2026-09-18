// 29 - Smallest digit
//
// Prints the smallest digit in a number.
//
// Concepts: running minimum over digits

# include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int N;
    std::cin >> N;
    int smallestDigit = 9;  // 9 is the largest digit, so any digit can beat it
    while( N > 0) {
        int digit = N % 10;
        N /= 10;
        if (digit < smallestDigit) {
            smallestDigit = digit;
        }
    }
    std::cout << "Smallest digit: " << smallestDigit << std::endl;
    return 0;
}