#include <iostream>
#include <iomanip>  // Required for setprecision()

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;   

// Constant variable
// Declared constant style
const double price_per_room{150.50};
const double sales_tax{0.06};

int main(){
    int number_of_rooms{0};
    // Set decimal precision to 2
    cout << fixed << setprecision(2);
    cout << "Zharif's Carpet Cleaning Service" << endl;
    cout << "Charges RM" << price_per_room <<  " per room" << endl;
    cout << "Sales tax rate is 6%" << endl;
    cout << "Estimates are valid for 30 days" << endl;

    cout << "Please enter number room you would like to clean: " << endl;
    cin >> number_of_rooms;

    cout << "Cost estimation for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: RM30" << endl;
    cout << "Cost: RM" << number_of_rooms * price_per_room << endl;
    cout << "Tax: RM" << number_of_rooms * price_per_room * sales_tax<< endl;
    cout << "====================================" << endl;
    cout << "Total estimate: RM" << number_of_rooms * price_per_room + number_of_rooms * price_per_room * sales_tax << endl;
    cout << "This estimate is valid for 30 days" << endl;

    return 0;
}