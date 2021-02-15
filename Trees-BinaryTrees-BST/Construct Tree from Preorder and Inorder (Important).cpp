***************/
BinaryTreeNode<int>* helper(int preStart,int inStart,int InEnd,int *preorder, int *inorder){
    if( inStart>InEnd){
        return NULL;
    }
    
    BinaryTreeNode<int>*root= new BinaryTreeNode<int>(preorder[preStart]);
    int rootIndex=0;
    for(int i=inStart;i<=InEnd;i++){
        if(root->data==inorder[i]){
            rootIndex=i;
            break;
        }
    }
    
    root->left=helper(preStart+1, inStart,rootIndex-1,preorder,inorder);
    root->right=helper(preStart+rootIndex-inStart+1,rootIndex+1,InEnd,preorder,inorder);
    
    return root;
    
}
BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
    
    helper(0,0,inLength-1,preorder,inorder);
}

