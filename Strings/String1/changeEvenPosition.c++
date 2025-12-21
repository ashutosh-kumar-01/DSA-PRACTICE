// input a string of size n and update all the even positions in the string to character 'a'. consider 0-based indexing.

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    for(int i=0;i<str[i] != '\0';i++){
        if(i%2==0){
            str[i]='a';
            
        }
    }
    cout<<str;
    cout<<endl;
    return 0;
}