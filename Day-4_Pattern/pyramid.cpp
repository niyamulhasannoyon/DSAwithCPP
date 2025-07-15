#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    char ch = 'A';
    cin >> n;

    for (int i = 0; i < n; i++) {
        //* 1. Print Spaces
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        //* 2. Print Number
        for(int j = 1; j <= i+1; j++) {
            cout << j;
        }
        //* 3. Print second set of numbers
        for(int j = i; j > 0; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
// 4
//    1
//   121
//  12321
// 1234321