// Stair Path 
#include <iostream>
using namespace std;
int stairPath(int n){
    // base case
    if(n==2) return 2;
    if(n==1) return 1;
    return stairPath(n-1) + stairPath(n-2); 
}
int main(){
    cout<<stairPath(5);
    return 0;
}