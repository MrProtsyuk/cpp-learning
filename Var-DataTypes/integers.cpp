#include <iostream>

using namespace std;

/*
    Integers: Store decimal numbers and typically use 4 bytes (32 bits) of memory.
    Once again, a variable is a named storage location in memory that can hold a value.
*/

// This will declare a var but contain a garbage value, zero
int num1; // Declaration without initialization

// This will declare a value but initialize it to 0
int num2 = 0; // Declaration with initialization to zero

// This will declare a value and initialize it to 10
int num3 = 10; // Declaration with initialization to 10

// You can use expressions in initialization
int num4 = num2 + num3; // num4 will be initialized to 10 (0 + 10)

// You cannot use doubles for integers, this will cause a compilation error
// If you do put a float in an integer like this => (10.5), it will be truncated to 10
int num5 = (10.5); // This will be truncated to 10; Raises a warning in the compiler


int main() {
    // Output of num1
    cout << "The value of num1 is: " << num3 << endl; // Output: The value of num4 is: 10

    // Code below shows us the size of an integer in memory
    cout << "This is the size of int in memory: " << sizeof(int) << " bytes" << endl; // Output: This is the size of int in memory: 4 bytes
    cout << "This is the size of num4 in memory: " << sizeof(num4) << " bytes" << endl; // Output: This is the size of num4 in memory: 4 bytes
    return 0;
}