#include<iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    cin >> N;
    
    for(int count = 1; count <= N; count++){
        sum += count;
        // cout << count << endl;
    }
    
    cout << "Sum of numbers from 1 to " << N << " is: " << sum << endl;
    return 0;
}