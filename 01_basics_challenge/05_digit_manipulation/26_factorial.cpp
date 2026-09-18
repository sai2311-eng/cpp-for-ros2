// 26 - Factorial
//
// Reads N and prints N! = N x (N-1) x ... x 1.
//
// Concepts: counting-down while loop, std:: prefix instead of using
//           namespace std
//
// FIXED: int overflowed above 12! (13! = 6,227,020,800, but int stops at
//        2,147,483,647), so 13 printed 1932053504. The result is now a long
//        long, which holds up to 20!, and input outside 0-20 is rejected.

#include <iostream>

int main() {
    std::cout << "Enter a non-negative integer N: ";
    int N;
    std::cin >> N;
    if (N < 0 || N > 20) {  // 21! is too big even for long long
        std::cout << "Please enter a number from 0 to 20." << std::endl;
        return 1;
    }
    long long factorial = 1;  // int overflows after 12!
    while ( N > 1) {
        factorial *= N;  // multiply in N, then N-1, and so on
        N--;
    }
    std::cout << "Factorial: " << factorial << std::endl;
    return 0;   
}