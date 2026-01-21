// sort the array of 0's and 1's......

// method1 : using two pass algorithm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void sort01(vector<int> &arr, int n){
    int noz = 0; //number of zeros
    int noo = 0; //number of ones
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            noz++;
        }
        else{
            noo++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<noz) arr[i] = 0;
        else arr[i] = 1;
    }
    // sort (arr.begin(), arr.end());  //you can also use this for sorting
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort01(arr, n);
    display(arr, n);
    return 0;
}

// ---------------------------------------------------------------------------------------------------------------------------------

// method2 : using one pass algorithm
// using two pointers

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
void sort01(vector<int> &arr, int n){
    int i = 0;
    int j = n - 1;
    while (i < j){
        if (arr[i] == 0) i++;
        if (arr[j] == 1) j--;
        if (i > j) break;
        if (arr[i] == 1 && arr[j] == 0){
            arr[i] = 0;
            arr[j] = 1;
            i++;
            j--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort01(arr, n);
    display(arr, n);
}

