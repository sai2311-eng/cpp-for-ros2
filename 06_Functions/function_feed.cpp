#include<iostream>

int get_wheel_count() {
    return 4;
}

int main() {
    int wheels = get_wheel_count();
    std::cout << "A car has " << wheels << " Wheels.\n";
    return 0;
}
