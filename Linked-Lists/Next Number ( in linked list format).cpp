Node* reverse(Node *head){
    Node*curr=head;
    Node*prev=NULL;
    Node*fwd;
    
    while(curr){
        fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;
    }
    head=prev;
    return head;
}
Node* NextLargeNumber(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        head->data+=1;
        return head;
    }
    
    
    head=reverse(head);
    Node* temp=head;
    
    while(temp!=NULL){
        if(temp->data >=0 && temp->data<9){
            temp->data+=1;
            break;
        }
        else if(temp->data==9 && temp->next!=NULL){
            temp->data=0;
            temp=temp->next;
        }
        else if(temp->data==9 && temp->next==NULL){
            temp->data=0;
            Node* newnode=new Node(1);
            temp->next=newnode;
            break;
        }
    }
    
    head=reverse(head);
    
    return head;
}



