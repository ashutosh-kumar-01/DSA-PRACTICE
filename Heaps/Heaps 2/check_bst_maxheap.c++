// check if given binary tree is a maxheap or not 

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
int size(Node* root){
    if(root == NULL) return 0;
    return size(root->left) + size(root->right) + 1;
}
bool isCBT(Node* root){
    int totalNodes = size(root);
    int count = 0;
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    if(q.size()>0){
        Node* temp = q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    return true;
}
bool isMax(Node* root){
    if(root == NULL) return true;
    if(root->left != NULL && root->val < root->left->val) return false;
    if(root->right != NULL && root->val < root->right->val) return false;
    return isMax(root->left) && isMax(root->right);
}
int main(){
    Node* a = new Node(20); //rooot
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = NULL;
    Node* g = new Node(6);
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;
    cout<<isMax(a)<<endl;
    // solution
    if(isCBT(a) && isMax(a))  
        cout<<"Yes, it is a max heap";
    else
        cout<<"No, it is not a max heap";
}