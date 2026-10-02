#include <iostream>

// This function accepts a pointer because "no number" is allowed.
// A reference would not work here because references cannot be null.
void printNumber(const int* number)
{
    // A pointer converts to false when it is nullptr.
    if (number)
    {
        // Safe: number is not null.
        // *number means "the value at the address stored in number".
        std::cout << "Number: " << *number << '\n';
    }
    else
    {
        std::cout << "No number was provided.\n";
    }
}

int main()
{
    // {} value-initializes the pointer.
    // ptr is a null pointer: it points to nothing.
    int* ptr {};

    // nullptr is the modern C++ null-pointer literal.
    // int* ptr { nullptr }; would do the same thing.

    printNumber(ptr); // prints "No number was provided."

    int value { 5 };

    // &value means "the address of value".
    // ptr now stores value's address, so it points to value.
    ptr = &value;

    printNumber(ptr); // prints 5

    // *ptr means "the object at the address held by ptr".
    // Since ptr points to value, this changes value itself.
    *ptr = 10;

    std::cout << "value: " << value << '\n'; // prints 10
    printNumber(ptr);                         // prints 10

    // ptr now points to nothing again.
    ptr = nullptr;

    // Never do this:
    // std::cout << *ptr << '\n';
    // It dereferences a null pointer and causes undefined behavior.

    printNumber(ptr); // safely prints "No number was provided."

    /*
    DANGEROUS DANGLING-POINTER EXAMPLE -- DO NOT UNCOMMENT:

    int* danglingPtr {};

    {
        int temporaryValue { 42 };
        danglingPtr = &temporaryValue;
    } // temporaryValue is destroyed here

    // danglingPtr is non-null, but invalid!
    // if (danglingPtr) would be true.
    // std::cout << *danglingPtr; // undefined behavior

    If an object is destroyed, pointers to it do NOT automatically become nullptr.
    Set such pointers to nullptr yourself when they are no longer valid.
    */

    /*
    OLD STYLES -- AVOID:

    int* oldPtr1 { 0 };
    int* oldPtr2 { NULL };

    Modern C++ uses:
    int* goodPtr { nullptr };
    */

    return 0;
}