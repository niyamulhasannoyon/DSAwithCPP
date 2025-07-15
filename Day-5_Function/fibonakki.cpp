#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
//*0 1 1 2 3 5 8 13 21 34

/* #include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, next;
    
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;
    
    fibonacci(n);

    return 0;
}*/