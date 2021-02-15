node* merge(node *head1, node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    
    node*new_head=NULL;
    node*new_tail=NULL;
    if(head1->data<=head2->data){
        new_head=head1;
        new_tail=head1;
        head1=head1->next;
    }
    else{
        new_head=head2;
        new_tail=head2;
        head2=head2->next;
    }
    while(head1!=NULL && head2!=NULL){
        if(head1->data<=head2->data){
            new_tail->next=head1;
            head1=head1->next;
            new_tail=new_tail->next;
        }
        else{
            new_tail->next=head2;
            head2=head2->next;
            new_tail=new_tail->next;
        }
    }
    while(head1){
        new_tail->next=head1;
        head1=head1->next;
        new_tail=new_tail->next;
    }
    while(head2){
        new_tail->next=head2;
        head2=head2->next;
        new_tail=new_tail->next;
    }
    new_tail->next=NULL;
    
    return new_head;
    
    
}
node* mergeSort(node*head) {
    //write your code here
    if(head==NULL||head->next==NULL){
        return head;
    }
    node*fast=head;
    node*slow=head;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    
    node*mid=slow;
    node*head2=mid->next;
    mid->next=NULL;
    
    head=mergeSort(head);
    head2=mergeSort(head2);
    
	head=merge(head,head2);
	return head;
}

