Node<int>* moveToFront(Node<int> *head_ref) {
	// Write your code here
    Node<int>*temp=head_ref;
    Node<int>*prev=head_ref;
    
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    temp->next=head_ref;
    head_ref=prev->next;
    prev->next=NULL;
    
   
    return head_ref;
    
}

