// find the next permutation of a given array [leetcode 31 ] .....
// note :- if not possible then print the sorted order in ascending order 

// class Solution {
// public:
//     void nextPermutation(vector<int>& arr) {
//         int n = arr.size();
//         int idx = -1;

//         // 1) Find pivot index
//         for (int i = n - 2; i >= 0; i--) {
//             if (arr[i] < arr[i + 1]) {
//                 idx = i;
//                 break;
//             }
//         }
//         // If array is already the last permutation
//         if (idx == -1) {
//             reverse(arr.begin(), arr.end());
//             return;
//         }
//         // 2) Find the next greater element in the suffix
//         for (int i = n - 1; i > idx; i--) {
//             if (arr[i] > arr[idx]) {
//                 swap(arr[i], arr[idx]);
//                 break;
//             }
//         }
//         // 3) Reverse the suffix
//         reverse(arr.begin() + idx + 1, arr.end());
//     }
// };
