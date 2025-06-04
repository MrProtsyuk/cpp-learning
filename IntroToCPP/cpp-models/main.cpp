/*
    MODELS: Execution and Memory

    We cannot open our executatble because is binary and meant to be read by programs
    Why Binary, binary is easily understandable by your CPU.
    Your program is stored in storage and is waiting for you to run it.
    When you run it, the operating system loads it into memory (RAM) and starts executing it.
    The CPU will start running it statement by statement.
    The CPU looks at the statment and determines if it needs to print to the console or allocate memory for variables.
    For Functions, CPU allocates special memory for our functions and stores the return address so it knows where to come back.

    Why do we need this?
    Because we need to understand how our code is executed and how memory is managed.
    Some C++ features like pointers and references are closely related to how memory is managed.
*/

#include <iostream>

using namespace std;

// Function to add two numbers, loaded into memory
int multiply(int a, int b) {
    return a * b;
}

// Function to subtract two numbers, loaded into memory
int main(int argc, char* argv[]) {
    // Variables loaded into memory
    int a;
    int b;

    // Print statement executed
    cout << "Please enter two numbers (Sperated by a space)." << endl;
    // Input from user, stored in memory
    cin >> a >> b;

    // Call to multiply function, which is also loaded into memory
    int result = multiply(a, b);
    // Print the result, executed by CPU
    cout << "The result of " << a << " * " << b << " is: " << result << endl;
    return 0;
}