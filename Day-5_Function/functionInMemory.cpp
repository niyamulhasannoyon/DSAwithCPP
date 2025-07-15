#include <iostream>
using namespace std;

void fun(int n) {
    int x = 65;
    cout << "X = " << x << endl;
}
void changeX(int x) {
    x = 2*x;
    cout << "X = " << x << endl;
}
int sum(int a, int b) {
    return a + b;
}

int main() {
    //* fun(1);

    //!sum(1, 2);

    //*cout << sum(1, 2) << endl;

    //* int x = 5, y = 5;
    //*cout << sum(1, 2) << endl;

    //*int x = 5;
    //*changeX(x);
    //*cout << "X = " << x << endl; // X remains 5 because the changeX function does not affect the original x variable.


    return 0;
}
