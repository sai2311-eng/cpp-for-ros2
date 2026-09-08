#include <iostream>
using namespace std;

int main() {
     int number1, number2, number3, number4, number5;
     int evenCount = 0;
     int oddCount = 0;
     cout << "Enter number 1: ";
     cin >> number1;
     cout << "Enter number 2: ";
     cin >> number2;
     cout << "Enter number 3: ";
     cin >> number3;
     cout << "Enter number 4: ";
     cin >> number4;
     cout << "Enter number 5: ";
     cin >> number5;
    for (int i : {number1, number2, number3, number4, number5}) {
         if (i % 2 == 0) {
                evenCount++;
            }
        else {
            oddCount++;
        }
    }
    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount  << endl;
    return 0;
}