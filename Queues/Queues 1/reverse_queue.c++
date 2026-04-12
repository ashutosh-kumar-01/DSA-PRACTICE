// Reverse the queue using a stack
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int>& q){
    stack<int> s;
    // empty the queue into the stack
    while(q.size()>0){
        int x = q.front();
        q.pop();
        s.push(x);
    }
    // empty the stack into the queue
    while(s.size()>0){
        int x = s.top();
        s.pop();
        q.push(x);
    }
    
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<<q.front();
    display(q);
    reverse(q);
    display(q);
}