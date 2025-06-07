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
//int num5 = (10.5); // This will be truncated to 10; Raises a warning in the compiler


/*
    Integer Modifiers: You apply modifiers to integers to change their size or signedness.
    1. Signed: Can hold both positive and negative values (default).
    2. Unsigned: Can only hold non-negative values, effectively doubling the maximum value it can store.
    3. Short: Typically uses 2 bytes (16 bits) of memory, can be signed or unsigned.
    4. Long: Typically uses 8 bytes (64 bits) of memory, can be signed or unsigned.
*/

// Example of signed and unsigned integers
unsigned int num6 = 20; // Unsigned integer, can only hold non-negative values

// This will throw an err in the compiler
// unsigned int num7 = -5; // Error: cannot assign negative value to unsigned int

signed int num7 = -5; // Signed integer, can hold negative values

// Example of short and long integers
short int num8 = 1000; // Short integer, typically uses 2 bytes
long int num9 = 1000000; // Long integer, typically uses 8 bytes
// You can also use the 'short' and 'long' keywords without 'int'


int main() {
    // Output of num1
    cout << "The value of num1 is: " << num3 << endl; // Output: The value of num4 is: 10

    // Code below shows us the size of an integer in memory
    cout << "This is the size of int in memory: " << sizeof(int) << " bytes" << endl; // Output: This is the size of int in memory: 4 bytes
    cout << "This is the size of num4 in memory: " << sizeof(num4) << " bytes" << endl; // Output: This is the size of num4 in memory: 4 bytes

    // Output of signed and unsigned integers
    cout << "The value of num6 (unsigned int) is: " << num6 << endl; // Output: The value of num6 (unsigned int) is: 20
    cout << "The value of num7 (signed int) is: " << num7 << endl; // Output: The value of num7 (signed int) is: -5

    // Output of short and long integers and their size in memeory
    cout << "The value of num8 (short int) is: " << num8 << endl; // Output: The value of num8 (short int) is: 1000
    cout << "The value of num9 (long int) is: " << num9 << endl; // Output: The value of num9 (long int) is: 1000000
    cout << "This is the size of short int in memory: " << sizeof(short int) << " bytes" << endl; // Output: This is the size of short int in memory: 2 bytes
    cout << "This is the size of long int in memory: " << sizeof(long int) << " bytes" << endl; // Output: This is the size of long int in memory: 8 bytes

    return 0;
}