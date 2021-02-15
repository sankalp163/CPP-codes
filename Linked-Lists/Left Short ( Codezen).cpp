ListNode* RemoveNodeWithGreaterLeft(ListNode *head) {
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    ListNode* prev=head;
    ListNode* curr=head->next;
    ListNode* temp=head;
    //ListNode* new_head=newListNode(head->data);
    //ListNode *new_tail=newListNode(head->data);
    while(curr!=NULL){
            if(curr->data >=prev->data){
                temp->next=curr;
                temp=temp->next;
            }
        
        
       	prev=prev->next;
        curr=curr->next;
        
    }
    temp->next=NULL;
    return head;
}
