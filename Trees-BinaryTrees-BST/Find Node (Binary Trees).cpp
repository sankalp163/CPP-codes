bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    //Write your code here
    bool res;
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    else{
        res=false;
    }
    bool res_left=isNodePresent(root->left,x);
    bool res_right=isNodePresent(root->right,x);
    
    if(res_left==true||res_right==true){
        return true;
    }
    else{
        return false;
    }
    
    
    
}
