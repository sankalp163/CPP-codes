vector<int> leafNodes(TreeNode*root,vector<int>&v){
        if(root==NULL)
            return v;
        
        if(root->left==NULL && root->right==NULL){
            v.push_back(root->val);
        }
        v=leafNodes(root->left,v);
        v=leafNodes(root->right,v);
        
        return v;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        
        if(root1==NULL && root2==NULL){
            return true;
        }
        if(!root1)
            return false;
        if(!root2)
            return false;
        
        v1=leafNodes(root1,v1);
        v2=leafNodes(root2,v2);
        
        if(v1.size()!=v2.size())
            return false;
        
        for(int i=0;i<v1.size();i++){
            if(v1[i]==v2[i])
                continue;
            else
                return false;
            
        }
        return true;
    }
