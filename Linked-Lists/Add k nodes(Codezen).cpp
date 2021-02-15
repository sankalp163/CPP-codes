ListNode* AddKNodes(ListNode *head, int k) {
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    if(head==NULL){
        return NULL;
    }
    ListNode* temp=head;
    int counter=k-1;
    int sum=0;
    while(counter!=0 && temp->next!=NULL){
        sum+=temp->data;
        temp=temp->next;
        counter--;
    }
    
    ListNode* newNode= newListNode(sum+temp->data);
    ListNode* new_head=temp->next;
    temp->next=newNode;
    
    ListNode* smallList=AddKNodes(new_head,k);
    
    newNode->next=smallList;
    
    return head;
    
}
