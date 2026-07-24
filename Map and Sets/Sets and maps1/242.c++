// valid anagram 
// using maps 

// solve using map 
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> map1; //for s
        unordered_map<char,int> map2; //for t
        for(int i=0;i<s.length();i++){
            map1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            map2[t[i]]++;  //it means ki wo preasent hai to uska freq b badhe ga 
        }
        for(auto x : map1){
            char ch1 = x.first;
            int freq1 = x.second;
            if(map2.find(ch1)!=map2.end()){ //it means mil jata hai 
                int freq2 = map2[ch1];
                if(freq1!=freq2) return false;
            }
            else return false;
        }
        return true;
    }
};


// another apprococh using one hash map only 

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> map1; //for s
        for(int i=0;i<s.length();i++){
            map1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            char ch  = t[i];
            if(map1.find(ch)!=map1.end()){
                map1[ch]--;
                if(map1[ch]==0) map1.erase(ch);
            }
            else return false;
        }
        if(map1.size()>0) return false;
        return true;
    }
};