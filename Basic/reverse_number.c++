// wap to reverse the given number ................
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int rev = 0;
//     while(n!=0){
//         int digit = n%10;
//         rev = (rev*10) + digit;
//         n = n/10;
//     }
//     cout<<rev<<endl;
//     return 0;
// }


// ----------------------------------------------------------------------------------------------------
// using function.......
// #include <iostream>
// using namespace std;

// int reverse(int n){
//     int rev = 0;
//     while(n!=0){
//         int digit = n%10;
//         rev = (rev*10) + digit;
//         n = n/10;
//     }
//     return rev;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<reverse(n)<<endl;
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------
// for more than 10 digits number and negative number also.......
#include <iostream>
using namespace std;
long long reverse(long long n){
    long long rev = 0;
    while(n!=0){
        long long digit = n%10;
        rev = (rev*10) + digit;
        n = n/10;
    }
    return  rev;
}
int main(){
    long long n;
    cin>>n;
    cout<<reverse(n)<<endl;
    return 0;
}