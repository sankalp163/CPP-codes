node* kReverse(node*head,int n){
    //write your code here
   node* prev=NULL;
	node* curr=head;
	node* q;
	int counter=n;
	while(counter-- && curr!=NULL){
	q=curr->next;
	curr->next=prev;
	prev=curr;
	curr=q;
}
	if(head!=NULL) 
    	head->next=kReverse(q,n);
	head=prev;
    return head;
}
