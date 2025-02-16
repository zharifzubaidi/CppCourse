// Vector
#include <iostream>
#include <vector>

// Use selected function from std namespace
using std::cin;
using std::cout;
using std::endl;
using std::vector; // Must include this line to use vector

int main(){
    vector<int> vector1; // When declare new vector, element size start at 0 and value is also zero.
    vector<int> vector2;

    // When add new element to a newly initialized vector, the new element will become the first element of the vector.
    vector1.push_back(10);
    vector1.push_back(20);
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Size of vector1: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Size of vector2: " << vector2.size() << endl;

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "Element at 0,0: " << vector_2d.at(0).at(0) << endl;
    cout << "Element at 0,1: " << vector_2d.at(0).at(1) << endl;
    cout << "Element at 1,0: " << vector_2d.at(1).at(0) << endl;
    cout << "Element at 1,1: " << vector_2d.at(1).at(1) << endl;
    cout << "Size of vector_2d: " << vector_2d.size() << endl;

    vector1.at(0) = 1000;

    cout << "Element at 0,0: " << vector_2d.at(0).at(0) << endl;
    cout << "Element at 0,1: " << vector_2d.at(0).at(1) << endl;
    cout << "Element at 1,0: " << vector_2d.at(1).at(0) << endl;
    cout << "Element at 1,1: " << vector_2d.at(1).at(1) << endl;
    cout << "Size of vector_2d: " << vector_2d.size() << endl;

    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    return 0;
}