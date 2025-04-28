#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    // Primitive types
    // Character type initialisation
    char middle_initial{'A'};
    cout << "My middle initial is: " << middle_initial << endl;

    // Integer type initialisation
    unsigned short exam_score{55}; // unsigned short int
    cout << "My exam score was: " << exam_score << endl;
    // C++14 allow us to use single quotes for integers
    // If we use regular initialisation instead of list initialization, 
    // we will get an overflow error if we use this value for long type.
    // List initialisation can catch the overflow error and inform use during compile time.
    long long people_on_earth{7'600'000'000}; // List initialisation
    // long people_on_earth2 = 7'600'000'000; // Regular initialisation
    cout << "There are about " << people_on_earth << " people on earth." << endl;

    // Floating point type initialisation
    float car_payment{401.23};
    cout << "My car payment is: " << car_payment << endl;

    double pi{3.14159};
    cout << "PI is: " << pi << endl;

    long double large_amount{2.7e120};
    cout << "Large amount is: " << large_amount << endl;

    // Boolean type initialisation
    bool game_over{false};
    cout << "The value of game_over is: " << game_over << endl;

    // Overflow example
    short value1{30000};
    short value2{1000};
    short product{value1 * value2}; // Overflow error here due to value too large. It will restart the value based on the data type.
    cout << "The product of " << value1 << " and " << value2 << " is: " << product << endl;


    return 0;
}