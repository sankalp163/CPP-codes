Node<int>* merge_reverse(Node<int>* head1,Node<int>* head2) {
	// Write your code here
    Node<int>*temp1=head1;
    Node<int>*temp2=head2;
   	Node<int>*mergeh=NULL;
    
    if(head1==NULL&&head2==NULL){
        return NULL;
    }
    
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->data <= temp2->data){
            Node<int>*temp=temp1->next;
            temp1->next=mergeh;
            mergeh=temp1;
            temp1=temp;
        }
        else{
            Node<int>*temp=temp2->next;
            temp2->next=mergeh;
            mergeh=temp2;
            temp2=temp;
        }
    }
    
    while(temp1!=NULL){
        	Node<int>*temp=temp1->next;
            temp1->next=mergeh;
            mergeh=temp1;
            temp1=temp;
    }
    while(temp2!=NULL){
        	Node<int>*temp=temp2->next;
            temp2->next=mergeh;
            mergeh=temp2;
            temp2=temp;
    }
    
    return mergeh;
    
    
}

