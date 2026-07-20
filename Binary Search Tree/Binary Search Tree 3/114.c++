// flatten binary tree to linked list 
// 1st method . using preorder traversal and storing the nodes in a vector and then linking them

class Solution {
public:
    vector<TreeNode*> preorderTraversal(TreeNode* root) {
        vector<TreeNode*> ans;
        stack<TreeNode*> st;
        if(root!=NULL) st.push(root);
        while(st.size()>0){
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp);
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left);
        }
        return ans;
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> ans = preorderTraversal(root);
        int n = ans.size();
        for(int i=0;i<n-1;i++){
            ans[i]->right = ans[i+1];
            ans[i]->left = NULL;
        }
    }
};

// 2nd method . using recursion and linking the nodes in preorder traversal

// method 2 using recursion 

class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode* l = root->left;
        TreeNode* r = root->right;
        root->left = NULL;
        root->right = NULL;
        flatten(l);
        flatten(r);
        root->right = l;
        TreeNode* temp = root;
        while(temp->right!=NULL) temp = temp->right;
        temp->right = r;
    }
};



// method 3 - using morris traversal

class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode* curr = root;
        while(curr!=NULL){
            if(curr->left!=NULL){
                // save the right
                TreeNode* r = curr->right;
                curr->right = curr->left;
                // finding pred
                TreeNode* pred = curr->left;
                while(pred->right!=NULL) pred = pred->right;
                // link
                pred->right = r;
                curr = curr->right;
            }
            else curr = curr->right;
        }
        TreeNode* temp = root;
        while(temp->right!=NULL){
            temp->left = NULL;
            temp = temp->right;
        }
    }
};