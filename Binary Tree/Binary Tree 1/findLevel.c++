// find height/level of a Binary tree 
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
void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);

}

// for finding the sum of the tree
// int sum(Node* root){
//     if(root == NULL) return 0;
//     return root->val + sum(root->left) +  sum(root->right);
// }

// for finding the size of the tree
// int size(Node* root){
//     if(root == NULL) return 0;
//     return 1 + size(root->left) +  size(root->right);
// }

// for finding the maximum
// int maxValue(Node* root){
//     if(root == NULL) return INT_MIN;
//     return max(root->val, max(maxValue(root->left), maxValue(root->right)));
// }

// for finding the levels of the tree
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
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
    displayTree(a);
    cout<<endl;
    // cout<<sum(a);
    // cout<<endl;
    // cout<<size(a);
    // cout<<endl;
    // cout<<maxValue(a);
    cout<<levels(a);
}