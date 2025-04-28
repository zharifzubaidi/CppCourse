// Section 9
// If Else Statement
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
    const int target {10};

    // Input
    cout << "Enter a number and it will be compare to " << target << " : ";
    cin >> num;
    
    // Output
    if(num >= target)
    {
        cout << "\n==================================" << endl;
        cout << num << " is greater than or equal to " << target << endl;
        int diff{num - target};
        cout << num << " is " << diff << " greater than " << target << endl;
    } else {
        cout << "\n==================================" << endl;
        cout << num << " is less than to " << target << endl;
        int diff{target - num};
        cout << num << " is " << diff << " less than " << target << endl;
    }
    
    cout << endl;

    return 0;
}