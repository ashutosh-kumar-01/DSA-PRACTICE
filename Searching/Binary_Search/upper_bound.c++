// given a sorted integer array and an integer 'x', find the upper bound of x .

// using liner search 
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
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            cout<<arr[i];
            break;
        }
    }
    return 0;
}