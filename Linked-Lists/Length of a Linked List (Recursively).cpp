int length(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node*temp=head;
    if(temp==NULL){
        return 0;
    }
    
    int smallOutput=length(head->next);
    
   return smallOutput+1;
    
}
