#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_minus_r = factorial(n - r);

    return fact_n / (fact_r * fact_n_minus_r);
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << nCr(n, r) << endl;

    return 0;
}
