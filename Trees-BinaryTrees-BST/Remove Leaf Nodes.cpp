BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        root=NULL;
        return root;
    }
    
    BinaryTreeNode<int>* remove_left=removeLeafNodes(root->left);
    BinaryTreeNode<int>* remove_right=removeLeafNodes(root->right);
    
   	root->left=remove_left;
    root->right=remove_right;
    
    return root;
}
