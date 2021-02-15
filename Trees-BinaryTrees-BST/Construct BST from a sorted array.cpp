BinaryTreeNode<int>* constructTree(int *input, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(n==0){
        return NULL;
    }
    
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(input[mid]);
    
    
    BinaryTreeNode<int>* leftTree=constructTree(input,(n-1)/2);
    BinaryTreeNode<int>* rightTree=constructTree(input+mid+1,n/2);
    
    root->left=leftTree;
    root->right=rightTree;
    
    return root;

}
