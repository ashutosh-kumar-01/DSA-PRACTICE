// not good way
// class Solution {
// public:
//     int maximumCount(vector<int>& arr) {
//         int pos = 0, neg = 0;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]>0) pos++;
//             if(arr[i]<0) neg++;
//         }
//         return max(pos,neg);
//     }
// };
// ---------------------------------------------------------------------------------------------------------
// using binary search 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int pos = 0, neg = 0;
        int n = arr.size();
        // calculating smallest positive number (and its index)
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]<=0) lo = mid + 1;
            else { //arr[mid] > 0
                if(mid>0 && arr[mid-1] > 0) hi = mid - 1;
                else {
                    pos = n - mid;
                    break;
                }
            }
        }
         // calculating largets  negative number (and its index)
        lo = 0;
        hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]>=0) hi = mid - 1;
            else { //arr[mid] > 0
                if(mid+1<n && arr[mid+1] < 0) lo = mid + 1;
                else {
                    neg = mid+1;
                    break;
                }
            }
        }
        return max(pos,neg);
    }
};