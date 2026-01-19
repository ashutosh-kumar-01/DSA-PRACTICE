// Reducing Dishes .
// Time Complexity: O(nlogn) + O(n) + O(n) ~ O(nlogn)
// Space Complexity: O(n) for suffix sum array.
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        int suff[n];
        suff[n-1] = satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i] = suff[i+1] + satisfaction[i];
        }
        // find the pivot idx;
        int idx = -1;
        for(int i=0;i<n;i++){
            if(suff[i]>=0){
                idx = i;
                break;
            }
        }
        if(idx==-1) return 0;
        // max sum of like-time coeffifient
        int x = 1;
        int maxSum = 0;
        for(int i=idx;i<n;i++){
            maxSum += (satisfaction[i]*x);
            x++;
        }
        return maxSum;
    }
};