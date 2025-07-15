#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){ //* N lines
        char ch = 'A';
        for(int j = 0; j < n; j++) {//*Inner loop << 1 single row << n characters
            cout << ch << " ";
            ch++; //* Incrementing 'ch' for next row
        }
        cout << endl;
    }

    return 0;
}