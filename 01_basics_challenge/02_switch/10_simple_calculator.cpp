// 10 - Simple calculator
//
// Reads a number, an operator (+ - * /) and a second number, then prints the
// result.
//
// Concepts: switch on a char, case labels, break, default
//
// FIXED: Dividing by 0 used to crash the program. The / case now checks for
//        a zero second number first.

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
            if (secondNumber == 0) {  // dividing an int by 0 crashes the program
                cout << "Result: " << "Cannot divide by zero" << endl;
            } else {
                cout << "Result: " << firstNumber / secondNumber << endl;
            }
            break;
        default:  // any other character
            cout << "Result: " << "Invalid operator" << endl;
            break;
    }
}