// sorting a string using in-built function 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    cout<<s;
    return 0;
}