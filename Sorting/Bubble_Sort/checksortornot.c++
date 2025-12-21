// check the given array is sorted or not
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
    bool isSorted = true;
    for(int i=0;i<n;i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}