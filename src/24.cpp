#include <iostream> 
using namespace std;

int main() {
    cout << "Enter a postive number N: ";
    int N;
    cin >> N;   
    int digit;
    int Reverse = 0;
    while ( N > 0) {
        digit = N % 10;
        N /= 10;
        Reverse = Reverse*10;
        Reverse += digit;
    } 
    cout << "Reversed number: " << Reverse << "\n";
    return 0;
}