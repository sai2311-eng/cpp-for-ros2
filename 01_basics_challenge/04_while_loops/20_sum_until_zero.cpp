// 20 - Sum until zero
//
// Keeps reading numbers and adding them up until 0 is entered, then prints
// the total.
//
// Concepts: while loop with a sentinel value (0 means stop)

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number N: ";
    int N;
    cin >> N;
    int sum = 0;
    while (N != 0) {  // 0 is the stop signal
        sum += N;
        cout << "Enter a number N: ";
        cin >> N;  // read the next value before the condition is checked again
    }
    if (N == 0) {  // always true here: the loop only ends when N is 0
    cout << "Sum of numbers: " << sum << "\n";
        }   
        return 0;
    }
