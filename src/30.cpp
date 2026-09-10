# include <iostream>

int main() {
    std::cout << "Enter a positive number N: ";
    int N;
    std::cin >> N;
    std::cout << "Enter a digit D to search for: ";
    int D;
    std::cin >> D;
    int  count = 0;
    while (N > 0) {
        int digit = N % 10;
        if (digit == D) {
            count++;
        }
        N /= 10;
    }
    std::cout << "The digit " << D << " appears " << count << " times in the number." << std::endl;
    return 0;
}