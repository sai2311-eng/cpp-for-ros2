#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int N;
    cin >> N;
    int Positivecount = 0;
    int Negativecount = 0;
    while (N != 0) {
        if ( N > 0) {
            Positivecount++;
        }
        else if ( N < 0) {
            Negativecount++;
        }
        cout << "Enter a number: ";
        cin >> N;
    }
    cout << "Number of positive numbers: " << Positivecount << "\n";
    cout << "Number of negative numbers: " << Negativecount << "\n";
    return 0;
}