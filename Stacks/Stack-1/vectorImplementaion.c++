// stack using vector
#include <iostream>
#include <vector>
using namespace std;
class Stack{ //user defined data strucure
public:    
    vector<int> arr;
    int idx = -1;
    void push(int val){ //no overflow conditon
        arr.push_back(val);
    }
    void pop(){
        if(arr.size()==0){
            cout<<"Stack underflow"<<endl;
            return;
        }
        arr.pop_back();
    }
    int top(){
        if(arr.size()==0){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        return arr[arr.size()-1];
    }
    int size(){
        return arr.size();
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
}