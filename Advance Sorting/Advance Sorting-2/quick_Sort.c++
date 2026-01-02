// Quick Sort 
#include <iostream>
using namespace std;
int partition(int arr[], int si, int ei){
    int pivotElement = arr[si];
    int count = 0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }
    int pivotIndex = count + si;
    swap(arr[si],arr[pivotIndex]);
    int i = si, j = ei;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int si, int ei){
    if(si>=ei) return;
    int pi = partition(arr, si, ei);
    quickSort(arr, si, pi-1);
    quickSort(arr, pi+1, ei);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

