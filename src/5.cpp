#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber, thirdNumber;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    cout << "Enter third number: ";
    cin >> thirdNumber;
    if (firstNumber > secondNumber && firstNumber > thirdNumber) {
        cout << "Largest number : " << firstNumber << endl;
    }
    else if (secondNumber > firstNumber && secondNumber > thirdNumber) {
        cout << "Largest number : " << secondNumber << endl;
    }
    else if (thirdNumber > firstNumber && thirdNumber > secondNumber) {
        cout << "Largest number : " << thirdNumber << endl;
    }
    else {
        cout << "Largest number : " << firstNumber << endl;
    }
    return 0;
}