#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number N: ";
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 1 ; i <= N ; i++) {
        if (i % 2 == 0) {
            sum += i ;
        }
    }
    cout << "Sum of even numbers: " << sum << "\n" ;
    return 0;
}