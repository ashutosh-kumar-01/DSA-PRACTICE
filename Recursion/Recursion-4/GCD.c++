// Greatest common Divisor 
// calculate Greatest Common Divisor of two numbers 

// using for loop 
// #include <iostream>
// #include <vector>
// using namespace std;
// int hcf(int a, int b){
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0 && b%i==0) return i; 
//     }
//     return 1;
// }
// int main(){
//     int a = 24;
//     int b = 60;
//     cout<<hcf(a,b);
// }

// --------------------------------------------------------------------
// using Euclid's division algo 

#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    int a = 27;
    int b = 45;
    cout<<gcd(a,b);
}