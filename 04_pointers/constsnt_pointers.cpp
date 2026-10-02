#include <iostream>

int main()
{
    int x { 5 };
    int y { 10 };

    // =========================================================
    // 1. NORMAL POINTER
    // =========================================================

    int* ptr0 { &x };

    // int* ptr0:
    // - ptr0 can change its address
    // - ptr0 can change the value at that address

    *ptr0 = 6;       // ✅ Change x to 6
    ptr0 = &y;       // ✅ Make ptr0 point to y
    *ptr0 = 11;      // ✅ Change y to 11


    // =========================================================
    // 2. POINTER TO CONST VALUE
    // =========================================================

    const int* ptr1 { &x };

    // const int* ptr1:
    // - ptr1 can change its address
    // - ❌ cannot change the value through ptr1
    //
    // const is BEFORE the *
    // Therefore, the VALUE being pointed to is const
    //
    // *ptr1 = 20;   // ❌ ERROR
    ptr1 = &y;       // ✅ Can point to another variable


    // =========================================================
    // 3. CONST POINTER
    // =========================================================

    int* const ptr2 { &x };

    // int* const ptr2:
    // - ❌ ptr2 cannot change its address
    // - ✅ can change the value through ptr2
    //
    // const is AFTER the *
    // Therefore, the POINTER itself is const

    *ptr2 = 20;      // ✅ Change x to 20

    // ptr2 = &y;    // ❌ ERROR
    // ptr2 cannot point somewhere else


    // =========================================================
    // 4. CONST POINTER TO CONST VALUE
    // =========================================================

    const int* const ptr3 { &x };

    // const int* const ptr3:
    //
    // First const:
    // → value is const
    //
    // Second const:
    // → pointer is const
    //
    // Therefore:
    // ❌ Cannot change the address
    // ❌ Cannot change the value through ptr3

    // *ptr3 = 30;   // ❌ ERROR
    // ptr3 = &y;    // ❌ ERROR


    // =========================================================
    // SUMMARY
    // =========================================================

    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';


    return 0;
}