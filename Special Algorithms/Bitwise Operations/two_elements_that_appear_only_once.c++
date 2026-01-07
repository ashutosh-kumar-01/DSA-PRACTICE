// Given an integer array nums, in which exactly two elements appear only once and all 
// other elements appear exactly twice . find the two elements that appear only once.

#include <iostream>
#include <vector>
using namespace std;
void findUnique(int *arr, int n){
    int res = 0;
    for(int i=0;i<n;i++){
        res = res ^ arr[i];
    }
    int temp = res;
    int k = 0;
    while(true){
        if((temp & 1) == 1){
            break;
        }
        temp = temp >> 1;
        k++;
    }
    int retval = 0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        if(((num >> k) & 1) == 1) retval = retval ^ num;
    }
    cout<<retval<<" ";
    res = retval ^ res;
    cout<<res<<" ";
}
int main(){
    int arr[] = {1,2,1,3,2,5,5,9,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    findUnique(arr,n);
    return 0;
}