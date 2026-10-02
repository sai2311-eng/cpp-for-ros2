#include <iostream>

int main() {

    // =========================================================
    // 1. NORMAL VARIABLE
    // =========================================================

    int x = 10;

    // int  -> data type
    // x    -> variable name
    // 10   -> value stored in x


    // =========================================================
    // 2. ADDRESS-OF OPERATOR (&)
    // =========================================================

    // &x means:
    // "Give me the memory address of x"

    std::cout << "Value of x: " << x << '\n';
    std::cout << "Address of x: " << &x << '\n';


    // =========================================================
    // 3. POINTER VARIABLE
    // =========================================================

    int* ptr = &x;

    // int* -> ptr is a pointer to an int
    // ptr  -> pointer variable name
    // &x   -> address of x
    //
    // So we are storing the address of x inside ptr.
    //
    // Conceptually:
    //
    //      x
    //      |
    //      ↓
    //   ┌──────┐
    //   │  10  │
    //   └──────┘
    //      ↑
    //      |
    //    address
    //      |
    //      ↓
    //   ┌──────────┐
    //   │   ptr    │
    //   │  address │
    //   └──────────┘


    // =========================================================
    // 4. PRINTING THE POINTER
    // =========================================================

    // ptr contains the address of x

    std::cout << "Value stored in ptr: " << ptr << '\n';

    // ptr and &x contain the same address

    std::cout << "Address of x using &x: " << &x << '\n';
    std::cout << "Address of x using ptr: " << ptr << '\n';


    // =========================================================
    // 5. DEREFERENCE OPERATOR (*)
    // =========================================================

    // *ptr means:
    // "Go to the address stored inside ptr
    //  and get the value stored there."

    std::cout << "Value pointed to by ptr: " << *ptr << '\n';

    // Since ptr points to x:
    //
    // *ptr gives us the value of x
    //
    // *ptr == x
    //
    // Therefore:
    //
    // *ptr == 10


    // =========================================================
    // 6. CHANGING x THROUGH THE POINTER
    // =========================================================

    *ptr = 20;

    // We went to the address stored in ptr
    // and changed the value there from 10 to 20.
    //
    // Since ptr points to x:
    // x is now also 20.

    std::cout << "New value of x: " << x << '\n';
    std::cout << "New value through ptr: " << *ptr << '\n';


    // =========================================================
    // 7. REFERENCE (DIFFERENT FROM A POINTER)
    // =========================================================

    int& ref = x;

    // ref is a reference (another name/alias for x)
    //
    // ref is NOT storing x's address like ptr does.
    //
    // ref is simply another name for x.

    ref = 30;

    // Changing ref changes x because ref is another name for x.

    std::cout << "Value of x through reference: " << x << '\n';
    std::cout << "Value of ref: " << ref << '\n';


    // =========================================================
    // 8. BITWISE AND (&)
    // =========================================================

    int a = 6;  // Binary: 110
    int b = 3;  // Binary: 011

    int result = a & b;

    // Here & is NOT an address operator.
    // Here & means BITWISE AND.
    //
    //     110   (6)
    //   & 011   (3)
    //   -------
    //     010   (2)
    //
    // So result = 2

    std::cout << "Bitwise AND result: " << result << '\n';


    return 0;
}