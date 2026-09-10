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
    if ( Number == Reverse) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
}
    return 0;
}