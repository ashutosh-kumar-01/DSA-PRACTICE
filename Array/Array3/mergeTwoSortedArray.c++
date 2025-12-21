// merge two sorted arrays [leetcode 88]

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr1, vector<int>& arr2, vector<int> &res){
    int n = arr1.size();
    int m = arr2.size();
    int i = 0; //arr1
    int j = 0; //arr2
    int k = 0; //res
    while(i<=n-1 && j<=m-1){
        if(arr1[i] <arr2[j]){
            res[k] = arr1[i];
            i++;
        }
        else{ //arr2[j] < arr1[i]
            res[k] = arr2[j];
            j++;
        }
        k++;
    }
    // for remaining
    if(i==n){ //arr1 ke sare elements utha chucka hoon 
        while(j<=m-1){
            res[k] = arr2[j];
            j++;
            k++;
        }
    }
    if(j==m){ //arr2 ke saare elements utha chucka hai
        while(j<=m-1){
            res[k] = arr1[j];
            k++;
            i++;
        }
    }

}
int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    vector<int> res(n1+n2);
    merge(arr1, arr2, res);
    for(int i=0;i<n1+n2;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}