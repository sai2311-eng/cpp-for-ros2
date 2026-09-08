#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3, number4, number5;
    int i = 0;
    int largest;
    largest = number1;
    cout << "Enter number1: ";
    cin >> number1;
    cout << "Enter number2: ";
    cin >> number2;
    cout << "Enter number3: ";
    cin >> number3;
    cout << "Enter number4: ";
    cin >> number4;
    cout << "Enter number5: ";
    cin >> number5;
    for (int i : {number1, number2, number3, number4, number5}) {
        if ( i > largest ) {
            largest = i;
        }
    }
    cout << "Largest: " << largest << endl;
        
        return 0;
    }
