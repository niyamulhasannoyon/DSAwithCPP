#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){ //* n lines
        for(int j = 0; j < n-1; j++) {//*Inner loop << 1 single row
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// 0 1
// 0 1 
// 0 1 