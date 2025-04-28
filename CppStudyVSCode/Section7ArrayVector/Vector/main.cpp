// Vector
#include <iostream>
#include <vector>

// Use selected function from std namespace
using std::cin;
using std::cout;
using std::endl;
using std::vector; // Must include this line to use vector

int main(){
    // First example (Declare vector and initialize it)
    // vector<char> vowels; // empty
    // vector<char> vowels(5); // declare five elements and initialize them to 0
    // vector<char> vowels{'a','e','i','o','u'};
    // cout << vowels[0] << endl;
    // cout << vowels[4] << endl;

    // Second example
    // vector<int> test_scores; // empty
    // vector<int> test_scores(3); // declare three elements and initialize them to 0
    // vector<int> test_scores(3, 100); // declare three elements and initialize them to 100
    // vector<int> test_scores{100, 98, 89};
    // Using array syntax to access vector elements but no bounds check
    // cout << "\nTest scores using array syntax:" << endl;
    // cout << test_scores[0] << endl;
    // cout << test_scores[1] << endl;
    // cout << test_scores[2] << endl;
    // Using vector syntax to access vector elements with bounds check
    // cout << "\nTest scores using vector syntax:" << endl;
    // cout << test_scores.at(0) << endl;
    // cout << test_scores.at(1) << endl;
    // cout << test_scores.at(2) << endl;
    // To get vector size
    // cout << "There are " << test_scores.size() << " scores in the vector" << endl;
    // Add new score
    // cout << "Enter a new score to add to the vector: ";
    // cin >> test_scores.at(0);
    // cin >> test_scores.at(1);
    // cin >> test_scores.at(2); 
    // Display new scores
    // cout << "\nUpdated test scores:" << endl;
    // cout << test_scores.at(0) << endl;
    // cout << test_scores.at(1) << endl;
    // cout << test_scores.at(2) << endl;

    // Third example
    // Adding/appending new element to the end of the vector (dynamic array)
    // cout << "\nAdding new score to the end of the vector: " << endl;
    // int score_to_add{0};
    // cin >> score_to_add;
    // test_scores.push_back(score_to_add); // Will add new element and increase vector size by 1
    // cout << "\nEnter one more new score to the end of the vector: " << endl;
    // cin >> score_to_add;
    // test_scores.push_back(score_to_add);

    // cout << "New test scores:" << endl;
    // cout << test_scores.at(0) << endl;
    // cout << test_scores.at(1) << endl;
    // cout << test_scores.at(2) << endl;
    // cout << test_scores.at(3) << endl;
    // cout << test_scores.at(4) << endl;
    // cout << "There are now " << test_scores.size() << " scores in the vector" << endl;

    // Fourth example
    // 2 dimensional vector
    vector<vector<int>> movieratings{
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };

    cout << "\nMovie ratings for reviewer #1 using array syntax:" << endl;
    cout << movieratings[0][0] << endl;
    cout << movieratings[0][1] << endl;
    cout << movieratings[0][2] << endl;
    cout << movieratings[0][3] << endl;

    cout << "\nMovie ratings for reviewer #1 using vector syntax:" << endl;
    cout << movieratings.at(0).at(0) << endl;
    cout << movieratings.at(0).at(1) << endl;
    cout << movieratings.at(0).at(2) << endl;
    cout << movieratings.at(0).at(3) << endl;

    return 0;
}