void deleteAlternateNodes(Node *head) {
    //Write your code here
    if(head==NULL || head->next==NULL){
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL && temp->next->next!=NULL){
        Node*a=temp->next;
        temp->next=a->next;
        temp=temp->next;
    }
    temp->next=NULL;
    
}
