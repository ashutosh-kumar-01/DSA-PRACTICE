// given a sorted array of n elements and a target 'x',
// find the first occurrence of x in the array. if 'x' does not exist return -1;

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
    int hi = n -1;
    bool found = true;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] == x){
            if(arr[mid-1] != x){
                found = true;
                cout<<mid;
                break;
            }
            else {
                hi = mid - 1;
            }
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;
    }
    if(!found) cout<<-1;
    return 0;
}