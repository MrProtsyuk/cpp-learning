// Input and output is all about reading from and writing to the console.

#include <iostream>

using namespace std;

int main() {
    // Output a simple message to the console
    cout << "Hello, World!" << endl;

    // Output a formatted message
    cerr << "This is an error message." << endl;

    // Output a log message
    clog << "This is a log message." << endl;

    string name;
    int age;

    // Input from the console using cin
    // cout << "Enter your name: ";
    // cin >> name;
    // cout << "Enter your age: ";
    // cin >> age;

    // We can also use cin to get both name and age in one line
    cout << "Enter your name and age (separated by a space): ";
    // You can use >> as many times as needed to read multiple inputs
    cin >> name >> age;


    // Output the input values
    cout << "Your name is " << name << " and you are " << age << " years old." << endl;
    return 0;
}