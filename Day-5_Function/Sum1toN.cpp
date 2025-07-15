#include <iostream>
using namespace std;

int sum1toN(int n) {  
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;  
    cin >> n; // Take input in main()  
    cout << sum1toN(n) << endl; // Pass n as an argument
    return 0;
}
