// 17 - Multiples of three
//
// Reads N, prints every multiple of 3 from 1 to N, then how many there were.
//
// Concepts: for loop with an if inside, counting matches

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number N: ";
    int N;
    int Multiples = 0;
    cin >> N;
    for (int i = 1 ; i <= N ; i++) {
        if ( i % 3 == 0) {  // divisible by 3
            Multiples++;
            cout << i << " ";
        }

    }
    cout << "multiples of 3: " << Multiples << "\n";
}