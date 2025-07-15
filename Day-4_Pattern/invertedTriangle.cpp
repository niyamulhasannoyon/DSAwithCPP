#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    char ch = 'A';
    cin >> n;

    for (int i = 0; i < n; i++) {
        //* Print Spaces
        for (int j = 0; j < i ; j++) { //* backward loop
            cout << " ";
        }
        //* Print Numbers
        for (int j = 0; j < n - i; j++) {
            cout << i + 1;//* adding spaces look like piramide
            cout << char('A' + i); //* Adding spaces it will be Piramid pattern
        }
        cout << endl;
    }

    return 0;
}
// 4
// 1111
//  222
//   33
//    4