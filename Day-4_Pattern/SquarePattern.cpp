#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){ //* N lines
        for(int j = 0; j < N; j++) {//*Inner loop << 1 single row
            cout << "*" << " ";
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// 3

// * 0 * 1 * 2 
// * 0 * 1 * 2 
// * 0 * 1 * 2 