// rotate the given array 'A' by k steps, where k is non-negative

// note :- k can be greater than n as well where n is the size of array 'a'..

#include <iostream>
#include <vector>
using namespace std;

int reversepart(vector<int> &arr, int i, int j){
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
void display(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    if(k>=n){
        k = k % n;
    } 
    reversepart(arr, 0, n-k-1);
    reversepart(arr, n-k, n-1);
    reversepart(arr, 0, n-1);
    display(arr, n);
    return 0;
}