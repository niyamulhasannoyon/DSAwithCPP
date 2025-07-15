#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){ //* N lines
        char ch = 'A' + i; //* Convert row number to character
        for(int j = 0; j < i+1; j++) {//*Inner loop << 1 single row
            cout << i+1 << " "; //* Print Number
            cout << ch << " "; //* Print character
        }
        cout << endl;
    }

    return 0;
}

// 3

// 1 A 
// 2 B 2 B 
// 3 C 3 C 3 C 