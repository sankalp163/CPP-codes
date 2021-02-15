void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    if(root==NULL){
        return;
    }
    
    if(root->data >= k1 && root->left!=NULL){
        elementsInRangeK1K2(root->left,k1,k2);
    }
    if(root->data >=k1 && root->data<= k2)
    	cout<<root->data<<" ";
	if(root->data <= k2 && root->right!=NULL){
        elementsInRangeK1K2(root->right,k1,k2);
    }
    
    return;
}

