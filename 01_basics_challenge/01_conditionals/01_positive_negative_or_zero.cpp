// 01 - Positive, negative or zero
//
// Reads one integer and prints whether it is positive, negative or zero.
//
// Concepts: if / else if / else, comparison operators

#include<iostream>
using namespace std;


int main() {
    int num; 
    cout <<  "Enter a number: ";
    cin >> num;


    if (num > 0) {
        cout << "Positive" << endl;
    }
     else if (num < 0 ) {
        cout << "Negative" << endl;
    }
     else {  // neither > 0 nor < 0, so it must be 0
        cout << "Zero" << endl;
    }
}