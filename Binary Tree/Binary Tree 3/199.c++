// Binary Tree Right Side View 
class Solution {
public:
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
    void preorder(TreeNode* root, vector<int>& ans, int level){
        // TreeNode* root, int curr, int level , vector<int>& ans
        // another way to solve using preorder 
        // -------------------------------------------------------------------------
        if(root==NULL) return;
        ans[level] = root->val;
        preorder(root->left,ans,level+1);
        preorder(root->right,ans,level+1);
        // -------------------------------------------------------------------------
    //     if(root==NULL) return;
    //     if(curr==level){
    //         ans[curr] = root->val;
    //         return;
    //     }
    //     nthLevel(root->left, curr+1, level, ans); //left
    //     nthLevel(root->right, curr+1, level, ans); //right
    // }
    // void levelOrder(TreeNode* root, vector<int>& ans){
    //     int n = ans.size();
    //     for(int i=0;i<n;i++){
    //         nthLevel(root,0,i, ans);
    //     }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root), 0);
        preorder(root, ans,0);
        return ans;

    }
};


