// 02 - Even or odd
//
// Reads an integer and prints whether it is even or odd.
//
// Concepts: the modulo operator %, if / else

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {  // remainder 0 when divided by 2 -> even
        cout << "Even" << endl;
    }
    else { 
        cout << "Odd" << endl;
    }
    return 0;
}