#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    // Declare and initialise the variables
    double room_width {0};
    double room_length {0};
    double room_area {0};

    // Input
    cout << "Enter the width of the room (cm): ";
    cin >> room_width;
    cout << "Enter the length of the room (cm): ";
    cin >> room_length;

    // Process
    room_area = room_width * room_length;

    // Output
    cout << "The area of the room is " << room_area << " square centimeters." << endl;

    return 0;
}