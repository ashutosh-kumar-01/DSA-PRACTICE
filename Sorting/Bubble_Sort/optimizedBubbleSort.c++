// optimized way to implement bubble sort 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // bubble sort optimized
    for(int i=0;i<n-1;i++){
        // traversal
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
                // or we can use inbuilt function
                // swap(arr[j],arr[j+1]);
            }
        }
        if(flag==true){ //swap didn't happen
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}