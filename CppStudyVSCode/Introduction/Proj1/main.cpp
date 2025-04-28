#include <iostream>
// using namespace std; //Will use std namespace for all the functions especially cout and cin
// Use Ctrl+Shift+B to build and generate the exe file.

// This is where Cpp main execution starts.The only main function.
int main() {
    // Variables
    int number = 0;
    // Output to console
    std::cout << "What is your favourite number? " << std::endl;
    // Receiving input from console
    std::cin >> number;

    std::cout << "That is my favourite number too. " << std::endl;

    return 0;
}