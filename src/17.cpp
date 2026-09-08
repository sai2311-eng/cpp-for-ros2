#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number N: ";
    int N;
    int Multiples = 0;
    cin >> N;
    for (int i = 1 ; i <= N ; i++) {
        if ( i % 3 == 0) {
            Multiples++;
            cout << i << " ";
        }

    }
    cout << "multiples of 3: " << Multiples << "\n";
}