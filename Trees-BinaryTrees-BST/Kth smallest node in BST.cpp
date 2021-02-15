void inorder(BinaryTreeNode<int>* root,vector<int> &v){
    if(root==NULL){
     	return;   
    }
    
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
    
}
int findNode(BinaryTreeNode<int>* root, int k) {
		// Write your code here
	vector<int> v;
    inorder(root,v);
    
    return v[k-1];
}
