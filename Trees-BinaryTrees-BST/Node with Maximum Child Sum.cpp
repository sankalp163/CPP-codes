TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(root==NULL){
        return NULL;
    }
    TreeNode<int>* ans=root;
    int sum=root->data;
    
    for(int i=0;i<root->children.size();i++){
        sum+=root->children[i]->data;
    }
    
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>*x=maxSumNode(root->children[i]);
        int xsum=x->data;
        for(int j=0;j<x->children.size();j++){
            xsum+=x->children[j]->data;
        }
        if(xsum > sum){
            sum=xsum;
            ans=x;
        }
    }
    
    return ans;
}


