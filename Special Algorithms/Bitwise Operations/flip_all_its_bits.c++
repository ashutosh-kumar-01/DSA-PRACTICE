// calculate the minimum number of bit flips to convert from one number to another 
// eg :- 5 can be wriitten as 9191 and 
// 11 can be written as 1011, so number of bit flips required will be 

#include <iostream>
using namespace std;
int main(){
    int x = 23;
    int y = 32;
    cout<<__builtin_popcount(x ^ y)<<endl;
    return 0;
}