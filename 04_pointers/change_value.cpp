#include <iostream>

int main()
{
    // =========================================================
    // STEP 1: Create two normal variables
    // =========================================================

    int x { 10 };
    int y { 20 };

    // x contains 10
    // y contains 20


    // =========================================================
    // STEP 2: Create a pointer and make it point to x
    // =========================================================

    int* ptr { &x };

    // &x  -> gets the address of x
    // ptr -> stores the address of x
    // *ptr -> gives the value stored at that address
    //
    // Currently:
    //
    // ptr ───────→ x
    //              10
    //
    // y
    // 20


    std::cout << "Initially:\n";
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "*ptr = " << *ptr << '\n';


    // =========================================================
    // STEP 3: Move the pointer from x to y
    // =========================================================

    ptr = &y;

    // IMPORTANT:
    // We are NOT changing x or y.
    //
    // We are only changing WHERE ptr points.
    //
    // Before:
    //
    // ptr ───────→ x
    //              10
    //
    // After:
    //
    // ptr ───────→ y
    //              20
    //
    // x is still 10
    // y is still 20


    std::cout << "\nAfter ptr = &y:\n";
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "*ptr = " << *ptr << '\n';


    // =========================================================
    // STEP 4: Change the value through the pointer
    // =========================================================

    *ptr = 10;

    // ptr is currently pointing to y.
    //
    // Therefore:
    //
    // *ptr = 10
    //
    // means:
    //
    // "Go to the address stored in ptr
    //  and change the value there to 10."
    //
    // Since ptr points to y:
    //
    // y changes from 20 → 10
    //
    // x remains 10.
    //
    // Final:
    //
    // x = 10
    // y = 10
    //
    // ptr ───────→ y
    //              10


    std::cout << "\nAfter *ptr = 10:\n";
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "*ptr = " << *ptr << '\n';


    return 0;
}