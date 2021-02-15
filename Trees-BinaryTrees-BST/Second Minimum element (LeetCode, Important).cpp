 int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL)
            return -1;
        int left = -1, right = -1;
        if(root->left){
            // only go deeper when current child's value = parent's value
            left = root->left->val == root->val ? findSecondMinimumValue(root->left) : root->left->val;            
        }
        if(root->right){
            // only go deeper when current child's value = parent's value
            right = root->right->val == root->val ? findSecondMinimumValue(root->right) : root->right->val;            
        }
    
        if(left != -1 && right != -1)
            return min(left, right);
        else
            return left == -1 ? right : left;
        }
