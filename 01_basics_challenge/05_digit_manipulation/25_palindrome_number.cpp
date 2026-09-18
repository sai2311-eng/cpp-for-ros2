// 25 - Palindrome number
//
// Reads a positive number and checks whether it reads the same backwards
// (e.g. 12321).
//
// Concepts: reusing the reverse loop from 24, keeping a copy of the input

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a positive number N: ";
    int N;
    cin >> N;
    int Number = N; // Store the original number for later comparison
    int digit;
    int Reverse = 0;
    while ( N > 0) {
        digit = N % 10;
        N /= 10;
        Reverse = Reverse*10;
        Reverse += digit;
    }
    if ( Number == Reverse) {  // palindrome if the reverse equals the original
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
}
    return 0;
}