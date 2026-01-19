// maximum sum subarray of size k

// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int arr[] = {7,1,2,5,8,4,9,3,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3; // size of subarray
//     int maxSum = INT_MIN;
//     int maxIdx = -1;
//     for(int i=0;i<=n-k;i++){
//         int sum = 0;
//         for(int j=i;j<i+k;j++){
//             sum += arr[j];
//         }
//         if(sum>maxSum){
//             maxSum = sum;
//             maxIdx = i;
//         }
//     }
//     cout<<maxSum<<endl<<maxIdx<<endl;
// }

// ----------------------------------------------------------------------------------------------------------------------
// now let us use sliding window technique to solve the same problem

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4; // size of subarray
    int maxSum = INT_MIN;
    int maxIdx = 0;
    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    maxSum = sum;
    // sliding window starts here
    int i = 1;
    int j = k;
    while (j < n)
    {
        sum = sum + arr[j] - arr[i - 1];
        if (maxSum < sum)
        {
            maxSum = sum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    //  TC = 0(n)
    cout << maxSum << endl
         << maxIdx << endl;
}
