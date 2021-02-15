BinaryTreeNode<int>* removeNode(BinaryTreeNode<int> *root, int X){
    /* Don't write main().
	* Don't read input, they are passed as function arguments.
	* Return output and don't print it.
	* Taking input and printing output is handled automatically.
	*/
    if(root==NULL)
        return NULL;
    
    if(X > root->data){
        root->right=removeNode(root->right,X);
        return root;
    }
    else if(X< root->data){
        root->left=removeNode(root->left,X);
    	return root;
    }
    
    else{
        //3 cases in case the root itself has to be deleted
        if(root->left==NULL && root->right==NULL){
 			free(root);
            return NULL;
        }
        else if(root->right==NULL){
            BinaryTreeNode<int>* temp=root->left;
            free(root);
            return temp;
        }
        else if(root->left==NULL){
            BinaryTreeNode<int>* temp=root->right;
            free(root);
            return temp;
        }
        else{
                BinaryTreeNode<int>* minNode=root->right;
                while(minNode->left!=NULL){
                    minNode=minNode->left;
                }
                
                int rightMin=minNode->data;
                root->data=rightMin;
                
                root->right=removeNode(root->right,rightMin);
                return root;
            }
    }
  
    

}
