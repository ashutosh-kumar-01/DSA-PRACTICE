// find the minimum value out of all the elements in the array...........

#include <iostream>
#include <vector>
using namespace std;

int FindMin(vector<int> &arr, int n){
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minimun = FindMin(arr, n);
    cout<<minimun;
    return 0;
}