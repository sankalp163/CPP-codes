node* skipMdeleteN(node  *head, int M, int N) {
    // Write your code here
  	if(head==NULL||M==0){
        return NULL;
    }
	node*temp=head;
    node*temp2;
    int count;
    while(temp){
       
        for(count=1;count<M && temp!=NULL;count++){
            temp=temp->next;
        }
        if(temp==NULL){
            return head;
        }
        temp2=temp->next;
        for(count=1;count<=N && temp2!=NULL;count++){
            node*a=temp2;
            temp2=temp2->next;
        	free(a);
        }
        temp->next=temp2;
    	temp=temp2;
	}

    	return head;
    
}

