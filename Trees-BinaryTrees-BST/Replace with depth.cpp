void helper(TreeNode<int>*root,int depth){
    if(root==NULL){
        return;
    }
    
    root->data=depth;
    
    for(int i=0;i<root->children.size();i++){
        helper(root->children[i],depth+1);
    }
}
void replaceWithDepthValue(TreeNode<int> *root){    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the input tree itself.
     * No need to return pr print the output.
     * Taking input and printing output is handled automatically.
     */
    helper(root,0);
    

}
