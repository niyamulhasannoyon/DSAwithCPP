#include<iostream>
using namespace std;
int main() {
    int N;
    int oddSum = 0;
    int evenSum = 0;
    int sum = 0;
    cin >> N;

    int n = 0;

    while( n <= N){
        if(n % 2 != 0){
            oddSum += n;
        }
        else if(n % 2 == 0){
            evenSum += n;
        }
        sum += n;
        n++;
    }
    cout << endl;
    cout <<"Sum of the Numbers 1 to N = " << sum << endl;
    cout << endl;
    cout << "Sumation of Odd Numbers 1 to N = "<< oddSum << endl;
    cout << endl;
    cout << "Sumation of Even Numbers 1 to N = "<< evenSum << endl;
    cout << endl;

    return 0;
}