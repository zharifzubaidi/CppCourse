
#include <iostream>
// Use selected function from std namespace
using std::cin;
using std::cout;
using std::endl;

int main(){
    
    const double usd_per_eur {1.19};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";
    double euros {0.0};
    double dollars {0.0};
    cin >> euros;

    dollars = euros * usd_per_eur;

    cout << "The value in USD is: " << dollars << endl;
    cout << endl;
    
    return 0;
}