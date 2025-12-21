// selection sort 
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
    // selection sort algorithm
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindex = -1;
        // minimum element calculation in orange box.
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindex = j;
            }
        }
        // swap the minimum element with the first element of the orange box.
        swap(arr[i],arr[mindex]);
    }
    // print the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
