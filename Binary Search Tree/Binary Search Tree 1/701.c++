// insert into a binary search tree 

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);
        else if(root->val > val) { //go left
            if(root->left == NULL){ //attach it here
                root->left = new TreeNode(val);
                return root;
            }
            else  insertIntoBST(root->left,val);
        }
        else{ //root->val < val : go right
            if(root->right == NULL){
                root->right = new TreeNode(val);
                return root;
            }
            else  insertIntoBST(root->right,val);
        }  
        return root;      
    }
};