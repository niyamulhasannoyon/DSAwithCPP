#include <iostream>
using namespace std;

int sumOfDigit(int num) {
    int digitSum = 0;
    while(num > 0) {
        int lastDigit = num % 10;
        num /= 10;
        digitSum += lastDigit;
    }
    return digitSum;
}

int main() {
    int n;
    cin >> n;
    cout << "Sum of digits: " << sumOfDigit(n) << endl;

    return 0;
}
// 16

// Sum of digits: 7