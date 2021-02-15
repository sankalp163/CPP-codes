int height(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
   
    
    if(root==NULL){
        return 0;
    }
    
    int height_left=height(root->left);
    int height_right=height(root->right);
    
    return (height_left>=height_right)?height_left+1:height_right+1;

}

