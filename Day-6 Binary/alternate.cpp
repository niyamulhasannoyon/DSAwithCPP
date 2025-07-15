#include <iostream>
using namespace std;

int main() {
    int decNumber;
    cin >> decNumber;

    string binary = "";  // To store binary representation

    if (decNumber == 0) {
        cout << "0" << endl;
        return 0;
    }

    while (decNumber > 0) {
        int remainder = decNumber % 2;  // Get the last binary digit
        binary = to_string(remainder) + binary;  // Prepend to binary string
        decNumber /= 2;  // Reduce the number
    }

    cout << binary << endl;  // Print the final binary number
    return 0;
}
