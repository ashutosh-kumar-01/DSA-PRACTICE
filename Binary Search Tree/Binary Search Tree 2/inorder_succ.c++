// inorder sucessor in binary search tree
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to find inorder successor
Node* inorderSuccessor(Node* root) {
    if (root == NULL || root->right == NULL)
        return NULL;

    // Go right once
    Node* succ = root->right;

    // Keep going left
    while (succ->left != NULL) {
        succ = succ->left;
    }

    return succ;
}

int main() {
    //         20
    //        /  \
    //      10    30
    //           /
    //         25
    //        /
    //      22

    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->right->left = new Node(25);
    root->right->left->left = new Node(22);

    Node* succ = inorderSuccessor(root);

    if (succ != NULL)
        cout << "Inorder Successor = " << succ->data << endl;
    else
        cout << "No Inorder Successor" << endl;

    return 0;
}