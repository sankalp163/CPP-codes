class val{
    public:
    int min;
    int max;
    bool isBST;
    int height;
};

val helper(BinaryTreeNode<int>*root){
    if(root->left==NULL && root->right==NULL){
        val ans;
        ans.min=root->data;
        ans.max=root->data;
        ans.isBST=true;
        ans.height=1;
        
        return ans;
    }
    
    val leftAns=helper(root->left);
    val rightAns=helper(root->right);
    
    val ans;
    ans.min=min(leftAns.min,rightAns.min);
    ans.max=max(leftAns.max,rightAns.max);
    if(root->data >leftAns.max && root->data< rightAns.min){
        ans.isBST=true;
    }
    else{
        ans.isBST=false;
    }
    if(ans.isBST==true){
        ans.height=max(leftAns.height,rightAns.height)+1;
    }
    else if(ans.isBST==false){
        ans.height=max(leftAns.height,rightAns.height);
    }
    
    return ans;
}
int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
	val finalAns=helper(root);
    
    return finalAns.height;
}

