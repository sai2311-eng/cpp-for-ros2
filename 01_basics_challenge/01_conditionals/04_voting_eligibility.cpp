// 04 - Voting eligibility
//
// Reads an age and prints whether the person is old enough to vote (18 or
// over).
//
// Concepts: >=, if / else

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {  // 18 itself counts, so >= and not >
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "You are not eligible to vote." << endl;
    }
    return 0;
}