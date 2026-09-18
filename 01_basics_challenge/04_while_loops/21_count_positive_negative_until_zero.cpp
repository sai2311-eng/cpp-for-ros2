// 21 - Count positives and negatives until zero
//
// Reads numbers until 0 is entered and counts how many were positive and how
// many negative.
//
// Concepts: sentinel loop + counters

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int N;
    cin >> N;
    int Positivecount = 0;
    int Negativecount = 0;
    while (N != 0) {  // 0 ends the input and is not counted
        if ( N > 0) {
            Positivecount++;
        }
        else if ( N < 0) {
            Negativecount++;
        }
        cout << "Enter a number: ";
        cin >> N;
    }
    cout << "Number of positive numbers: " << Positivecount << "\n";
    cout << "Number of negative numbers: " << Negativecount << "\n";
    return 0;
}