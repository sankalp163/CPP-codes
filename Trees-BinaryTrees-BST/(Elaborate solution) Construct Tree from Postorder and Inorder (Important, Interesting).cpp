BinaryTreeNode<int>* helper(int *postorder,int *inorder,int inS,int inE,int posS,int posE){
    if(inS>inE){
        return NULL;
    }
    
    int rootData=postorder[posE];
    int rootIndex=-1;
    
    for(int i=inS;i<=inE;i++){
        if(inorder[i]==rootData){
            rootIndex=i;
            break;
        }
    }
    
    int linS=inS;
    int linE=rootIndex-1;
    int lposS=posS;
    int lposE=linE-linS+lposS;
    int rinS=rootIndex+1;
    int rinE=inE;
    int rposS=lposE+1;
    int rposE=posE-1;
    
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    root->left=helper(postorder,inorder,linS,linE,lposS,lposE);
    root->right=helper(postorder,inorder,rinS,rinE,rposS,rposE);
        
    return root;
}
BinaryTreeNode<int>* getTreeFromPostorderAndInorder(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
	helper(postorder,inorder,0,inLength-1,0,postLength-1);
}

