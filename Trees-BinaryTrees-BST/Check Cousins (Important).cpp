bool isSibling(BinaryTreeNode<int> *root, int a, int b) 
{ 
    // Base case 
    if (root==NULL|| root->left==NULL||root->right==NULL)
        return false; 
  
    return ((root->left->data==a && root->right->data==b)|| 
            (root->left->data==b && root->right->data==a)|| 
            isSibling(root->left, a, b)|| 
            isSibling(root->right, a, b)); 
} 
int level(BinaryTreeNode<int> *root, int val, int lev) 
{ 
    // base cases 
    if (root == NULL)
        return 0; 
    if (root->data == val)
        return lev; 
  
    // Return level if Node is present in left subtree 
    int l = level(root->left, val, lev+1); 
    if (l != 0)
        return l; 
  
    // Else search in right subtree 
    return level(root->right,val, lev+1); 
} 
bool isCousin(BinaryTreeNode<int> *root, int p, int q) {
    // Write your code here
    if ((level(root,p,1) == level(root,q,1)) && isSibling(root,p,q)==false) 
        return true; 
    else
        return false;
    

}

