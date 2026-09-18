// 07 - Leap year
//
// Reads a year and prints whether it is a leap year. Rule: divisible by 400,
// or divisible by 4 but not by 100.
//
// Concepts: %, && and ||, operator precedence

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    // && is evaluated before ||, so this reads as: (divisible by 400) ||
    // (divisible by 4 && not by 100). Brackets around the && part would make
    // that explicit and silence g++'s -Wparentheses warning.
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
      cout << "Leap year" << endl;
    }
    else {
      cout << "Not a leap year" << endl;
    }
    return 0;   
}