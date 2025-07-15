#include <iostream>
using namespace std;

int main() {
    int marks[] = {100, 20, 3, -40, 50};
    int size = 5;

    int smallest = INT_MAX;  //* + infinity
    int largest = INT_MIN; //* - infinity

    for(int i = 0; i < size; i++) {
        smallest = min(smallest, marks[i]); // if(marks[i] < smallest) 
        largest = max(largest, marks[i]);   // smallest = marks[i];
    }
    cout << "Largest number is: " << largest << endl;
    cout << "Smallest number is: " << smallest << endl;
    
    //Print Largest number length
    cout << "Largest number length is: " << to_string(largest).length() << endl;
    //Print Smallest number length
    cout << "Smallest number length is: " << to_string(smallest).length() << endl;

    return 0;
}
