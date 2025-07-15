#include <iostream>
using namespace std;

// Function to add two binary numbers stored as integers
int addBinary(int binary1, int binary2) {
    int result = 0;  // Stores the final binary sum
    int carry = 0;   // Stores carry-over
    int placeValue = 1; // To position the digits correctly

    while (binary1 > 0 || binary2 > 0 || carry > 0) {
        // Extract the last digit (bit) of both binary numbers
        int bit1 = binary1 % 10;
        int bit2 = binary2 % 10;

        // Calculate sum of bits and carry
        int sum = bit1 + bit2 + carry;
        int digit = sum % 2;  // New bit in result
        carry = sum / 2;      // Carry for next iteration

        // Update the final binary result
        result += digit * placeValue;
        placeValue *= 10; // Move to the next binary place

        // Remove last digits from binary numbers
        binary1 /= 10;
        binary2 /= 10;
    }
    return result;
}

int main() {
    int binary1, binary2;
    cout << "Enter first binary number: ";
    cin >> binary1;
    cout << "Enter second binary number: ";
    cin >> binary2;

    int sum = addBinary(binary1, binary2);
    cout << "Binary Sum: " << sum << endl;
    return 0;
}
