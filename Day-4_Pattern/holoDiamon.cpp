#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    //? Top Half
    for (int i = 0; i < n; i++) {
        //* Print leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*"; // First star

        if(i != 0) { 
            //* Print spaces inside the hollow part
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*"; // Second star
        }
        cout << endl;
    }

    //? Bottom Half
    for(int i = n - 2; i >= 0; i--) { // Start from second last row
        //* Print leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*"; // First star

        if(i != 0) { 
            //* Print spaces inside the hollow part
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*"; // Second star
        }
        cout << endl;
    }

    return 0;
}

//! 4
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *