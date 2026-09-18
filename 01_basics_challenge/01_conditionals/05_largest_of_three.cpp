// 05 - Largest of three numbers
//
// Reads three integers and prints the largest.
//
// Concepts: && (logical AND) to combine two comparisons
//
// NOTE: If the two largest values are tied and the first number is smaller
//       (e.g. 3 5 5), none of the > checks is true and the else prints 3.
//       Using >= instead of > in the checks fixes it.

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
    else {  // only reached when the largest value is tied
        cout << "Largest number : " << firstNumber << endl;
    }
    return 0;
}