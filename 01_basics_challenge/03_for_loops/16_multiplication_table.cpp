#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int number;
    cin >> number;
    for (int i = 1 ; i <= 10 ; i++) {
        cout << number << " X " << i << " = " << number * i << "\n";
    }
    return 0;
}