#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool isPrime = true;

    for(int i = 2; i*i <= n; i++) { //* concept of factorial
        if(n % i == 0) { //*Non prime
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) {
        cout << n <<" is Prime Number\n";
    } else {
        cout << n << "is not Prime Number\n";
    }
    
    return 0;
}