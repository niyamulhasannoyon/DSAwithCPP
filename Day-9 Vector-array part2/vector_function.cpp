#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec = {1, 2, 4, 4};

    for( int i : vec) {
        cout << i << " "; // Printing elements of the vector
    }
    cout << endl;

    //? Size of vector
    cout << "Size of vec: " << vec.size() << endl; // Size of vector

    //? Push back of vector
    vec.push_back(5); // Adding an element to the end of the vector
    cout << "Size of vec after push_back: " << vec.size() << endl; // Size after adding an element

    for( int i : vec) {
        cout << i << " "; // Printing elements of the vector
    }
    cout << endl;

    //? Pop back of vector
    vec.pop_back(); // Removing the last element

    for( int i : vec) {
        cout << i << " "; // Printing elements of the vector
    }
    cout << endl;

    //? front & back of vector
    cout << vec.front() << endl; // Accessing the first element of the vector
    cout << vec.back() << endl;  // Accessing the last element of the vector

    //? Insert in vector
    vector<int> vec2;
    vec2.push_back(1);
    vec2.push_back(2);
    vec2.push_back(3);
    vec2.push_back(4);

    cout << "Size of vec after push_back: " << vec2.size() << endl;
    for( int i : vec2) {
        cout << i << " "; // Printing elements of the vector
    }
    cout << endl;

     //? front & back of vector
    cout << vec2.front() << endl; // Accessing the first element of the vector
    cout << vec2.back() << endl;  // Accessing the last element of the vector

    cout << endl;

    cout << vec2.at(1) << endl; // Accessing the first element using at()

    return 0;
}