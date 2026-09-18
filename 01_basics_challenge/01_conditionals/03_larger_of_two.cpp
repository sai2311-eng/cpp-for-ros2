// 03 - Larger of two numbers
//
// Reads two integers and prints the larger one, or says they are equal.
//
// Concepts: if / else if / else with two variables

#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    if (firstNumber > secondNumber) {
        cout << "Larger number : " << firstNumber << endl;
    }
    else if (secondNumber > firstNumber) {
        cout << "Larger number : " << secondNumber << endl;
    }
    else {  // neither is larger, so they are equal
        cout << "Both numbers are equal" << endl;
    }
    return 0;
}