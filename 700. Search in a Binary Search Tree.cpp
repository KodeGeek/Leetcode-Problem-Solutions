class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            return 0;
        }
            if(root->val == val)
            return root;  
            if(root->val > val)
            return searchBST(root->left, val);
            return searchBST(root->right, val);
    }
};
