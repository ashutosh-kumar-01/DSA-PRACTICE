#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(2);
    int target = 4;
    // s.find() -> it searches in the set, and if 
    // it is not found then it returns the last element
    if(s.find(target) != s.end()){
        cout<<"found"<<endl;
    }
    else cout<<"not found"<<endl;
    // for each loop use to print the elements of the sets
    for(int ele : s){
        cout<<ele<<" ";
    }
}