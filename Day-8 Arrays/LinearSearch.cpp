#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 3;

    cout << LinearSearch(arr, size, target) ;
    cout << endl;

    return 0;
}
