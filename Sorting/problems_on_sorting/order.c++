// Given an array with N dinct elements, convert the given array to a form where all 
// elements are in the range from 0 to N-1. The order of elements in the same, i.e. 0 is placed in the place
// of the smallest element, 1 is placed for the second smallest element,..N-1 is placed for the largest element.

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v(n,0); // 0 means not visited
    int x = 0;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindex = -1;
        for(int j=0;j<n;j++){
            if(v[j] == 1) continue;
            else{
                if(min > arr[j]){
                    min = arr[j];
                    mindex = j;
                }
            }
        }
        arr[mindex] = x;
        v[mindex] = 1; //vistied
        x++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}