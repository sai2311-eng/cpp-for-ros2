#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number N: ";
    int N;
    cin >> N;
    int sum = 0;
    while (N != 0) {
        sum += N;
        cout << "Enter a number N: ";
        cin >> N;
    }
    if (N == 0) {
    cout << "Sum of numbers: " << sum << "\n";
        }   
        return 0;
    }
