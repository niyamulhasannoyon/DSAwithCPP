#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {  // Start i from 1 (not 0)
        for (int j = 1; j <= i+1; j++) {  // j should run up to i
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
// 4
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 