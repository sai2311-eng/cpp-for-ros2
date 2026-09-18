// 26 - Factorial
//
// Reads N and prints N! = N x (N-1) x ... x 1.
//
// Concepts: counting-down while loop, std:: prefix instead of using
//           namespace std
//
// NOTE: int overflows above 12! (13! = 6,227,020,800, but int stops at
//       2,147,483,647), so larger N prints a wrong number. long long would
//       work up to 20!.

#include <iostream>

int main() {
    std::cout << "Enter a non-negative integer N: ";
    int N;
    std::cin >> N;
    int factorial = 1;
    while ( N > 1) {
        factorial *= N;  // multiply in N, then N-1, and so on
        N--;
    }
    std::cout << "Factorial: " << factorial << std::endl;
    return 0;   
}