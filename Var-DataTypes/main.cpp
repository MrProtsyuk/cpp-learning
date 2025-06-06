#include <iostream>

/* 
    int: meant for standard integer numbers
    double: meant for floating point numbers with double precision
    float: meant for floating point numbers with less precision than double
    char: meant for single characters
    string: meant for sequences of characters (text)
    bool: meant for boolean values (true or false)
    void: meant for functions that do not return a value
    auto: used for type inference, allowing the compiler to deduce the type of a variable from its initializer
*/

using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " + name + " very glad you could join us today." << endl;
    return 0;
}