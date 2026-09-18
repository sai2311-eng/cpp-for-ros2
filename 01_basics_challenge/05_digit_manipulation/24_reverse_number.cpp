// 24 - Reverse a number
//
// Reads a positive number and prints it with the digits reversed (1234 ->
// 4321).
//
// Concepts: building a number digit by digit

#include <iostream> 
using namespace std;

int main() {
    cout << "Enter a postive number N: ";
    int N;
    cin >> N;   
    int digit;
    int Reverse = 0;
    while ( N > 0) {
        digit = N % 10;  // take the last digit
        N /= 10;
        Reverse = Reverse*10;  // shift the digits so far one place left
        Reverse += digit;  // put the new digit on the right
    } 
    cout << "Reversed number: " << Reverse << "\n";
    return 0;
}