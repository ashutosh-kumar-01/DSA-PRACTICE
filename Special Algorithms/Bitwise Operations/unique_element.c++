// given an integer array where every element occurs twice except 
// one occurs only once. find that unique element.

#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,4,1,3,2,3,10,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int unique = 0;
    for(int i=0;i<n;i++){
        unique = unique ^ arr[i];
    }
    cout<<unique<<endl;
    return 0;
}