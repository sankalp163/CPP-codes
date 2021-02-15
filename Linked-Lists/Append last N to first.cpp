Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    if(head==NULL||n==0){
        return head;
    }
    
    Node*temp=head;
    int length=1;
    while(temp->next!=NULL){
        temp=temp->next;
        length++;
    }
    temp=head;
    for(int i=1;i<length-n;i++){
        temp=temp->next;
    }
    Node*head2=temp->next;
    temp->next=NULL;
    Node*temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    
    temp2->next=head;
    
    return head2;
    
    
    
}
