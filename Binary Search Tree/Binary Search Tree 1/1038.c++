// Given a bst , transform it into a greater sum tree where 
// each node contains the summ of all nodes greater than node

class Solution {
public:
    int sum = 0;
    void reverseInorder(TreeNode* root){
        // right root left
        if(root==NULL) return;
        reverseInorder(root->right);
        root->val += sum;
        sum = root->val;
        reverseInorder(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        reverseInorder(root);
        return root;
    }
};