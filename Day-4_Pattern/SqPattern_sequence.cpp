#include<iostream>
using namespace std;

int main() {
    int n, num = 1;
    char ch = 'A';
    cin >> n;
    for(int i = 0; i < n; i++){ //* N lines
        for(int j = 0; j < n; j++) {//*Inner loop << 1 single row

            cout << num << " ";//* for number 
            num++; //* Incrementing 'num' for next row

            cout << ch << " ";//* for character
            ch++; //* Incrementing 'ch' for next row
        }
        cout << endl;
    }

    return 0;
}

// 1 A 2 B 3 C 
// 4 D 5 E 6 F 
// 7 G 8 H 9 I 