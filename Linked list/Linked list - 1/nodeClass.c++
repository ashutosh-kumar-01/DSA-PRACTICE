// creation of node (linkied list); 

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
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming links
    a.next = &b;
    b.next = &c;
    c.next = &d; 
    // cout<<(*(a.next)).val;  //using a we can access b
    // cout<<endl;
    // cout<<((a.next)->next)->val; //using a we can access c
    // cout<<endl;
    // cout<<(((a.next)->next)->next)->val; //using a we can access d
    
    // traversing the linked list
    Node temp = a;
    while(true){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
}