// Given a sorted integer array and an integer 'x'. find the lowerr bound of x 
// means :- we have to return the element just before that x

// solve using liner search 

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
            cout<<arr[i-1];
            break;
        }
    }
    return 0;
}