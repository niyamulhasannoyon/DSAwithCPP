#include <iostream>
using namespace std;

void printHello() {
    cout << "Hello World!" << endl;
}
int sum(int a, int b) {
    int s = a + b;
    return s;
}
int minOfTwo(int a, int b) {
    return (a < b)? a : b;
}

int main() {

    cout << sum(1, 2) << endl;
    cout << minOfTwo(6, 4) << endl;

    return 0;
}
