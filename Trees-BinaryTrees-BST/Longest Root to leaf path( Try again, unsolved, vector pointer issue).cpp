vector<int>* helper(BinaryTreeNode<int>* root,vector<int>*  &v1){
    if(root==NULL)
        return v1;
    if(root->left==NULL && root->right==NULL){
        v1->push_back(root->data);
        return v1;
    }
    vector<int>* leftAns={};
    vector<int>* rightAns={};
    if(root->left)
    	leftAns=helper(root->left,v1);
    if(root->right)
    	rightAns=helper(root->right,v1);
	
    if(leftAns->size() > rightAns->size())
        leftAns->push_back(root->data);
    else
        rightAns->push_back(root->data);
    
    v1=leftAns->size() > rightAns->size()?leftAns:rightAns;
    return v1;
}
vector<int>* longestPath(BinaryTreeNode<int>* root) {
	// Write your code here
	
    vector<int>*v1=helper(root,v1);
    if(v1->size()==0)
        return NULL;
    return v1;
}
