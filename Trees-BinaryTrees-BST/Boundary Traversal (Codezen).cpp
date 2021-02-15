void printLeaves(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    printLeaves(root->left);
    
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    printLeaves(root->right);
}
void leftBoundary(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    
    if(root->left){
        cout<<root->data<<" ";
        leftBoundary(root->left);
    }
    else if(root->right){
        cout<<root->data<<" ";
        leftBoundary(root->right);
    }
}
void rightBoundary(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    
    if(root->right){
        rightBoundary(root->right);
        cout<<root->data<<" ";
    }
    else if(root->left){
       	rightBoundary(root->left);
        cout<<root->data<<" ";
    }
}
void solve(BinaryTreeNode<int>* root){
    	/* Don't write main().
	* Don't read input, it is passed as function argument.
	*/
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
  															  
    leftBoundary(root->left);
    printLeaves(root->left);
    printLeaves(root->right);
    
    rightBoundary(root->right);

}

