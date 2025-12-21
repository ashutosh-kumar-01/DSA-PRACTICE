// peak index in mountain array 
// using linear search
// #include <vector>
// using namespace std;
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n = arr.size();
//         int idx = -1;
//         for(int i=1;i<=n-2;i++){
//             if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//                 idx = i;
//                 break;
//             }
//         }
//         return idx;
//     }
// };


// --------------------------------------------------------------------------------------------
// 2nd approach using binary search
#include <vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
       int lo = 1;
       int hi = n-2;
       while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
            else if(arr[mid]>arr[mid+1]) hi = mid - 1;
            else lo = mid + 1;
       }
       return lo;
    }
};