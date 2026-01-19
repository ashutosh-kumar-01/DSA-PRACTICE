// minimum Penalty for a shop 
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        
        vector<int> pre(n + 1, 0);   // number of 'N' before hour i
        vector<int> suff(n + 1, 0);  // number of 'Y' from hour i to end
        
        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + (customers[i] == 'N');
        }
        
        for (int i = n - 1; i >= 0; i--) {
            suff[i] = suff[i + 1] + (customers[i] == 'Y');
        }
        
        int minPen = n;
        for (int i = 0; i <= n; i++) {
            minPen = min(minPen, pre[i] + suff[i]);
        }
        
        for (int i = 0; i <= n; i++) {
            if (pre[i] + suff[i] == minPen)
                return i;
        }
        
        return n;
    }
};
