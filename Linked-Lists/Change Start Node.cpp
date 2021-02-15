ListNode* ChangeHead(ListNode* head, int n){
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    ListNode*temp=head;
    int length=1;
    while(temp->next!=NULL){
        temp=temp->next;
    	length++;
    }
    if(length==n){
        return head;
    }
    temp=head;
    int count=1;
    while(count<length-n){
        temp=temp->next;
        count++;
    }
    ListNode*new_head=temp->next;
    temp->next=temp->next->next;
    
    new_head->next=head;
    head=new_head;
    
    return head;
}
