// 18 - Sum of even numbers up to N
//
// Reads N and prints the sum of all even numbers from 1 to N.
//
// Concepts: for loop + condition + accumulator

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number N: ";
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 1 ; i <= N ; i++) {
        if (i % 2 == 0) {  // only even numbers are added
            sum += i ;
        }
    }
    cout << "Sum of even numbers: " << sum << "\n" ;
    return 0;
}