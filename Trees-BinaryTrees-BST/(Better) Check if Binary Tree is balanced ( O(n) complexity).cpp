pair<bool,int> heightBalanced(BinaryTreeNode<int>* root){
    if(root==NULL){
        pair<bool,int> p;
        p.first=true;
        p.second=0;
        
        return p;
    }
    
    pair<bool,int> left_ans=heightBalanced(root->left);
    pair<bool,int> right_ans=heightBalanced(root->right);
    
    if(abs(left_ans.second - right_ans.second)>1 || left_ans.first==false||right_ans.first==false){
        pair<bool,int> p;
        p.first=false;
        p.second=max(left_ans.second,right_ans.second)+1;
        
        return p;
    }
    else if(abs(left_ans.second - right_ans.second)<=1){
        pair<bool,int> p;
        p.first=true;
        p.second=max(left_ans.second,right_ans.second)+1;
        
        return p;
    }
    
    
}
/*int heightTree(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    
    int left_height=heightTree(root->left);
    int right_height=heightTree(root->right);
    
    return 1+max(left_height,right_height);
}*/
bool isBalanced(BinaryTreeNode<int> *root) {
    // Write your code here
	pair<bool,int> ans=heightBalanced(root);
    
    return ans.first;
    
}

