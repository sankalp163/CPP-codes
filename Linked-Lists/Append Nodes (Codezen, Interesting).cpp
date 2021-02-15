ListNode *AddNafterMnodes(ListNode *head, int N, int M) {
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    if(head==NULL){
        return NULL;
    }
    
    int counter=1;
    int sum=0;
    ListNode* temp=head;
    while(counter<=M+N && temp->next!=NULL){
        if(counter<=M){
            temp=temp->next;
        }
        else if(counter>M && counter<M+N){
            sum+=temp->data;
            temp=temp->next;
        }
        else if(counter==M+N){
            sum+=temp->data;
        }
        counter++;
    }
    if(counter>M &&temp->next==NULL){
        sum+=temp->data;
    }
    ListNode* newNode=newListNode(sum);
    ListNode* newHead=temp->next;
   if(sum>0){
    temp->next=newNode;
   }
    ListNode* smallList=AddNafterMnodes(newHead,N,M);
    
    newNode->next=smallList;
    
    return head;
}
