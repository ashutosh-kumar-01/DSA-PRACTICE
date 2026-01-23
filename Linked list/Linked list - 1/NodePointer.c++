// Linked list using Node pointers
#include <iostream>
using namespace std;
class Node{  //Linked list node
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }   
};
// Function to display linked list
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// Function to calculate size of linked list
int Size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
       
    }
    return n;
}
// function to display using recursion
void displayRec(Node* head){
    if(head==NULL) return; //base case
    cout<<head->val<<" "; // kaam
    displayRec(head->next); //call
}
// reverse a linked list
void ReverseDisplay(Node* head){
    if(head==NULL) return; //base case
    ReverseDisplay(head->next); //call
    cout<<head->val<<" "; // kaam
}
void insertAtEnd(Node* head , int val){
    Node* t = new Node(val);
    while(head->next!=NULL) head = head->next;
    head->next = t;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    // forming links
    a->next = b;
    b->next = c;
    c->next = d; 
       
    // traversing the linked list
    // Node* temp = a;
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // } 

    insertAtEnd(a,90);
    display(a);
    cout<<Size(a);
    cout<<endl;
    displayRec(a);
    cout<<endl;
    ReverseDisplay(a);
    return 0;
}
