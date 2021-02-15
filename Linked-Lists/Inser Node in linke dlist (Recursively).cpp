Node* insertNodeRec(Node *head, int i, int data) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node* temp=head;
    Node* newNode= new Node(data);
    if(temp==NULL && i!=0){
        return head;
    }
    
    if(i==0){
        newNode->next=head;
        head=newNode;
    }
    
    Node* smallOutput=insertNodeRec(head->next,i-1,data);
    
    head->next=smallOutput;
    
    return head;
    
}
