// given a sentence 'str', return the word that is occurrring most number of times in that sentence.

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string str = "apple banana apple orange banana apple banana";
    stringstream ss(str);
    string temp;
    vector<string> s;
    while(ss>>temp){
        s.push_back(temp);
    }
    
    sort(s.begin(), s.end());
    int maxCount = 1;
    int count = 1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]) count++;
        else count = 1;
        maxCount = max(maxCount, count);
    }
    // for printing the most occuring word
    count = 1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]) count++;
        else count = 1;
        if(count==maxCount){
            cout<<s[i]<<" "<<maxCount<<endl;
        }
    }
    return  0;
}