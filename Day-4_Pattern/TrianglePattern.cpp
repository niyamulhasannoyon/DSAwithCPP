#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){   //* N lines
        for(int j = 0; j < i+1; j++) {  //*Inner loop << 1 single row
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}

// 3

// * 
// * * 
// * * * 