// Generate Parenthesese 
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void generate(string s, int open, int close, int n){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n) generate(s+"(",open+1,close,n);
    if(close<open) generate(s+")",open,close+1,n);
}
int main(){
    int n = 3;
    generate("",0,0,n);
    return 0;
}

// -----------------------------------------------------------------------------
// leetcode solution: 

// class Solution {
// public:
//     void generate(vector<string>& ans, string s, int open, int close, int n){
//     if(close==n){
//         ans.push_back(s);
//         return;
//     }
//     if(open<n) generate(ans,s+"(",open+1,close,n);
//     if(close<open) generate(ans,s+")",open,close+1,n);
//     }
//     vector<string> generateParenthesis(int n) {
//         vector<string> ans;
//         generate(ans,"",0,0,n);
//         return ans;
//     }
// };