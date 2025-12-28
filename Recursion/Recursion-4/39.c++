// combination sum 
// lec-4 1:11:17
#include <iostream>
#include <vector>
using namespace std;
void combination(vector<int> v, int arr[], int n, int target, int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0)  return;
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combination(v,arr,n,target-arr[i],i);
        v.pop_back();
    }
}
int main(){
    int arr[] = {2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    combination(v,arr,n,8,0);
    return 0;
}

// leetcode solution
// class Solution {
// public:
//     void combination(vector<vector<int>>& ans, vector<int> v, vector<int>& candidates, int target ,int idx){
//         if(target==0){
//             ans.push_back(v);
//             return;
//         }
//         if(target<0) return;
//         for(int i=idx;i<candidates.size();i++){
//             v.push_back(candidates[i]);
//             combination(ans, v,candidates,target-candidates[i],i);
//             v.pop_back();
//         }
//     }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//         vector<int> v;
//         combination(ans,v,candidates,target,0);
//         return ans;
//     }
// };