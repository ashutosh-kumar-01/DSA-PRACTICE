// find the maximum value out of all the elements in the array...........

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
//     int max = arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     cout<<max;
//     return 0;
// }

// -------------------------------------------------------------------------------------------------
// using function ....

#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> &arr, int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maximum = findMax(arr, n);
    cout<<maximum;
}