#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) { //* N = Numbers of Line
        for(int j = 1; j <= m; j++) {//* M = Stars of single Line
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}