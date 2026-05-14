#include <iostream>
#include <climits>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node( int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// void display(Node* root){
//     if(root==NULL) return;
//     cout<<root->val<<" ";
//     display(root->left);
//     display(root->right);
// }

void postOrder(Node* root){
    if(root==NULL) return;
    postOrder(root->left); //visit left subtree first
    postOrder(root->right); //then right subtree
    cout<<root->val<<" ";  // then visit root
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7); 

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    postOrder(a);
}