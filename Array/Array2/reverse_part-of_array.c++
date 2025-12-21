// reverse the array by k elements from the start....

#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int  reversepart(vector<int> &arr, int i, int j){
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversepart(arr, 0, 2);
    display(arr, n);
   
    return 0;
}