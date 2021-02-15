 bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
            return true;
        
       if(root->left){
           if(root->val!=root->left->val)
               return false;
       }
        if(root->right){
           if(root->val!=root->right->val)
               return false;
       }
        
        bool leftAns=isUnivalTree(root->left);
        bool rightAns=isUnivalTree(root->right);
        
        return leftAns&&rightAns;
    }
