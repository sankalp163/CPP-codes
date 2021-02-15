bool containsX(TreeNode<int>* root, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
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
    for(int i=0;i<root->children.size();i++){
        res=containsX(root->children[i],x);
        if(res==true){
            break;
        }
    }
    return res;
    

}

