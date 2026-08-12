#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    // max heap

    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(20);
    // pq.push(15);
    // pq.push(-5);
    // // in priority queue max element is always at the top 
    // cout << pq.top() << endl; 
    // pq.pop();
    // cout << pq.top() << endl;

    // min heap 
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(10);
    pq.push(20);
    pq.push(15);
    pq.push(-5);
    // in priority queue min element is always at the top
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
}
