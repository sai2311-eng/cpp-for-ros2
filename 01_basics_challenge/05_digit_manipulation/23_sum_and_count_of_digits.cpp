// 23 - Sum and count of digits
//
// Reads a positive number and prints the sum of its digits and how many
// digits it has.
//
// Concepts: the digit loop: % 10 gives the last digit, / 10 removes it

#include<iostream>
using namespace std;

int main() {
    cout << "Enter a Positive number N: ";
    int N;
    cin >> N;
    int sum = 0;
    int digit = 0;
    int count = 0;
    while ( N > 0) {
        digit = N % 10;  // last digit, e.g. 472 % 10 = 2
        sum += digit;
        N /= 10;  // drop the last digit: 472 -> 47
        count += 1;

    } 
    cout << "Sum of digits: " << sum << "\n";
    cout << "Number of digits: " << count << "\n";
    return 0;
}