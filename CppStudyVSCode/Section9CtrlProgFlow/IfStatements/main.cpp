// Section 9
// If Statement
#include <iostream>
#include <vector>

// Use selected function from std namespace
using std::cin;
using std::cout;
using std::endl;
using std::vector; // Must include this line to use vector

int main(){
    //Variable declaration
    int num {};
    const int min {10};
    const int max {100};

    // Input
    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    // Processing
    if (num >= min)
        cout << num << "is greater than " << min << endl;

    // Output


    return 0;
}