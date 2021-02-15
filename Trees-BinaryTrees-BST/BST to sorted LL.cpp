Node<int>* helper(Node<int>* head, BinaryTreeNode<int>* root) 
{ 
    // return head if root is null 
    if (root == NULL) { 
        return head; 
    } 
  
    // First make the sorted linked list 
    // of the left sub-tree 
    head = helper(head, root->left); 
    Node<int>* newNode = new Node<int>(root->data); 
    Node<int>* temp = head; 
    Node<int>* prev = NULL; 
  
    // If linked list is empty
    if (temp == NULL) { 
        head = newNode; 
    } 
    else {  
        while (temp != NULL) { 
                prev = temp; 
                temp = temp->next; 
            } 
            
        prev->next = newNode; 
	} 
    head = helper(head, root->right); 
    
    return head; 
} 
Node<int>* constructBST(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    Node<int>*ans=helper(NULL,root);
    
    return ans;
    
    
    
    
}
