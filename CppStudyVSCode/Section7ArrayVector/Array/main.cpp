// Arrays
#include <iostream>
// Use selected function from std namespace
using std::cin;
using std::cout;
using std::endl;

int main(){
    // First example (Declare array and initialize it)
    // char vowels[]{'a', 'e', 'i', 'o', 'u'};
    // cout << "\nThe first vowel is: " << vowels[0] << endl;
    // cout << "The last vowel is: " << vowels[4] << "\n" << endl;

    // Second example (Array element changes)
    // double hi_temps[]{90.1, 89.8, 77.5, 81.6};
    // cout << "The first high temperature is: " << hi_temps[0] << endl;
    // hi_temps[0] = 100.7; // set the first element in hi_temps to 100.7
    // cout << "The first high temperature is now: " << hi_temps[0] << endl;

    // Third example
    int test_scores[5]{}; // If we don't initialize the array, the elements will be random
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nThe updated array is: " << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nNotice what the value of the array name is: "<< test_scores << endl;
    // The value of array memory address in hexadecimal.

    
    return 0;
}