#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// display ll in forward direction iterative way
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next; 
    }
    cout<<endl;
}
// display ll in reverse direction iterative way
void displayRev(Node* tail){
    while(tail){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
// display ll in forward direction recursive way
void displayRecursive(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRecursive(head->next);
}
// display ll in reverse direction recursive way
void displayRecursiveReverse(Node* head){
    if(head==NULL) return;
    displayRecursiveReverse(head->next);  // bss kch nahi karna hai iss ma phale recursion chalana hai fir print karwana hai 
    cout<<head->val<<" ";
}
int main(){
    // 10 20 30 40 50
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    // display(a); // iterative way to display the linked list
    displayRev(e); // iterative way to display the linked list in reverse order
    // displayRecursive(a); // recursive way to display the linked list
    // displayRecursiveReverse(a); // recursive way to display the linked list in reverse order
}