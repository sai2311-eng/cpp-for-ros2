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
    else {
        cout << "Both numbers are equal" << endl;
    }
    return 0;
}