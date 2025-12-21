// sort the array of 0's, 1's and 2's...... [leetcode 75 ] ....

// using two pass algorithm
// #include <iostream>
// #include <vector>
// using namespace std;
// void display(vector<int> &arr, int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void sort012(vector<int> &arr, int n){
//     int noz = 0;
//     int noo = 0;
//     int notw = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == 0) noz ++;
//         else if(arr[i] == 1) noo++;
//         else notw++;
//     }
//     for(int i=0;i<n;i++){
//         if(i<noz) arr[i] = 0;
//         else if(i<noz+noo) arr[i] = 1;
//         else arr[i] = 2;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort012(arr, n);
//     display(arr, n);
//     return 0;
// }

// -------------------------------------------------------------------------------------

// leetcode solution using two pass algorithm
// class Solution {
// public:
//     void sortColors(vector<int>& arr) {
//         // using two pass 
//         int n = arr.size();
//         int noz = 0;
//         int noo = 0;
//         int notw = n-1;
//         for(int i=0;i<n;i++){
//             if(arr[i] == 0) noz++;
//             if(arr[i] == 1) noo++;
//             if(arr[i] == 2) notw++;
//         }
//         for(int i=0;i<n;i++){
//             if(i<noz) arr[i] = 0;
//             else if(i< (noz+noo)) arr[i] = 1;
//             else arr[i] = 2;
//         }
//     }
// };

// ---------------------------------------------------------------------------------------------------------------------------------
// main method 2
// using three pointer approach
// dutch algorithm


// class Solution {
// public:
//     void sortColors(vector<int>& arr) {
//         int n = arr.size();
//         int lo = 0;
//         int mid = 0;
//         int hi = n-1;
//         // 1) mid ke bare me socho sirf
//         // 2) 0 to lo-1 -> 0, hi + 1 to end -> 2,
//         // lo to mid-1 -> 1;
//         while(mid<=hi){
//             if(arr[mid] == 2){
//                 int temp = arr[mid];
//                 arr[mid] = arr[hi];
//                 arr[hi] = temp;
//                 hi--;
//             }
//             else if(arr[mid] == 0){
//                 int temp = arr[mid];
//                 arr[mid] = arr[lo];
//                 arr[lo] = temp;
//                 lo++;
//                 mid++;
//             }
//             else{
//                 mid++;
//             }
//         }
//     }
// };