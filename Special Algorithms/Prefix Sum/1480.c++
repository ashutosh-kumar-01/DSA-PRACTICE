// running sum of 1d array 
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> run(n);
        run[0] = nums[0];
        for(int i=1;i<n;i++){
            run[i] = nums[i] + run[i-1];
        }
        return run;
    }
};