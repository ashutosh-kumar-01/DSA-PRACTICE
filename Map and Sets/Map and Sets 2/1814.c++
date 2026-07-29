// count nice pairs in an array 
class Solution {
public:
    int rev(int n) {
        int r = 0;
        while (n > 0) {
            r = r * 10 + (n % 10);
            n /= 10;
        }
        return r;
    }

    int countNicePairs(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        unordered_map<int, int> m;

        for (int &x : nums) {
            x = x - rev(x);
            m[x]++;
        }

        long long count = 0;

        for (auto &x : m) {
            long long f = x.second;
            count = (count + f * (f - 1) / 2) % MOD;
        }

        return count;
    }
};