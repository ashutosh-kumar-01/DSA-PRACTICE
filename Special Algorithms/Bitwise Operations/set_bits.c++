// find the number of set bits for any integer n 
// setbits means -> number of 1's in the binary representation of n
#include <iostream>
using namespace std;
int count_set_bits(int n){
    return __builtin_popcount(n);
}
int count_set_bits_2(int n){
    int count = 0;
    while(n>0){
        count ++;
        n = (n& (n-1)); // drops the lowest set bit
    }
    return count;
}
int main(){
    cout<<count_set_bits(13)<<endl; // 13 -> 1101 -> 3 set bits
    cout<<count_set_bits_2(13)<<endl;
    return 0;
}