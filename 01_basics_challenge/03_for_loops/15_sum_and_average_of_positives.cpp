// 15 - Sum and average of positive numbers
//
// Reads five integers and prints the sum and average of only the positive
// ones.
//
// Concepts: adding under a condition, static_cast<double>

#include <iostream>
using namespace std;

int main() {
    int PositiveCount = 0;
    int sum = 0;
    double Average = 0;
    cout << "Enter a number: ";
    int number1, number2, number3, number4, number5;
    cin >> number1 >> number2 >> number3 >> number4 >> number5; 
    for (int i : {number1, number2, number3, number4, number5}) {
        if (i > 0) {
            PositiveCount++;
            sum = sum + i;  // only positives are added (the fix for 14)
        } 
    }
    if (PositiveCount == 0) {
            cout << "There are no positive numbers in the input.\n";
        } else {
            cout << "Sum of positive numbers: " << sum << "\n";
    Average = static_cast<double>(sum) / PositiveCount;  // convert before dividing to keep the decimals
    cout << "Average of positive numbers: " << Average << "\n";
        }
    return 0;
}