// top k frequent elements 

class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        // map pair is <ele,freq>
        for(int ele : arr){
            mp[ele]++;  //iss se element ma sara bhar jaye ga
        } //map banaya uss me sare element bhar diya 
        // heap pair is <freq,ele>

        priority_queue<pi, vector<pi>, greater<pi> > pq;
        for(auto x : mp){
            // int ele = x.first;
            // int freq = x.second;
            // pair<int , int> p = {freq, ele};
            // pq.push(p);
            // you can simply write this three line in one line
            pq.push({x.second, x.first});
            if(pq.size()>k) pq.pop();
        } //fir priority queue me bhar diya uss se pata chal gaya ki kon se top k frequent hai 

        vector<int> ans;
        while(pq.size()>0){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        } //ans me bhar diya 

        return ans;
    }
};