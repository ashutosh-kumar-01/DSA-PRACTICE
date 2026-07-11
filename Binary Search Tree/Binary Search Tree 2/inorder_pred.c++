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

// Function to find inorder predecessor
Node* inorderPredecessor(Node* root) {
    if (root == NULL || root->left == NULL)
        return NULL;

    // Go left once
    Node* pred = root->left;

    // Keep going right
    while (pred->right != NULL) {
        pred = pred->right;
    }

    return pred;
}

int main() {
    // Creating the tree
    //         20
    //        /  \
    //      10    30
    //     /  \
    //    5   15
    //         \
    //         18

    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(15);
    root->left->right->right = new Node(18);

    Node* pred = inorderPredecessor(root);

    if (pred != NULL)
        cout << "Inorder Predecessor = " << pred->data << endl;
    else
        cout << "No Inorder Predecessor" << endl;

    return 0;
}