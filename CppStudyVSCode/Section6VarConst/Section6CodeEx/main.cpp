#include <iostream>
#include <iomanip>  // Required for setprecision()

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;   

// Constant variable
// Declared constant style
const double price_small_room{25};
const double price_large_room{35};
const double sales_tax{0.06};

int main(){
    int number_small_rooms{0};
    int number_large_rooms{0};
    // Set decimal precision to 2
    cout << fixed << setprecision(2);
    cout << "Zharif's Carpet Cleaning Service" << endl;
    cout << "Charges: " << endl;
    cout << "RM" << price_small_room <<  " per small room" << endl;
    cout << "RM" << price_large_room <<  " per small room" << endl;
    cout << "Sales tax rate is 6%" << endl;
    cout << "Estimates are valid for 30 days" << endl;

    cout << "\nPlease enter number small room you would like to clean: " << endl;
    cin >> number_small_rooms;

    cout << "\nPlease enter number large room you would like to clean: " << endl;
    cin >> number_large_rooms;

    cout << "Cost estimation for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_small_rooms << endl;
    cout << "Price per small room: RM" << price_small_room  << endl;
    cout << "Number of large rooms: " << number_large_rooms << endl;
    cout << "Price per large room: RM" << price_large_room  << endl;
    cout << "Cost: RM" << (number_small_rooms * price_small_room) + (number_large_rooms * price_large_room) << endl;
    cout << "Tax: RM" << ((number_small_rooms * price_small_room) + (number_large_rooms * price_large_room)) * sales_tax << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: RM" << ((number_small_rooms * price_small_room) + (number_large_rooms * price_large_room)) + (((number_small_rooms * price_small_room) + (number_large_rooms * price_large_room)) * sales_tax) << endl;
    cout << "This estimate is valid for 30 days" << endl;

    return 0;
}