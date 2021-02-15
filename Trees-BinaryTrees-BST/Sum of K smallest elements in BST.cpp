void inorder(BinaryTreeNode<int> *root,vector<int> &v){
    if(root==NULL){
     	return;   
    }
    
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
    
}
int ksmallestElementSum( BinaryTreeNode<int> *root, int k)
{	/*Write your code here. 
	 *Don't write main().
	 *Don't take input, it is passed as function argument.
	 *Don't print output.
	 *Taking input and printing output is handled automatically.
	*/ 
    vector<int> v;
    inorder(root,v);
    
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    
    return sum;
    
}

