// A statement is a basic unit of computation in c++.
// It is the smallest standalone element of a program that expresses some action to be carried out.
// Statements must end with a semicolon. (;)
// Statements are executed from top to bottom.

// A Function is a block of code that performs a specific task.
// You must first decare the return type, name of the function, and parameters (if any).
// Functions are reusable and can be called multiple times in a program.

#include <iostream>

using namespace std;

// This function takes two integers as parameters and returns their sum, therefore the return type is int.
int addNumbers(int firstNumber, int secondNumber) {
    // This function takes two integers as parameters and returns their sum.
    return firstNumber + secondNumber;
}

// This function will represent an examples of statments in C++, the return type is int because there is nothing in return so we use 0.
int main(int argc, char *argv[]) {
    // This is a statement that prints a message to the console.
    cout << "This lesson goes over statements and function in c++." << endl;

    // This statement declares an integer variable named firstNumber and initializes it to 10.
    int firstNumber = 10; 
    // This statement declares another integer variable named secondNumber and initializes it to 20.
    int secondNumber = 20; 

    // This statement calculates the sum of two numbers, using the addNumbers function defined above.
    int sum = addNumbers(firstNumber, secondNumber);
    
    // This statement prints the result of the sum to the console.
    cout << "The sum of " << firstNumber << " and " << secondNumber << " is: " << sum << endl;

    // This statement returns 0, indicating that the program has executed successfully.
    return 0;
}