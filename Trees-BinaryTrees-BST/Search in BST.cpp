BinaryTreeNode<int>* searchInBST(BinaryTreeNode<int> *root , int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(root==NULL){
        return NULL;
    }
    
    if(root->data==k){
        return root;
    }
    
    if(k < root->data){
        BinaryTreeNode<int>* searchLeft=searchInBST(root->left,k);
    }
    else if(k > root->data){
        BinaryTreeNode<int>* searchLeft=searchInBST(root->right,k);
    }

}







