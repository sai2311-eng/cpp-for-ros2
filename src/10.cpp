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
    switch (oper) {
        case '+':
            cout << "Result: " << firstNumber + secondNumber << endl;
            break;
        case '-':
            cout << "Result: "  << firstNumber - secondNumber << endl;
            break;
        case '*':
            cout << "Result: " << firstNumber * secondNumber << endl;
            break;
        case '/':
            cout << "Result: " << firstNumber / secondNumber << endl;
            break;
        default:
            cout << "Result: " << "Invalid operator" << endl;
            break;
    }
}