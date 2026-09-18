// 14 - Count positive, negative and zero
//
// Reads five integers, counts the positives, negatives and zeros, then
// prints the average of the positive numbers.
//
// Concepts: several counters, C-style cast (double) to avoid integer
//           division
//
// FIXED: The average added up ALL five numbers, negatives included, but
//        divided by the number of positives, so 4 -4 0 0 0 printed 0 instead
//        of 4. Now only the positive numbers are added, the same fix as
//        exercise 15.

#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3, number4, number5;
    int postiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    int positiveSum = 0;
    cout << "Enter five numbers: ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;
    for (int i : {number1, number2, number3, number4, number5}) {
        int number = i;
        if (number > 0) {
            postiveCount++;
            positiveSum += number;  // only positive numbers go into the average
        } else if (number < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }
    cout << "Positive: " << postiveCount << "\n";
    cout << "Negative: " << negativeCount << "\n";
    cout << "Zero: " << zeroCount << "\n";
    if (postiveCount > 0) {
        cout << "Average of positive numbers: " << (double)positiveSum / postiveCount << "\n";  // cast to double so 7 / 2 gives 3.5, not 3
    } else {
        cout << "There are no positive numbers in the input.\n";
    }
    return 0;


}