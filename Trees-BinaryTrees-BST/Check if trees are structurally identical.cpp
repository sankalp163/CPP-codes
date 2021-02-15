bool isIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int res;
    if(root1==NULL || root2==NULL){
        return false;
    }
    
    if(root1->data==root2->data){
        res=true;
    }
    else{
        res=false;
        return false;
    }
    
    for(int i=0,j=0;i<root1->children.size(), j<root2->children.size();i++,j++){
        res=isIdentical(root1->children[i],root2->children[j]);
        
        if(res==false){
            break;
        }
    }
    return res;
    

}
