void replace(BinaryTreeNode<int>* root,int *sum){
    if(root==NULL){
        return;
    }
    
    replace(root->right,sum);
    *sum=*sum+root->data;
    root->data=*sum;
    replace(root->left,sum);
    
}
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    // Write your code here
	int sum=0;
    replace(root,&sum);
    
    
}
