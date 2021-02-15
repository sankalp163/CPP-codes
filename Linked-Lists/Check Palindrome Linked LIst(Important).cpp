void ReverseList(Node**head){
    Node* prev=NULL;
    Node*curr=*head;
    Node*fwd=NULL;
    
    while(curr){
        fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;
    }
    
    *head=prev;

}
bool compareLists(struct Node* head1, struct Node* head2)  
{  
    struct Node* temp1 = head1;  
    struct Node* temp2 = head2;  
  
    while (temp1 && temp2) {  
        if (temp1->data == temp2->data) {  
            temp1 = temp1->next;  
            temp2 = temp2->next;  
        }  
        else
            return 0;  
    }  
  
    /* Both are empty reurn 1*/
    if (temp1 == NULL && temp2 == NULL)  
        return 1;  
  
    /* Will reach here when one is NULL  
    and other is not */
    return 0;  
} 
bool isPalindrome(Node *head)
{
    //Write your code here
    Node*fast=head;
    Node*slow=head;
    Node* prev_slow=head;
    Node*second_list;
    Node*mid=NULL;
    bool res = true;
   if(head!=NULL && head->next!=NULL){
    while(fast!=NULL &&fast->next!=NULL){
        fast=fast->next->next;
        prev_slow=slow;
        slow=slow->next;
    }
    
    if(fast!=NULL){
        mid=slow;
        slow=slow->next;
    }
    second_list=slow;
    prev_slow->next=NULL;
    
    ReverseList(&second_list);
    
    res = compareLists(head, second_list);
   }
   	return res;
    
    
}
