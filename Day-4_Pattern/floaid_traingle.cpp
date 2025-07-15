#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    char ch = 'A';
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) { //* backward loop
            cout << num << " " ;//* number
            num++; //* increment num each time
            cout << ch << " " ;//* character
            ch++;
        }
        cout << endl;
    }

    return 0;
}
// 4
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 