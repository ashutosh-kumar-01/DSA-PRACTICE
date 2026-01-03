// Missing Number 
// method -1(extra space)
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         vector<bool> check(n+1, false);
//         for(int i=0;i<n;i++){
//             int ele = nums[i];
//             check[ele] = true;
//         }
//         for(int i=0;i<=n;i++){
//             if(check[i]==false) return i;
//         }
//         return 100;
//     }
// };

// --------------------------------------------------------------------------------------
// method -2(cyclic sort)
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//        int n = nums.size();
//        int i = 0;
//        while(i<n){
//             int correctIdx = nums[i];
//             if(correctIdx==i || nums[i]==n) i++;
//             else swap(nums[i],nums[correctIdx]);
//        }
//        for(int i=0;i<n;i++){
//         if(nums[i]!=i) return i;
//        }
//        return n;
//     }
// };


// --------------------------------------------------------------------------------------
// method -3(sum formula)
// method 3  using sum
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int totalSum = n*(n+1) / 2;
       int sum = 0;
       for(int i=0;i<n;i++){
        
        sum += nums[i];
       }
       return totalSum - sum;
    }
};