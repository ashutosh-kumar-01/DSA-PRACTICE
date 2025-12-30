// Permutation Sequence 
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// void permutation(vector<string>& v,string ans, string original){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     for(int i=0;i<original.length();i++){
//         char ch = original[i];
//         string left = original.substr(0,i);
//         string right = original.substr(i+1);
//         permutation(v,ans+ch,left+right);
//     }
// }
// int main(){
//     string str = "123";
//     vector<string> v;
//     permutation(v,"",str);
//     for(string s:v){
//         cout<<s<<endl;
//     }
// }


// --------------------------------------------------------------------------------------------
// leetcode solution
#include <bits/stdc++.h>
#include <string>
using namespace std;
class Solution {
public:
    string helper(string str, int k, string ans){
        int n = str.length();
        if(n==1){
            ans += str;
            return ans;
        }
        int fact = 1;
        for(int i=2;i<=n-1;i++){
            fact *= i;
        }
        int idx = k/fact;
        if(k%fact==0) idx--;
        char ch = str[idx];
        string left = str.substr(0,idx);
        string right = str.substr(idx+1);
        int q = 1;
        if(k%fact==0) q = fact;
        else q = k%fact;
        return helper(left+right,q, ans+ch); 
    }
    string getPermutation(int n, int k) {
        string str = "";
        for(int i=1;i<=n;i++){
            str += to_string(i);
        }
        return helper(str,k,"");
    }
};