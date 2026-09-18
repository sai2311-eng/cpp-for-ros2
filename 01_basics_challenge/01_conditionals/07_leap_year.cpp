// 07 - Leap year
//
// Reads a year and prints whether it is a leap year. Rule: divisible by 400,
// or divisible by 4 but not by 100.
//
// Concepts: %, && and ||, operator precedence
//
// IMPROVED: Added brackets around the && part of the condition. The logic
//           was already correct, because && is evaluated before ||, but the
//           brackets make it obvious and silence g++'s -Wparentheses
//           warning.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    // (divisible by 400) OR (divisible by 4 AND not divisible by 100)
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
      cout << "Leap year" << endl;
    }
    else {
      cout << "Not a leap year" << endl;
    }
    return 0;   
}