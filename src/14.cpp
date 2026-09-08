#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3, number4, number5;
    int postiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    cout << "Enter five numbers: ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;
    for (int i : {number1, number2, number3, number4, number5}) {
        int number = i;
        if (number > 0) {
            postiveCount++;
        } else if (number < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }
    cout << "Positive: " << postiveCount << "\n";
    cout << "Negative: " << negativeCount << "\n";
    cout << "Zero: " << zeroCount << "\n";
    int sum = number1 + number2 + number3 + number4 + number5;
    if (postiveCount > 0) {
        cout << "Average of positive numbers: " << (double)sum / postiveCount << "\n";
    } else {
        cout << "There are no positive numbers in the input.\n";
    }
    return 0;


}