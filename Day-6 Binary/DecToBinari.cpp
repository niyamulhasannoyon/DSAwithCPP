#include <iostream>
using namespace std;

// Function to convert a decimal number to binary
int decimalToBinary(int decimalNumber) {
    int binaryNumber = 0; // To store the final binary result
    int placeValue = 1;   // Represents the place values in binary (1, 10, 100, ...)

    while (decimalNumber > 0) {
        int remainder = decimalNumber % 2; // Get the last binary digit (0 or 1)
        decimalNumber /= 2;               // Divide the number by 2 for the next iteration
        binaryNumber += remainder * placeValue; // Add the binary digit to the result
        placeValue *= 10;                  // Move to the next binary place value
    }
    return binaryNumber;
}

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    cout << "Binary representation: " << decimalToBinary(decimalNumber) << endl;
    return 0;
}
