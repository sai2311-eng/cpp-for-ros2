// 09 - Number size category
//
// Reads a number and classifies it: Small (up to 10), Medium (up to 50),
// Large (up to 100), otherwise Out of range.
//
// Concepts: else-if chain with upper bounds

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number <=10) {
        cout << "Small" << endl;
    }
    else if (number <=50) {  // means 11-50, because <= 10 was already handled
        cout << "Medium" << endl;
    }
    else if (number <=100) {
        cout << "Large" << endl;
    }
    else {
        cout << "Out of range" << endl;
    }
    return 0;
}