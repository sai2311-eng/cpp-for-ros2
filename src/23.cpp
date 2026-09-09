#include<iostream>
using namespace std;

int main() {
    cout << "Enter a Positive number N: ";
    int N;
    cin >> N;
    int sum = 0;
    int digit = 0;
    int count = 0;
    while ( N > 0) {
        digit = N % 10;
        sum += digit;
        N /= 10;
        count += 1;

    } 
    cout << "Sum of digits: " << sum << "\n";
    cout << "Number of digits: " << count << "\n";
    return 0;
}