#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;  
    cin >> n; // Take input in main()  
    cout << factorial(n) << endl; // Pass n as an argument
    return 0;
}
