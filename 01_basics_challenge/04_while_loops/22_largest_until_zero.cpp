// 22 - Largest number until zero
//
// Reads numbers until 0 is entered and prints the largest one seen.
//
// Concepts: running maximum inside a sentinel loop

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number N: ";
    int N;
    cin >> N;
    int largest = N;  // start from the first value, not 0, so all-negative input works
    while (N != 0) {
        if (N > largest) {
            largest = N;
        }
        cout << "Enter a number N: ";
        cin >> N;
    }
    cout << "Largest number: " << largest << "\n";
    return 0;
}