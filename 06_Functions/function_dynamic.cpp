#include<iostream>

void show_wheels(int wheels) {
    std::cout << "This Vehicle has " << wheels << " Wheels.\n";
}

int main() {
    show_wheels(4);

    show_wheels(2);

    return 0;
}