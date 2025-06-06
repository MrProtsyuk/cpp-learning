#include <iostream>

/* 
    The way the computer takes the data and reads it is by using number systems
    The most common number systems are:
    1. Decimal (Base 10): Uses digits 0-9.
    2. Binary (Base 2): Uses digits 0 and 1, commonly used in computing.
    3. Hexadecimal (Base 16): Uses digits 0-9 and letters A-F (10-15), often used in programming and computer science.
       Hexadecimal numbers help represent binary data in a more compact and readable form.
       => Example, 0x1A3F represents the decimal number 6719.
    4. Octal (Base 8): Uses digits 0-7, less common but still used in some computing contexts.
       => Example, 0754 represents the decimal number 493.
    Padding is a technique used to ensure that numbers are represented in a consistent width, often used in formatting output.
    How do we represent numbers in C++?
*/

int num1 = 15; // Decimal representation
int num2 = 0b1111; // Binary representation (C++14 and later)
int num3 = 0xF; // Hexadecimal representation
int num4 = 017; // Octal representation (C++11 and earlier)

using namespace std;

int main() {
    cout << "Decimal: " << num1 << endl; // Output: 15
    cout << "Binary: " << num2 << endl; // Output: 15
    cout << "Hexadecimal: " << num3 << endl; // Output: 15
    cout << "Octal: " << num4 << endl; // Output: 15
    return 0;
}