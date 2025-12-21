#include <iostream>
#include <string>
using namespace std;
int main(){
    // string str;
    // cin>>str;  //only for single word input
    // cout<<str<<endl;

    string str2;
    getline(cin,str2); //for multiple word input
    cout<<str2<<endl;
    return 0;
}