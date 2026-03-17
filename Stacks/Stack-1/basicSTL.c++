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
}

