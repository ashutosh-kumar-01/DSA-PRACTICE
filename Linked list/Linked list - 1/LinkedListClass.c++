#include <iostream>
using namespace std;
class Node{  //User defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }   
};
class LinkedList{ // User Defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtEnd(10); // {10->NULL}
    ll.insertAtEnd(20); // {10->20->NULL}
    ll.insertAtEnd(30); // {10->20->30->NULL}
    ll.insertAtEnd(40); // {10->20->30->40->NULL}
    ll.display(); // 10 20 30 40
    cout<<ll.size; // 4
    return 0;
}

// 2:58:24

