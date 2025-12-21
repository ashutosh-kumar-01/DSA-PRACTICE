#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    string str  = "Ashutosh is a spider man";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0;
}