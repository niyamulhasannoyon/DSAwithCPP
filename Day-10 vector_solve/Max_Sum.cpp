#include <iostream>
using namespace std;
int main() {

    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    //? Brute Force approach
    
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int st=0; st<n; st++) {
        int currentSum = 0;
        for(int end=st; end<n; end++) {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "Max Sum1: " << maxSum << endl;

    //? Kadane's Algorithm

    for(int i=0; i<n; i++) {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0) {
            currentSum = 0; // Reset current sum if it goes negative
        }
    }
    cout << "Max Sum2: " << maxSum << endl;
}
