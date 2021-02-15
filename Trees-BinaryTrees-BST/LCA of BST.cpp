BinaryTreeNode<int>* helper(BinaryTreeNode <int>* root , int val1, int val2){
    if(!root){
        return NULL;
    }
    if(root->data==val1 || root->data==val2){
        return root;
    }
    BinaryTreeNode<int>* leftAns=NULL;
    BinaryTreeNode<int>* rightAns=NULL;
    if(val1 >root->data && val2>root->data){
        rightAns=helper(root->right,val1,val2);
    }
    else if(val1 <root->data && val2<root->data){
        leftAns=helper(root->left,val1,val2);
    }
    else if((val1 <root->data && val2>root->data)||(val1>root->data && val2<root->data)){
        leftAns=helper(root->left,val1,val2);
        rightAns=helper(root->right,val1,val2);
    }
        
    
    
    if(leftAns && rightAns){
        return root;
    }
    
    if(leftAns){
        return leftAns;
    }
    if(rightAns){
        return rightAns;
    }
}
int lcaInBST(BinaryTreeNode<int>* root , int val1 , int val2){
    // Write your code here
    BinaryTreeNode<int>* ans=helper(root,val1,val2);
    
    if(ans)
        return ans->data;
    else
        return -1;

}

