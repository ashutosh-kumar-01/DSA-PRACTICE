// find the element x in the array . take array and x as input....

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            cout<<i;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"-1";
    }
    return 0;
}