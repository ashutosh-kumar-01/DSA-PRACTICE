// find the second largest element in the array.......
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
//     int second_max = arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]!=max && arr[i]> second_max){
//             second_max = arr[i];
//         }
//     }
//     cout<<second_max;
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
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int FindSecondMax(vector<int> &arr, int n, int max){
    int second_max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]!=max && arr[i]> second_max){
            second_max = arr[i];
        }
    }
    return second_max;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mainimun = findMax(arr, n);
    int second_maximum = FindSecondMax(arr, n, mainimun);
    cout<<second_maximum;
    return 0;
}

