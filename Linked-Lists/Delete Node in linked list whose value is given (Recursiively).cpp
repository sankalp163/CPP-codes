Node<int>* deleteNode(Node<int> *head, int x) {
    // Write your code here
   Node<int>* temp=head;
    
    if(temp==NULL){
        return head;
    }
    
    if(temp->data==x){
        head=head->next;
        return head;
    }
    
    Node<int>* smallOutput=deleteNode(head->next,x);
    
    head->next=smallOutput;
    
    return head;
    
}
