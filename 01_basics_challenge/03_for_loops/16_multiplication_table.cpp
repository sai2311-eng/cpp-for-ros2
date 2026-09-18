// 16 - Multiplication table
//
// Reads a number and prints its multiplication table from 1 to 10.
//
// Concepts: counted for loop: for (start; condition; step)

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int number;
    cin >> number;
    for (int i = 1 ; i <= 10 ; i++) {  // i runs 1, 2, ..., 10
        cout << number << " X " << i << " = " << number * i << "\n";
    }
    return 0;
}