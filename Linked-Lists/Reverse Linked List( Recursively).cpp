node *reverse_linked_list_rec(node *head)
{
    //write your recursive code here
    if(head==NULL||head->next==NULL){
        return head;
    }
    node*smallOutput=reverse_linked_list_rec(head->next);
    
    node*temp=smallOutput;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    temp->next->next=NULL;
        
    return smallOutput;
    
    
    
}
