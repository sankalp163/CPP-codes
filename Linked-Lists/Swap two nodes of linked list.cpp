node* swap_nodes(node *head,int i,int j)
{
    //write your code here
    if(i==j){
        return NULL;
    }
    node*prev1=NULL;
    node*prev2=NULL;
    node*curr1=head;
    node*curr2=head;
    
    for(int count=1;count<=i;count++){
        prev1=curr1;
        curr1=curr1->next;
    }
    
    for(int count=1;count<=j;count++){
        prev2=curr2;
        curr2=curr2->next;
    }
    if(curr1==NULL||curr2==NULL){
        return NULL;
    }
    if(prev1!=NULL){
        prev1->next=curr2;
    }
    else{
        head=curr2;
    }
    
    if(prev2!=NULL){
        prev2->next=curr1;
    }
    else{
        head=curr1;
    }
    
    node*t=curr2->next;
    curr2->next=curr1->next;
    curr1->next=t;
    
    return head;
    
    
    
    

}

