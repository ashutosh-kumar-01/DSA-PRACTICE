// find the doublet in the array whose sum is equal to the given value x........

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i] + arr[j] == x){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//             }
//         }
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------
// using function ....
#include <iostream>
#include <vector>
using namespace std;

int twosum(vector<int> &arr, int n, int x){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == x){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
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
    int x;
    cin>>x;
    int res = twosum(arr,n,x);
    return 0;
}