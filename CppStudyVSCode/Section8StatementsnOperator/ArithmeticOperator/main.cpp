
#include <iostream>
// Use selected function from std namespace
using std::cin;
using std::cout;
using std::endl;

int main(){
    
    int num1 {200};
    int num2 {100};

    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    int result {0};

    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    num1 = 10;
    num2 = 3;
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    return 0;
}