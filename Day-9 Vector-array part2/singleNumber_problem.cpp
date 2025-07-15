#include <iostream>
#include <vector>
// using namespace std;

// int main() {
//     //? Given Non-empty array of integer nums. every element appears twice except for one. 
//     //?Find the single one??
//     //?[1,2,2,1,4] ans 4

//     //? 1st Way Biswise __ X-OR [ n ^ n = 0 &&& n ^ 0 = n]

//     vector<int> nums;
//     int ans = 0;

//     for( int val : nums) {
//         ans = ans ^ ans ;
//         return ans;
//     }
// }
class Solution {
    public:
        int singleNumber(vector<int> nums){
            int ans = 0;

            for(int val : nums){
                ans ^= ans;
            }
            return ans;
        }
}