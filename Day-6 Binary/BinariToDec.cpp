#include<iostream>
using namespace std;

int BinaryToDec(int BinNum) {
    int ans = 0; int pow = 1;
    while (BinNum > 0) {

        int rem = BinNum % 10;
        ans += rem * pow;

        BinNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main() {
    int BinNum;
    cin >> BinNum;
    cout << BinaryToDec(BinNum) << endl;
    return 0;
}