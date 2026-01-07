// print factorial of first 25 natural numbers and modulo the result by 10*9 + 7

#include <iostream>
#include <vector>
using namespace std;
vector<long long> factorials(int n){
    vector<long long int> facr(n+1, 1);
    int mod = 1000000007;
    for(int i=2;i<=n;i++){
        facr[i] = ((i%mod) * (facr[i-1]%mod)) % mod;
    }
    return facr;
}
int main(){
    vector<long long int> res = factorials(25);
    for(int i=1;i<=25;i++){
        cout<<"Factorial of "<<i<<" is "<<res[i]<<endl;
    }
}