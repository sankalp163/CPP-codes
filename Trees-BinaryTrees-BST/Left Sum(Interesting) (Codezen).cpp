int leftSum(BinaryTreeNode<int>* root){
    // Write your code here
	if(root==NULL){
        return 0;
    }
    int sum=0;
    int right_sum=0;
    if(root->left!=NULL){
        sum=root->left->data;
    }
    
    sum+=leftSum(root->left);
    right_sum+=leftSum(root->right);
    return sum+right_sum;
    
}
