// given a sorted integer array and an integer 'x'. find the upper bound of x
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int x;
    cin>>x;
    int lo = 0;
    int hi = n - 1;
    bool found =  false;
    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid]==x) {
            found = true;
            cout<<arr[mid+1];
            break;
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;
    } 
    if(found==false) cout<<arr[lo];
    return 0;
}