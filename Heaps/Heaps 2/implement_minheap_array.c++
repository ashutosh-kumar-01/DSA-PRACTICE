// implementation minheap using array 

#include <iostream>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){
        idx = 1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;
        // swapping of i with parent till i==1
        while(i!=1){
            int parent = i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
            }
            else break;
            i = parent;
        }
    }
    
    void pop(){
        idx--;
        arr[1] = arr[idx];
        int i = 1;
        while(true){
            int left = 2*i, right = 2*i+1;
            if(left>idx-1) break;
            if(right>idx-1){
                if(arr[i]>arr[left]){
                    swap(arr[i],arr[left]);
                    i = left;
                }
                break;
            }
            if(arr[left]<arr[right] && arr[i]>arr[left]){
                if(arr[i]>arr[left]){
                    swap(arr[i],arr[left]);
                    i = left;
                }
                else break;
            }
            else {
                 if(arr[i]>arr[right]){
                    swap(arr[i],arr[right]);
                    i = right;
                }
                else break;
            }
        }
    }
    void display(){
        for(int i=1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
    }
    int size(){
        return idx-1;
    }
};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    cout<<pq.size()<<endl;
    pq.push(11);
    cout<<pq.top()<<ndl;
    pq.display();
}