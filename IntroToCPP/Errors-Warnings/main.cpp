#include <iostream>

using namespace std;

int main() {
    // Compile time error
    cout << "Hello, World!" << endl;
    // Now if I wanted to create a compile time error then I would use the following line:
    // cout << "This line will cause a compile time error" << endl 
    // Notice how there is no semi colon at the end of the line above.

    // Runtime error
    cout << 8/2 << endl;
    // Now if I wanted to create a runtime error then I would use the following line:
    // cout << 8/0 << endl;
    // Notice how this line will cause a runtime error because we are trying to divide by zero.
    // Now most IDEs are smart and C++ jumps over this by giving you a result of 1 or 0, depending on how you divide
    return 0;
}