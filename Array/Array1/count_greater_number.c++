// count the number of elements in given array greater than a given number x......

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n, x ,count = 0;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>x;
//     for(int i=0;i<n;i++){
//         if(arr[i] > x){
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }

// -------------------------------------------------------------------------------------------------
// using function ....

#include <iostream>
#include <vector>
using namespace std;

int countGreater(vector<int> &arr, int n , int x){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    return count;
}
int main(){
    int n, x;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    int result = countGreater(arr, n, x);
    cout<<result;
    return 0;
}
