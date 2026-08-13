// find k closest elements 

class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pi> pq; //maxheap(max size is k)
        for(int ele : arr){
            int distance = abs(x-ele);
            pq.push({distance,ele});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};



// another way 

// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         int l = 0, r = arr.size() - k;
        
//         while (l < r) {
//             int mid = l + (r - l) / 2;
            
//             if (x - arr[mid] > arr[mid + k] - x)
//                 l = mid + 1;
//             else
//                 r = mid;
//         }
        
//         return vector<int>(arr.begin() + l, arr.begin() + l + k);
//     }
// };