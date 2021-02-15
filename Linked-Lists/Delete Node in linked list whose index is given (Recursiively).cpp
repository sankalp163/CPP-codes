Node* deleteNodeRec(Node *head, int i) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node* temp=head;
    
    if(temp==NULL){
        return head;
    }
    
    if(i==0){
        head=head->next;
        delete temp;
        return head;
    }
    
    Node* smallOutput=deleteNodeRec(head->next,i-1);
    
    head->next=smallOutput;
    
    return head;
    
    
}



