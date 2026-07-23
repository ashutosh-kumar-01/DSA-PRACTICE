// count number of distinct integers after reverse operations 
class Solution {
public:
    int reverse(int n){
        int r = 0;
        while(n != 0){
            int digit = n%10;
            r = (r*10) + digit;
            n = n/10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int rev = reverse(nums[i]);
            nums.push_back(rev);
        }
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        return s.size();
    }
};