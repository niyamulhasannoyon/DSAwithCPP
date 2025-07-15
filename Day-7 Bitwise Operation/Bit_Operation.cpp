#include <iostream>
using namespace std;
int main() {

    //?Bitwise AND Operation; ( & )
    int a = 4,  b = 8;
    cout << (a & b);
    cout << endl;

    //?Bitwise OR Operation; ( || )
    cout << (a || b);
    cout << endl;

    //?Bitwise XOR Operation; ( ^ )  same = 0 and diff = 1;
    cout << (a ^ b);
    cout << endl;

    //?Bitwise Left Shift Operation;  ( << )  4(100) << 1 = 8(1000)
    //*generalization
    //* a << b  ==  a * 2^b 
    cout << (4 << 1);
    cout << endl;
    cout << (10 << 2);
    cout << endl;

    //?Bitwise Right Shift Operation;  ( >> )
    //*generalization
    //* a >> b  ==  a / 2^b 
    cout << (4 >> 1);
    cout << endl;
    cout << (10 >> 1);
    cout << endl;

    //?
    unsigned int x = -10;
    cout<< x;



    return 0;
}
