#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number N: ";
    int N;
    cin >> N;
    int largest = N;
    while (N != 0) {
        if (N > largest) {
            largest = N;
        }
        cout << "Enter a number N: ";
        cin >> N;
    }
    cout << "Largest number: " << largest << "\n";
    return 0;
}