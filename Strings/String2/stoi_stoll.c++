// stoi - > to convert string to integer 
// stoll -> to convert string to long long integer
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "12345";
    int num = stoi(str);
    long long int bigNum = stoll(str);
    cout<<num<<endl;
    cout<<bigNum<<endl;
    return 0;
}