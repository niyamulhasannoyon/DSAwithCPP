#include<iostream>
using namespace std;
int main() {
    int n;
    int oddSum = 0;
    int evenSum = 0;
    int sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            // cout << i << " ";//*print odd Numbers
            oddSum += i;//* print of odd numbers
        }
        else if(i % 2 == 0){
            // cout << i << " ";//*print even Numbers
            evenSum += i;//* print of even numbers
        }
        sum += i;
    }
    cout << endl;
    cout <<"Sumation all the Numbers 1 to N = "<< sum << endl;
    cout << endl;
    cout << "Sumation of Odd Numbers 1 to N = "<< oddSum << endl;
    cout << endl;
    cout << "Sumation of Even Numbers 1 to N = "<< evenSum << endl;
    cout << endl;

    return 0;
}