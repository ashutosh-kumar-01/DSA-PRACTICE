// Bubble sort algorithm 
// not optimize way
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // bubble sort
//     for(int i=0;i<n-1;i++){
//         // traversal
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 // or we can use inbuilt function
//                 // swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// ---------------------------------------------------------------------------------------------------------------------
// optimize way 

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
    // bubble sort
    for(int i=0;i<n-1;i++){
        // traversal
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // or we can use inbuilt function
                // swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
