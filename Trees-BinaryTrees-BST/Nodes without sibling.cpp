void nodesWithoutSibling(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    if(root->left!=NULL && root->right==NULL){
        cout<<root->left->data<<endl;
    }
    if(root->left==NULL && root->right!=NULL){
        cout<<root->right->data<<endl;
    }
    
    nodesWithoutSibling(root->left);
    nodesWithoutSibling(root->right);


}

