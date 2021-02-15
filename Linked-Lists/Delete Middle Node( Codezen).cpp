Node<int>* deleteMid(Node<int> *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the given input itself.
     * No need to return pr print the output.
     * Taking input and printing output is handled automatically.
     */
    Node<int>* fast=head;
    Node<int>* slow=head;
    Node<int>* prev=head;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        prev=slow;
        slow=slow->next;
    }
    prev->next=slow->next;
    
    
    return head;
    
    

}
