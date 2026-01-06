// given an integer n, find the maximum power of two that is smaller than n 
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 90;
//     int temp;
//     while(n!=0){
//         temp = n;
//         n = n & (n-1);
//     }
//     cout<<temp<<endl;
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int max_power_of2(int n){
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    return (n + 1) >> 1;
}
int main(){
    int n = 90;
    int temp;
    while(n!=0){
        temp = n;
        n = n & (n-1);
    }
    cout<<temp<<endl;
    int y = 90;
    cout<<max_power_of2(y)<<endl;
    return 0;
}

