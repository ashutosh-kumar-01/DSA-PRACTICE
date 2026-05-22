// path sum 3 

class Solution {
public:
    void helper(TreeNode* root,int sum,int& count){
        if(root==NULL) return;
            if(root->val==sum){
               count++;
            }
        helper(root->left, sum-(root->val), count);
        helper(root->right,sum-(root->val), count);
    }
    int pathSum(TreeNode* root, int targetSum) { //to add the sums of every nodepath
        if(root==NULL) return 0;
        int count = 0;
        helper(root, targetSum, count);
        count += (pathSum(root->left, targetSum) + pathSum(root->right, targetSum));
        return count;
    }
};