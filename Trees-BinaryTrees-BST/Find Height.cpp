int height(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int height_tree=0;
	if(root==NULL){
        return 0;
    }
    int child_height=0;
    
    for(int i=0;i<root->children.size();i++){
        child_height=height(root->children[i]);
    	if(child_height > height_tree){
            height_tree=child_height;
        }
    }
    height_tree+=1;
    return height_tree;
    
    
}


