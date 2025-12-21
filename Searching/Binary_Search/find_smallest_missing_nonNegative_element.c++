// given a sorted array of non-negative distinct integers, find the smallest missing non-negative element in it 

// using for loop (using )
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
//     for(int i=0;i<n;i++){
//         if(i!=arr[i]){
//             cout<<i;
//             break;
//         }
//     }
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------
// 2nd approach using binary search

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
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==mid) lo = mid + 1;
        else{
            ans = mid;
            hi = mid - 1;
        }
    }
    cout<<ans;
    return 0;
}

