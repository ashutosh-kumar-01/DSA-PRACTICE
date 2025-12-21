// search a element in a sorted array using linear search
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
    int t;
    cin>>t;
    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i] == t){
            found = true;
            cout<<i;
            break;
        }
    }
    if(!found) cout<<-1;
    
    return 0;
}