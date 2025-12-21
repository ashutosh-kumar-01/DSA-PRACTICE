// wap to print the factorial of the given number.......
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int fact = 1;
//     while(n!=0){
//         fact = fact *n;
//         n--;
//     }
//     cout<<fact<<endl;
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------
// using function.......
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     while(n!=0){
//         fact = fact*n;
//         n--;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(n)<<endl;
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------
// using for loop 
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact = 1;

    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    cout<<fact<<endl;
    return 0;
}

