void helper(TreeNode<int>* root, TreeNode<int>** first, 
                       TreeNode<int>** second) 
{ 
    if (root == NULL) 
        return; 
  
    // If first is NULL, make root equal to first 
    if (!(*first)) 
        *first = root; 
  
    // if root is greater than first then second 
    // will become first and update first equal 
    // to root 
    else if (root->data > (*first)->data) { 
        *second = *first; 
        *first = root; 
    } 
  
    // If root is less than first but greater than 
    // second 
    else if (!(*second) || root->data > (*second)->data) 
        *second = root; 
  
    // number of children of root 
    int numChildren = root->children.size(); 
  
    // recursively calling for every child 
    for (int i = 0; i < numChildren; i++){
        secondLargestUtil(root->children[i], first, second); 
    }
} 
TreeNode <int>* secondLargest(TreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
	TreeNode<int>* second = NULL; 
  
    // first will store the largest value in the tree 
    TreeNode<int>* first = NULL; 
  
    // calling the helper function 
    helper(root, &first, &second); 
  
    if (second == NULL) 
        return NULL; 
  
    // This handles the case when every element in tree are same. 
    if (first->data == second->data) 
        return NULL; 
  
    // return the second largest element 
    return second; 
}


