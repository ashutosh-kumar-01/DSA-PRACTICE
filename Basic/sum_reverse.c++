// wap to sum of the given number and reverse it ...............

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum = 0;
//     int rev = 0;
//     while(n!=0){
//         int digit  = n%10;
//         sum = sum + digit;
//         rev = (rev*10) + digit;
//         n = n/10;
//     }
//     cout<<"Sum: "<<sum<<endl;
//     cout<<"Reverse: "<<rev<<endl;
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------
// using function.......
#include <iostream>
using namespace std;
int sumOfDigit(int n){
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        sum = sum + digit;
        n = n/10;
    }
    return sum;
}
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
    cout<<"Sum: "<<sumOfDigit(n)<<endl;
    cout<<"Reverse: "<<reverse(n)<<endl;
    return 0;
}
