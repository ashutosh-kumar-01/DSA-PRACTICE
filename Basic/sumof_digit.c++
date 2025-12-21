// wap to print the sum of digit of the given number......[normal way]....
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum = 0;
//     while(n!=0){
//         int digit = n%10;
//         sum = sum + digit;
//         n = n / 10;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------
// using function....
#include <iostream>
using namespace std;

int sumOfDigit(int n){
    int sum = 0;
    while(n!=0){
        int digit = n %10;
        sum = sum + digit;
        n = n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sumOfDigit(n)<<endl;
    return 0;
}