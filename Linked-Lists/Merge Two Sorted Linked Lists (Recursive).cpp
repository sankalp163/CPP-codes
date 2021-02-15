Node* mergeTwoLLs(Node *head1, Node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    
    if(head1->data<head2->data){
        head1->next=mergeTwoLLs(head1->next,head2);
        return head1;
    }
    
    else{
        head2->next=mergeTwoLLs(head1,head2->next);
    	return head2;
    }
    
}



