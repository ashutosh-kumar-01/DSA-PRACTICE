// Sort a String in decreasing order of values associated after 
// removal of values smaller that x.

#include <iostream>
#include <string>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string result = "";
    for(int i=0;i<s.length();i++){
        if(s[i]>='x'){
            result+=s[i];
        }
    }
    sort(result.begin(),result.end());
    reverse(result.begin(),result.end());
    
    cout<<result<<endl;
    return 0;
}