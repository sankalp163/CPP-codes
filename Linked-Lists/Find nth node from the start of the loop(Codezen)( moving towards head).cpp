ListNode* FindNode(ListNode* head, int N) {
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    if(head==NULL){
        return NULL;
    }
    ListNode* slow=head;
    ListNode* fast=head;
    
    do{
        slow=slow->next;
        fast=fast->next->next;
    }
    while(fast!=slow);
    
    slow=head;
    int count=1;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
        count++;
    }
    if(count-N<=0){
        return NULL;
    }
	else{
        slow=head;
        for(int i=1;i<count-N;i++){
            slow=slow->next;
        }
        return slow;
    }
    
    
    
    
    
}
