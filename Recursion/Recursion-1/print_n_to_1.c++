// print n to 1 using recursion
#include <iostream>
using namespace std;
void num(int n){
    if(n==0) return;
    cout<<n<<" ";
    num(n-1);
    
}
int main(){
    num(10);
}