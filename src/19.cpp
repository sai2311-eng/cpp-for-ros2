#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number N: ";
    int N;
    cin >> N;
    int sum = 0;
    for (int i =1 ; i <= N ; i++) {
        if ( i % 3 == 0 && i % 5 == 0) {
            sum += i;
        }
        }
    cout << "Sum of multiples of 3 and 5: " << sum << "\n" ;
    return 0;
    }
