// count digit of a given number...

// #include <iostream>
// using namespace std;

// int main(){
//     int n, count = 0;
//     cin>>n;
//     while(n!=0){
//         n = n/10;
//         count++;
//     }
//     cout<<count<<endl;
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------

// using function 

// #include <iostream>
// using namespace std;

// int countDigit(int n){
//     int count = 0;
//     while(n!=0){
//         n = n/10;
//         count++;
//     }
//     return count;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<countDigit(n)<<endl;
//     return 0;
// }
// ---------------------------------------------------------------------------------------------------

// count for more than 10 digits numbers and negative numbers also .............
#include <iostream>
using namespace std;

int countDigit(long long n){
    int count = 0;
    n = abs(n);
    while(n!=0){
        n = n/10;
        count++;
    }
    return count;
}
int main(){
    long long n;
    cin>>n;
    cout<<countDigit(n)<<endl;
    return 0;
}
