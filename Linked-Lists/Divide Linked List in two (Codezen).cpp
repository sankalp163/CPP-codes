void reverse(Node<int> **head){
    Node<int>*curr=*head;
    Node<int>*prev=NULL;
	Node<int>*fwd=NULL;
    
    while(curr){
        fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;
    }
    *head=prev;
}


void AlternatingSplit(Node<int>* head) {
	// Write your code here
    reverse(&head);
    
    Node<int>*temp1=head;
    Node<int>*temp2=head->next;
    while(temp1!=NULL&&temp1->next!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next->next;
    }
    if(temp1!=NULL){
    cout<<temp1->data;
    }
    cout<<endl;
    while(temp2!=NULL&&temp2->next!=NULL){
        cout<<temp2->data<<" ";
        temp2=temp2->next->next;
    }
    if(temp2!=NULL){
    cout<<temp2->data;
    }
    
}

