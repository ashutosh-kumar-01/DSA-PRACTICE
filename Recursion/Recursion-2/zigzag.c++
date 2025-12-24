#include <iostream>
using namespace std;
void zigzag(int n){
    if(n==0) return;
    cout<<n<<" ";          // Pre-order
    zigzag(n-1);
    cout<<n<<" ";          // In-order
    zigzag(n-1);
    cout<<n<<" ";          // Post-order
}
int main(){
    zigzag(3);
    return 0;
}