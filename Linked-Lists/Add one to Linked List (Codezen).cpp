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

Node<int>* addOne(Node<int> *head) {
	// Write your code here
    reverse(&head);
    
    Node<int>* temp=head;
    if(temp->data!=9){
        temp->data=temp->data+1;
        reverse(&head);
        return head;
     }
    else{
        temp->data=0;
        temp=temp->next;
        while(temp->next!=NULL){
            if(temp->data==9){
                temp->data=0;
                temp=temp->next;
            }
            else{
                temp->data+=1;
                break;
            }
        }
    }
    if(temp->next==NULL){
        temp->data=0;
  		Node<int>* newNode=new Node<int>(1);
        temp->next=newNode;
        newNode->next=NULL;
    }
    reverse(&head);
    return head;
}

