// 10 - Simple calculator
//
// Reads a number, an operator (+ - * /) and a second number, then prints the
// result.
//
// Concepts: switch on a char, case labels, break, default
//
// NOTE: Dividing by 0 crashes the program; there is no check for it.

#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;
    char oper;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter operator: ";
    cin >> oper;
    cout << "Enter second number: ";
    cin >> secondNumber;
    switch (oper) {  // jump to the case matching the operator character
        case '+':
            cout << "Result: " << firstNumber + secondNumber << endl;
            break;
        case '-':
            cout << "Result: "  << firstNumber - secondNumber << endl;
            break;
        case '*':
            cout << "Result: " << firstNumber * secondNumber << endl;
            break;
        case '/':  // integer division: 7 / 2 gives 3
            cout << "Result: " << firstNumber / secondNumber << endl;
            break;
        default:  // any other character
            cout << "Result: " << "Invalid operator" << endl;
            break;
    }
}