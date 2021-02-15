ListNode* AlterList(ListNode* head1, ListNode* head2) {
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    if(head1==NULL || head2==NULL){
        return NULL;
    }
    ListNode* h1=head1;
    ListNode* t1=head1;
    ListNode* h2=head2;
    ListNode* t2=head2;
    ListNode* oddh=NULL;
    ListNode* oddt=NULL;
    ListNode* evenh=NULL;
    ListNode* event=NULL;
    
    while(t1!=NULL && t2!=NULL){
        if(t1->data==t2->data){
            if(t1->data%2==0){
                if(evenh==NULL){
                    evenh=t1;
                    event=t1;
                }
                else{
                    event->next=t1;
                    event=t1;
                }
            }
            else{
                if(oddh==NULL){
                    oddh=t1;
                    oddt=t1;
                }
                else{
                    oddt->next=t1;
                    oddt=t1;
                }
            }
            t1=t1->next;
            t2=t2->next;
        }
        else{
            if(t1->data < t2->data){
                t1=t1->next;
            }
            else{
                t2=t2->next;
            }
        }
    }
    if(evenh==NULL && oddh!=NULL){
        oddt->next=NULL;
        return oddh;
    }
    else if(oddh==NULL&& evenh==NULL){
        return NULL;
    }
    else if(oddh==NULL){
        event->next=NULL;
        return evenh;
    }
    else{
    oddt->next=evenh;
    event->next=NULL;
    
    return oddh;
    }
    
}
