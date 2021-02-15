TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        
        TreeNode* leftTree=invertTree(root->left);
        TreeNode* rightTree=invertTree(root->right);
        
        root->left=rightTree;
        root->right=leftTree;
        
        return root;
        
        
    }
