// find the last occurrence of x in the array.....

#include <iostream>
#include <vector>
using namespace std;

int lastIndex(vector<int> &arr, int n, int x){
    int idx = -1;
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i] == x){
            idx = i;
            break;
        }
    }
    return idx;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int res = lastIndex(arr,n,x);
    cout<<res;
    return 0;
}
