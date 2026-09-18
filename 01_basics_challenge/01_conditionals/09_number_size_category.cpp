#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number <=10) {
        cout << "Small" << endl;
    }
    else if (number <=50) {
        cout << "Medium" << endl;
    }
    else if (number <=100) {
        cout << "Large" << endl;
    }
    else {
        cout << "Out of range" << endl;
    }
    return 0;
}