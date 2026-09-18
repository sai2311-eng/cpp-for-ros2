// 05 - Largest of three numbers
//
// Reads three integers and prints the largest.
//
// Concepts: && (logical AND) to combine two comparisons
//
// FIXED: With > instead of >=, a tie for the largest value (e.g. 3 5 5)
//        matched none of the checks and fell through to the else, which
//        printed 3. Using >= means one branch always matches, so the last
//        check becomes a plain else.

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
    if (firstNumber >= secondNumber && firstNumber >= thirdNumber) {
        cout << "Largest number : " << firstNumber << endl;
    }
    else if (secondNumber >= firstNumber && secondNumber >= thirdNumber) {
        cout << "Largest number : " << secondNumber << endl;
    }
    else {  // neither the first nor the second is largest, so the third is
        cout << "Largest number : " << thirdNumber << endl;
    }
    return 0;
}