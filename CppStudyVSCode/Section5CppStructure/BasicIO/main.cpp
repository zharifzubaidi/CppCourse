// Section 5
// Basic IO using cin and cout
#include <iostream>

// Declaring standard namespace qualified names for the main.cpp file to 
// avoid import all the std namespace. This is the best practice.
using std::cin;
using std::cout;
using std::endl;

int main(){
    // cout << "Hello World!" << endl;

    // cout << "Hello ";
    // cout << "World!" << endl;

    // add new line using endl or \n
    // cout << "Hello World!" << endl;
    // cout << "Hello" << " World!" << endl;
    // cout << "Hello" << " World!\n";
    // cout << "Hello\nOut\nThere\n";

    // int num1 = 0;
    // int num2 = 0;
    // int num3 = 0;
    // Input
    // cout << "Enter first integer: ";
    // cin >> num1;
    // cout << "Your first integer is " << num1 << endl;

    // cout << "Enter second integer: ";
    // cin >> num2;
    // cout << "Your second integer is " << num2 << endl;

    // // Process
    // num3 = num1 + num2;

    // // Output
    // cout << "The sum of " << num1 << " and " << num2 << " is " << num3 << endl;


    double num1 = 0;
    double num2 = 0;
    double num3 = 0;

    // Input
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Your first integer is " << num1 << endl;

    cout << "Enter second integer: ";
    cin >> num2;
    cout << "Your second integer is " << num2 << endl;

    // Process
    num3 = num1 + num2;

    // Output
    cout << "The sum of " << num1 << " and " << num2 << " is " << num3 << endl;

    return 0;
}