// Vector
#include <iostream>
#include <vector>

// Use selected function from std namespace
using std::cin;
using std::cout;
using std::endl;
using std::vector; // Must include this line to use vector

int main(){
    // Using modulo operator
    // 1 x seringgit = 100 sen
    // 1 x 50sen = 50 sen
    // 1 x 20sen = 20 sen
    // 1 x 10sen = 10 sen
    // 1 x 5sen = 5 sen
    // 1 x 1sen = 1 sen

    // Declaration
    const int seringgit_value {100};
    const int fiftysen_value{50};
    const int twentysen__value{20};
    const int tensen_value{10};
    const int fivesen_value{5};

    int change_amount {0};

    int balance{}, seringgit{}, fiftysen{}, twentysen{}, tensen{}, fivesen{}, onesen{};

    // Input
    cout << "Enter an amount in cents: ";
    cin >> change_amount;

    // Calculation
    seringgit = change_amount / seringgit_value;
    balance = change_amount - (seringgit * seringgit_value);

    fiftysen = balance / fiftysen_value;
    balance = balance % fiftysen_value;

    twentysen = balance / twentysen__value;
    balance = balance % twentysen__value;

    tensen = balance / tensen_value;
    balance = balance % tensen_value;

    fivesen = balance / fivesen_value;
    balance = balance % fivesen_value;
    
    onesen = balance;


    cout << "You can provide the change as follows:" << endl;
    cout << "Seringgit: " << seringgit << endl;
    cout << "Fifty sen: " << fiftysen << endl;
    cout << "Twenty sen: " << twentysen << endl;
    cout << "Ten sen: " << tensen << endl;
    cout << "Five sen: " << fivesen << endl;
    cout << "One sen: " << onesen << endl;

    return 0;
}