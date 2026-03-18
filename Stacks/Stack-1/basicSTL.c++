#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.size() << endl; // 4
    st.pop();
    cout << st.size() << endl; // 3
    // not good way 
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    // we use extra stack
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    // putting elements back to original stack
    while(temp.size()>0){
        int x  = temp.top();
        temp.pop();
        st.push(x);
    }
    
}
