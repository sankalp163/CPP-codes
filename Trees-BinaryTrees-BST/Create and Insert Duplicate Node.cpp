void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    BinaryTreeNode<int>* newNode=new BinaryTreeNode<int>(root->data);
    BinaryTreeNode<int>* temp=root->left;
    
    root->left=newNode;
    newNode->left=temp;
    if(root->left!=NULL)
    	insertDuplicateNode(root->left->left);
    if(root->right!=NULL)
    	insertDuplicateNode(root->right);
    
    

}

