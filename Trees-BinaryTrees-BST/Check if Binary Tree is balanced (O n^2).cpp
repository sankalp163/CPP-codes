int heightTree(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    
    int left_height=heightTree(root->left);
    int right_height=heightTree(root->right);
    
    return 1+max(left_height,right_height);
}
bool isBalanced(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root==NULL){
        return true;
    }
    
    int left_final=heightTree(root->left);
    int right_final=heightTree(root->right);
    
    if(abs(left_final-right_final)>1){
        return false;
    }
    else{
        bool left_ans=isBalanced(root->left);
        bool right_ans=isBalanced(root->right);
        return left_ans&&right_ans;
    }
    
    
}

