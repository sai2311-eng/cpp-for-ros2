// 06 - Grade from marks
//
// Reads marks and prints a letter grade: A (90+), B (80+), C (70+), D (60+),
// otherwise F.
//
// Concepts: else-if chain; the first true condition wins, so the order
//           matters

#include <iostream> 
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 80) {  // only checked if marks < 90, so this means 80-89
        cout << "Grade: B" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: D" << endl;
    }
    else{
        cout << "Grade: F" << endl;
    }
    return 0;
}