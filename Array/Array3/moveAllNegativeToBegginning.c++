// Move all negative  nummbers to beginning and positive to end with constant extra space.

#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void moveAllNegativeToBeginning(vector<int> &arr, int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i] < 0) i++;
        if(arr[j] >= 0) j--;
        if(i>j) break;
        if(arr[i] >= 0 && arr[j] < 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveAllNegativeToBeginning(arr, n);
    display(arr, n);
    return 0;
}


