#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;    // size 0 
    
    vector<int> vec2 = {1, 2, 4, 4};
    cout << vec2[1] << endl; // Accessing element at index 1

    vector<int> vec3(4, 0);
    // cout << vec3[0];
    // cout << vec3[1];
    // cout << vec3[2];
    // cout << vec3[3];
    for(int i : vec3) {
        cout << i << " " << endl;
    }

    vector<char> vec4 = {'a', 'b', 'c', 'd'};
    for(char i : vec4) {
        cout << i << " " << endl;
    }

    vector<int> vec5 = {'a', 'b', 'c', 'd'};
    for(int i : vec5) {
        cout << i << " " << endl; // ASCII values of characters
    }


    return 0;
}